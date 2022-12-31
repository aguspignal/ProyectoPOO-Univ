#include "AddClienteFrame.h"
#include "string_conv.h"
#include "EditCliente.h"

AddClienteFrame::AddClienteFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseAddClienteFrame(parent), sistema(m_sistema) {
	
}

AddClienteFrame::~AddClienteFrame() { }

void AddClienteFrame::ClickAgregar( wxCommandEvent& event )  {
	string nombre = wx_to_std(input_Nombre->GetValue());
	int DNI = input_DNI->GetValue();	
	
	Cliente cliente(nombre,DNI);
	cliente.AddCliente();
	sistema->CargarClientes();
	
	EndModal(1);
}

void AddClienteFrame::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}


