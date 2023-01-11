#include "VerProductosFrame.h"

VerProductosFrame::VerProductosFrame(wxWindow *parent) : BaseVerProductos(parent) {
	
}

void VerProductosFrame::OrdenarGrid( wxGridEvent& event )  {
	event.Skip();
}

void VerProductosFrame::AgregarProducto( wxCommandEvent& event )  {
	event.Skip();
}

VerProductosFrame::~VerProductosFrame() {
	
}

