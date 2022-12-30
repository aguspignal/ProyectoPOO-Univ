#include "Homepage.h"
#include "ProductosFrame.h"
#include "ClientesFrame.h"

Homepage::Homepage(Sistema *m_sistema) 
	: BaseHomepage(nullptr), sistema(m_sistema) {
	
}

void Homepage::DisplayProductsFrmae( wxCommandEvent& event )  {
//	this->Hide();
	ProductosFrame *win = new ProductosFrame(this,sistema);
	win->Show();
}

void Homepage::DisplayClientesFrame( wxCommandEvent& event )  {
//	this->Hide();
	ClientesFrame *win = new ClientesFrame(this,sistema);
	win->Show();
}

void Homepage::DisplayVentasFrame( wxCommandEvent& event )  {
//	VentasFrame *win = new ProductosFrame(this);
//	win->Show();
}

Homepage::~Homepage() {
	
}

