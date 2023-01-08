#include "AddClienteFrame.h"
#include "string_conv.h"
#include "EditCliente.h"
#include <wx/msgdlg.h>

AddClienteFrame::AddClienteFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseAddClienteFrame(parent), sistema(m_sistema) {
	
}

AddClienteFrame::~AddClienteFrame() {}

void AddClienteFrame::ClickAgregar( wxCommandEvent& event )  {
	string nombre = wx_to_std(input_Nombre->GetValue());
	int dni = stoi(wx_to_std(input_DNI->GetValue()));
	string direccion = wx_to_std(input_Direccion->GetValue());
	string email = wx_to_std(input_Email->GetValue());
	string telefono = wx_to_std(input_Telefono->GetValue());
	
	Cliente cliente(nombre,dni,direccion,email,telefono);
	string errores = cliente.ValidarDatos();
	if(!errores.empty()){
		wxMessageBox(errores,"Error",wxOK|wxICON_ERROR,this);
	} else {
		cliente.AddCliente();
		sistema->CargarClientes();
		
		EndModal(1);
	}
}

void AddClienteFrame::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}


