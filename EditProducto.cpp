#include "EditProducto.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

EditProducto::EditProducto(wxWindow *parent, Sistema *m_sistema, int prod_id) 
	: BaseEditProducto(parent), sistema(m_sistema), id(prod_id) {
	
	Producto producto = sistema->GetProductoByID(id);
	input_Descripcion->SetValue(std_to_wx(producto.GetDescripcion()));
	input_Precio->SetValue(std_to_wx(to_string(producto.GetPrecio())));
	input_Stock->SetValue(std_to_wx(to_string(producto.GetStock())));
}

EditProducto::~EditProducto() { }

/// -- GUARDAR Cambios
void EditProducto::ClickGuardar( wxCommandEvent& event )  {
	string descripcion = wx_to_std(input_Descripcion->GetValue());
	if(descripcion.empty()){
		wxMessageBox("Nombre invalido","Error",wxOK|wxICON_ERROR,this);
	} else {
		float precio = input_Precio->GetValue();
		int stock = input_Stock->GetValue();	
		
		sistema->ModificarProducto(id,descripcion,precio,stock);
		sistema->LoadProductos();
		
		EndModal(1);
	}
}

void EditProducto::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}



