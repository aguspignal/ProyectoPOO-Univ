#include "VerClientesFrame.h"

VerClientesFrame::VerClientesFrame(wxWindow *parent) : BaseVerClientes(parent) {
	
}

void VerClientesFrame::OrdenarGrid( wxGridEvent& event )  {
	event.Skip();
}

void VerClientesFrame::AgregarCliente( wxCommandEvent& event )  {
	event.Skip();
}

VerClientesFrame::~VerClientesFrame() {
	
}

