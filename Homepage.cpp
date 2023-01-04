#include "Homepage.h"
#include "ProductosFrame.h"
#include "ClientesFrame.h"
#include "VentasFrame.h"

Homepage::Homepage(Sistema *m_sistema) 
	: BaseHomepage(nullptr), sistema(m_sistema) {
	
}

void Homepage::DisplayProductsFrmae( wxCommandEvent& event )  {
	ProductosFrame *win = new ProductosFrame(this,sistema);
	win->Show();
}

void Homepage::DisplayClientesFrame( wxCommandEvent& event )  {
	ClientesFrame *win = new ClientesFrame(this,sistema);
	win->Show();
}

void Homepage::DisplayVentasFrame( wxCommandEvent& event )  {
	VentasFrame *win = new VentasFrame(this);
	win->Show();
}

Homepage::~Homepage() {
	
}

