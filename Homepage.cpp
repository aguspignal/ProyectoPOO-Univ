#include "Homepage.h"
#include "ProductosFrame.h"
#include "ClientesFrame.h"
#include "VentasFrame.h"
#include "EstadisticasFrame.h"
#include <wx/statbmp.h>

Homepage::Homepage(Sistema *m_sistema) 
	: BaseHomepage(nullptr), sistema(m_sistema) {
	
}

void Homepage::DisplayProductsFrmae( wxCommandEvent& event )  {
	ProductosFrame *win = new ProductosFrame(this,sistema);
	win->ShowModal();
}

void Homepage::DisplayClientesFrame( wxCommandEvent& event )  {
	ClientesFrame *win = new ClientesFrame(this,sistema);
	win->ShowModal();
}

void Homepage::DisplayVentasFrame( wxCommandEvent& event )  {
	VentasFrame *win = new VentasFrame(this,sistema);
	win->ShowModal();
}

void Homepage::DisplayEstadisticas( wxCommandEvent& event )  {
	EstadisticasFrame *win = new EstadisticasFrame(this,sistema);
	win->ShowModal();
}

Homepage::~Homepage() {
	
}


