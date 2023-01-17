#include "EditCliente.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

EditCliente::EditCliente(wxWindow *parent, Sistema *m_sistema, int cliente_id) 
	: BaseEditCliente(parent), sistema(m_sistema), id(cliente_id) {
	
	Cliente cliente = sistema->GetClienteByID(id);
	input_Nombre->SetValue(std_to_wx(cliente.GetNombre()));
	input_DNI->SetValue(std_to_wx(to_string(cliente.GetDNI())));
	input_Direccion->SetValue(std_to_wx(cliente.GetDireccion()));
	input_Email->SetValue(std_to_wx(cliente.GetEmail()));
	input_Telefono->SetValue(std_to_wx(cliente.GetTelefono()));
}

EditCliente::~EditCliente(){}

void EditCliente::ClickGuardar( wxCommandEvent& event )  {
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
		sistema->ModificarCliente(id,nombre,dni,direccion,email,telefono);
		sistema->LoadClientes();
		
		EndModal(1);
	}
}

void EditCliente::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

