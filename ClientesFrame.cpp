#include "ClientesFrame.h"

ClientesFrame::ClientesFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseClientesFrame(parent), sistema(m_sistema) {
	
}

ClientesFrame::~ClientesFrame() { }

void ClientesFrame::BackToHome( wxCommandEvent& event )  {
	event.Skip();
}

