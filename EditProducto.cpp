#include "EditProducto.h"
#include "string_conv.h"

EditProducto::EditProducto(wxWindow *parent, Sistema *m_sistema, int prod_id) 
	: BaseEditProducto(parent), sistema(m_sistema), id(prod_id) {
	
}

EditProducto::~EditProducto() { }

void EditProducto::ClickGuardar( wxCommandEvent& event )  {
	string descripcion = wx_to_std(input_Descripcion->GetValue());
	float precio = input_Precio->GetValue();
	int stock = input_Stock->GetValue();	
	
	sistema->ModificarProducto(id,descripcion,precio,stock);
	sistema->CargarProductos();
	
	EndModal(1);
}

void EditProducto::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}



