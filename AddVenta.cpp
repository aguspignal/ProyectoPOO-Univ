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

float AddVenta::CalcularTotal(){
	float suma;
	for(int i=0; i<prods_seleccionados.size(); i++){
		suma += (prods_seleccionados[i].prod.GetPrecio() * prods_seleccionados[i].cant);
	}
	return suma;
}

void AddVenta::ActualizarGrid(){
	if(gridDetalles->GetNumberRows() != 0){
		gridDetalles->DeleteRows(0,gridDetalles->GetNumberRows());
	}
	
	for(int i=0; i<prods_seleccionados.size(); i++){
		gridDetalles->AppendRows();
		gridDetalles->SetCellValue(i,0,to_string(prods_seleccionados[i].prod.GetID()));
		gridDetalles->SetCellValue(i,1,prods_seleccionados[i].prod.GetDescripcion());
		gridDetalles->SetCellValue(i,2,to_string(prods_seleccionados[i].prod.GetPrecio()));
		gridDetalles->SetCellValue(i,3,to_string(prods_seleccionados[i].cant));
		gridDetalles->SetCellValue(i,4,to_string(prods_seleccionados[i].prod.GetPrecio() * prods_seleccionados[i].cant));
	}
	
	txt_Monto->SetLabel(to_string(CalcularTotal()));
}

/// Buscar Cliente
void AddVenta::BuscarCliente( wxCommandEvent& event ){
	if(input_Cliente->IsEmpty()){
		wxMessageBox("Ingrese un cliente","Error",wxOK|wxICON_HAND);
	} else {
		string busqueda = wx_to_std(input_Cliente->GetValue());
		vector<int> resultados = sistema->BuscarClientes(busqueda);
		
		if(resultados.empty()){
			wxMessageBox("No se encontraron clientes","Error",wxOK|wxICON_ERROR);	
		} else {
			VerClientesFrame *win = new VerClientesFrame(this,sistema,busqueda,resultados);
			id_cliente = win->ShowModal();
			if(id_cliente != 0){
				txt_DatosCliente->SetLabel(sistema->GetClienteByID(id_cliente).GetNombre()+" - "+to_string(sistema->GetClienteByID(id_cliente).GetDNI())+" - "+sistema->GetClienteByID(id_cliente).GetDireccion());
			}
		}
	}
}

/// Buscar Producto
void AddVenta::BuscarProducto( wxCommandEvent& event )  {
	if(input_Producto->IsEmpty()){
		wxMessageBox("Ingrese un producto","Error",wxOK|wxICON_HAND);
	} else {
		string busqueda = wx_to_std(input_Producto->GetValue());
		vector<int> resultados = sistema->BuscarProductos(busqueda);
		
		if(resultados.empty()){
			wxMessageBox("No se encontraron productos","Error",wxOK|wxICON_ERROR);	
		} else {
			if(gridProductos->GetNumberRows() != 0){
				gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
			}
			for(int i=0; i<resultados.size(); i++){
				Producto prod = sistema->GetProductoByID(resultados[i]);
				gridProductos->AppendRows();
				gridProductos->SetCellValue(i,0,to_string(prod.GetID()));
				gridProductos->SetCellValue(i,1,prod.GetDescripcion());
				gridProductos->SetCellValue(i,2,to_string(prod.GetPrecio()));
				gridProductos->SetCellValue(i,3,to_string(prod.GetStock()));
			}
		}
	}
}

/// Seleccionar producto
void AddVenta::SeleccionarProducto( wxGridEvent& event ) {
	if(gridProductos->GetNumberRows() != 0){
		int row = event.GetRow();
		if(!gridProductos->GetCellValue(row,0).IsEmpty()){
			id_prod = stoi(wx_to_std(gridProductos->GetCellValue(row,0)));
		}
	}
}

/// Agregar detalle
void AddVenta::AgregarProducto( wxCommandEvent& event )  {
	if(id_prod != 0){
		ProductoCantidad prod_cant;
		prod_cant.prod = sistema->GetProductoByID(id_prod);
		prod_cant.cant = input_Cantidad->GetValue();
		prods_seleccionados.push_back(prod_cant);
		ActualizarGrid();
	}
}

/// Quitar producto de detalles
void AddVenta::QuitarProducto( wxCommandEvent& event )  {
	if(gridDetalles->GetNumberRows() != 0){
		int row = gridDetalles->GetGridCursorRow();
		
		ProductoCantidad prod_cant;
		prod_cant.prod = sistema->GetProductoByID(stoi(wx_to_std(gridProductos->GetCellValue(row,0))));
		
		auto it = find(prods_seleccionados.begin(), prods_seleccionados.end(), prod_cant);
		prods_seleccionados.erase(it);
		
		gridDetalles->DeleteRows(row);
		ActualizarGrid();
	}
}

/// Guardar la venta
void AddVenta::ConfirmarVenta( wxCommandEvent& event )  {
	string errores;
	if(id_cliente == 0){
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
			venta.AddVenta();
			sistema->CargarVentas();
			sistema->CargarDetallesVenta();
		}
		EndModal(1);
	}
}

/// Cancelar venta
void AddVenta::CancelarVenta( wxCommandEvent& event )  {
	EndModal(0);
}

/// Ordenar grid detalles
void AddVenta::OrdenarGrid( wxGridEvent& event )  {
	event.Skip();
}



