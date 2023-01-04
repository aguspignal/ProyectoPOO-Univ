#include "VentasFrame.h"

VentasFrame::VentasFrame(wxWindow *parent) : BaseVentasFrame(parent) {
	
}

void VentasFrame::DisplayAddVenta( wxCommandEvent& event )  {
	event.Skip();
}

void VentasFrame::DisplayDetalleVenta( wxCommandEvent& event )  {
	event.Skip();
}

void VentasFrame::DisplayConfirmation( wxCommandEvent& event )  {
	event.Skip();
}

VentasFrame::~VentasFrame() {
	
}

