#include "AddClienteFrame.h"
#include "string_conv.h"
#include "EditCliente.h"
#include <wx/msgdlg.h>

AddClienteFrame::AddClienteFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseAddClienteFrame(parent), sistema(m_sistema) {
	
}

AddClienteFrame::~AddClienteFrame() {}

void AddClienteFrame::ClickAgregar( wxCommandEvent& event )  {
	string errores;
	
	string nombre;
	if(input_Nombre->IsEmpty()){
		errores += "Nombre invalido\n";
	} else {
		nombre = wx_to_std(input_Nombre->GetValue());
	}
	
	long dni;
	if( input_DNI->IsEmpty() || !ValidarDNI(wx_to_std(input_DNI->GetValue())) ){
		errores += "DNI invalido\n";
	} else {
		input_DNI->GetValue().ToLong(&dni);
	}
	
	string direccion;
	if(input_Direccion->IsEmpty()){
		errores += "Direccion invalida\n";
	} else {
		direccion = wx_to_std(input_Direccion->GetValue());
	}
	
	string email;
	if(input_Email->IsEmpty()){
		errores += "Email invalido\n";
	} else {
		email = wx_to_std(input_Email->GetValue());
	}
	
	string telefono;
	if( input_Telefono->IsEmpty() || !ValidarTelefono(wx_to_std(input_Telefono->GetValue())) ){
		errores += "Telefono invalido\n";
	} else {
		telefono = wx_to_std(input_Telefono->GetValue());
	}
	
	if(errores.length()){
		wxMessageBox(errores,"Error",wxOK|wxICON_ERROR,this);
	} else {
		Cliente cliente(nombre,dni,direccion,email,telefono);
		cliente.AddCliente();
		sistema->LoadClientes();
		
		EndModal(1);
	}
}

void AddClienteFrame::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}


