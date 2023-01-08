#include "EditCliente.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

EditCliente::EditCliente(wxWindow *parent, Sistema *m_sistema, int cliente_id) 
	: BaseEditCliente(parent), sistema(m_sistema), id(cliente_id) {
	
}

void EditCliente::ClickGuardar( wxCommandEvent& event )  {
	string nombre = wx_to_std(input_Nombre->GetValue());
	int DNI = stoi(wx_to_std(input_DNI->GetValue()));	
	string direccion = wx_to_std(input_Direccion->GetValue());
	string email = wx_to_std(input_Email->GetValue());
	string telefono = wx_to_std(input_Telefono->GetValue());
	
	Cliente c(nombre, DNI, direccion, email, telefono);
	string errores = c.ValidarDatos();
	if(errores.size()){
		wxMessageBox(errores,"Error",wxOK|wxICON_ERROR,this);
	} else {
		sistema->ModificarCliente(id,nombre,DNI,direccion,email,telefono);
		sistema->CargarClientes();
		
		EndModal(1);
	}
}

void EditCliente::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

EditCliente::~EditCliente() {
	
}

