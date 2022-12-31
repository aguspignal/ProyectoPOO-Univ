#include "EditCliente.h"
#include "string_conv.h"

EditCliente::EditCliente(wxWindow *parent, Sistema *m_sistema, int cliente_id) 
	: BaseEditCliente(parent), sistema(m_sistema), id(cliente_id) {
	
}

void EditCliente::ClickGuardar( wxCommandEvent& event )  {
	string nombre = wx_to_std(input_Nombre->GetValue());
	int DNI = input_DNI->GetValue();	
	
	sistema->ModificarCliente(id,nombre,DNI);
	sistema->CargarClientes();
	
	EndModal(1);
}

void EditCliente::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

EditCliente::~EditCliente() {
	
}

