#include "AddVenta.h"
#include "Venta.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "VerClientesFrame.h"
#include <string>
using namespace std;
AddVenta::AddVenta(wxWindow *parent, Sistema *m_sistema) 
	: BaseAddVenta(parent), sistema(m_sistema) {
	
}
AddVenta::~AddVenta() {}

void AddVenta::ActualizarGrid(){
	if(gridDetalles->GetNumberRows() != 0){
		gridDetalles->DeleteRows(0,gridDetalles->GetNumberRows());
	}
	
	for(int i=0; i<prods_seleccionados.size(); i++){
		gridDetalles->AppendRows();
		gridDetalles->SetCellValue(i,0, prods_seleccionados[i].producto.GetDescripcion());
		gridDetalles->SetCellValue(i,1, to_string(prods_seleccionados[i].producto.GetPrecio()));
		gridDetalles->SetCellValue(i,2, to_string(prods_seleccionados[i].cantidad));
		gridDetalles->SetCellValue(i,3, to_string(prods_seleccionados[i].producto.GetPrecio() * prods_seleccionados[i].cantidad));
	}	
	gridProductos->SetColFormatFloat(1,-1,2);
	gridProductos->SetColFormatFloat(3,-1,2);
	txt_Monto->SetLabel(to_string(CalcularTotal()));
}

/// -- Total
float AddVenta::CalcularTotal(){
	float suma;
	for(int i=0; i<prods_seleccionados.size(); i++){
		suma += (prods_seleccionados[i].producto.GetPrecio() * prods_seleccionados[i].cantidad);
	}
	return suma;
}

/// Buscar Cliente
void AddVenta::BuscarCliente( wxCommandEvent& event ){
	if(!input_Cliente->IsEmpty()){
		string busqueda = wx_to_std(input_Cliente->GetValue());
		vector<int> resultados = sistema->BuscarClientes(busqueda);
		
		if(resultados.empty()){
			wxMessageBox("No se encontraron clientes","Error",wxOK|wxICON_ERROR);	
		} else {
			VerClientesFrame *win = new VerClientesFrame(this,sistema,busqueda,resultados);
			id_cliente = win->ShowModal();
			Cliente cliente = sistema->GetClienteByID(id_cliente);
			if(cliente.GetID() != 0){
				txt_DatosCliente->SetLabel(cliente.GetNombre()+" - "+to_string(cliente.GetDNI())+" - "+cliente.GetDireccion());
			}
		}
	}
}

/// Buscar Producto
void AddVenta::BuscarProducto( wxCommandEvent& event )  {
	if(!input_Producto->IsEmpty()){
		string busqueda = wx_to_std(input_Producto->GetValue());
		vector<int> resultados = sistema->BuscarProductos(busqueda);
		
		if(resultados.empty()){
			wxMessageBox("No se encontraron productos","Error",wxOK|wxICON_ERROR);	
		} else {
			if(gridProductos->GetNumberRows() != 0){
				gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
			}
			for(int i=0; i<resultados.size(); i++){
				Producto producto = sistema->GetProductoByID(resultados[i]);
				gridProductos->AppendRows();
				gridProductos->SetCellValue(i,0, producto.GetDescripcion());
				gridProductos->SetCellValue(i,1, to_string(producto.GetPrecio()));
				if(producto.GetStock() <= 0){
					gridProductos->SetCellValue(i,2, "Sin stock");
				} else {
					gridProductos->SetCellValue(i,2, to_string(producto.GetStock()));
				}
			}
			gridProductos->SetColFormatFloat(1,-1,2);
		}
	}
}

/// Seleccionar producto
void AddVenta::SeleccionarProducto( wxGridEvent& event ) {
	if(gridProductos->GetNumberRows() != 0 && !gridProductos->GetCellValue(event.GetRow(),0).IsEmpty()){
		id_prod = stoi(wx_to_std(gridProductos->GetCellValue(event.GetRow(),0)));
		txt_SelectProducto->SetLabel(gridProductos->GetCellValue(event.GetRow(),1));
	}
}

/// Agregar detalle
void AddVenta::AgregarProducto( wxCommandEvent& event )  {
	if(id_prod != 0){
		ProductoCantidad prod_cant;
		prod_cant.producto = sistema->GetProductoByID(id_prod);
		
		if(input_Cantidad->GetValue() > prod_cant.producto.GetStock()){
			wxMessageBox("Stock no disponible","Error",wxOK|wxICON_ERROR);
		} else {
			prod_cant.cantidad = input_Cantidad->GetValue();
			prods_seleccionados.push_back(prod_cant);
			ActualizarGrid();
		}
	}
}

/// Quitar producto de detalles
void AddVenta::QuitarProducto( wxCommandEvent& event )  {
	if(gridDetalles->GetNumberRows() != 0){
		int row = gridDetalles->GetGridCursorRow();
		
		ProductoCantidad prod_cant;
		int id_selected_prod = stoi(wx_to_std(gridProductos->GetCellValue(row,0)));
		prod_cant.producto = sistema->GetProductoByID(id_selected_prod);
		
		auto it = find(prods_seleccionados.begin(), prods_seleccionados.end(), prod_cant);
		prods_seleccionados.erase(it);
		
		gridDetalles->DeleteRows(row);
		ActualizarGrid();
	}
}

/// Guardar la venta
void AddVenta::ConfirmarVenta( wxCommandEvent& event )  {
	string errores;
	Cliente cliente = sistema->GetClienteByID(id_cliente);
	if(cliente.GetID() == 0){
		errores += "No selecciono ningun cliente\n";
	}
	if(prods_seleccionados.empty()){
		errores += "No selecciono ningun producto\n";
	}
	if(errores.size()){
		wxMessageBox(errores,"Error",wxOK|wxICON_ERROR);
	} else {
		int choice = wxMessageBox("Esta seguro de confirmar la venta?","Warning",wxYES_NO|wxICON_INFORMATION);
		if(int choice = wxYES){
			Venta venta(id_cliente,prods_seleccionados);
			
			wxDateTime fecha = input_Fecha->GetValue();
			venta.SetFecha(fecha.GetYear(), fecha.GetMonth()+1, fecha.GetDay());
			
			venta.AddVenta();
			for(int i=0; i<prods_seleccionados.size(); i++){
				sistema->RetirarStockProducto(prods_seleccionados[i].producto.GetID(), prods_seleccionados[i].cantidad);
			}
			sistema->LoadProductos();
			sistema->LoadVentas();
			sistema->LoadDetallesVenta();
		}
		EndModal(1);
	}
}

/// Cancelar venta
void AddVenta::CancelarVenta( wxCommandEvent& event )  {
	EndModal(0);
}

