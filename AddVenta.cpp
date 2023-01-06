#include "AddVenta.h"
#include "Venta.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

AddVenta::AddVenta(wxWindow *parent, Sistema *m_sistema) 
	: BaseAddVenta(parent), sistema(m_sistema) {
	
}
AddVenta::~AddVenta() {
	
}

float AddVenta::CalcularTotal(){
	float suma;
	for(int i=0; i<v.size(); i++){
		suma += v[i].prod.GetPrecio();
	}
	return suma;
}

/// Guardar ID Cliente
void AddVenta::AgregarCliente( wxCommandEvent& event )  {
	this-> id_cliente = stoi(wx_to_std(input_IDCliente->GetValue()));
	
	string str = sistema->GetClienteByID(id_cliente).GetNombre();
	str.append("  "+sistema->GetClienteByID(id_cliente).GetDNI());
	txt_DatosCliente->SetLabel(std_to_wx(str));
}

/// Guardar Producto y Cantidad
void AddVenta::AgregarProducto( wxCommandEvent& event )  {
	int id_producto = stoi(wx_to_std(input_IDProducto->GetValue()));
	Producto producto = sistema->GetProductoByID(id_producto);
	
	int cantidad = stoi(wx_to_std(to_string(input_Cantidad->GetValue())));
	
	ProductoCantidad ProdCant;
	ProdCant.prod = producto;
	ProdCant.cant = cantidad;
	v.push_back(ProdCant);
	
	txt_Monto->SetLabel(std_to_wx(to_string(CalcularTotal())));
}

/// Eliminar un producto agregado
void AddVenta::EliminarProducto( wxCommandEvent& event )  {
	event.Skip();
}

/// Guardar la venta
void AddVenta::ConfirmarVenta( wxCommandEvent& event )  {
	if(this->id_cliente == 0){
		wxMessageBox("No se ingreso cliente","Error",wxOK|wxICON_ERROR);
	} else {
		if(v.empty()){
			wxMessageBox("No se agregaron productos","Error",wxOK|wxICON_ERROR);
		} else {
//			Venta venta(this->id_cliente, this->v);
//			venta.AddVenta();
		}
	}
	
	EndModal(1);
}

void AddVenta::CancelarVenta( wxCommandEvent& event )  {
	EndModal(0);
}
