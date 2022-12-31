#include "AddProductoFrame.h"
#include "string_conv.h"
#include <string>
#include "Producto.h"
using namespace std;

AddProductoFrame::AddProductoFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseAddProductoFrame(parent), sistema(m_sistema) {
	
}

AddProductoFrame::~AddProductoFrame() {
	
}

void AddProductoFrame::ClickAgregar( wxCommandEvent& event )  {
	string descripcion = wx_to_std(input_Descripcion->GetValue());
	float precio = input_Precio->GetValue();
	int stock = input_Stock->GetValue();	
	
	Producto prod(descripcion,precio,stock);
	prod.AddProducto();
	sistema->CargarProductos();
	
	EndModal(1);
}

void AddProductoFrame::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

