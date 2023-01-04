#include "AddVenta.h"

AddVenta::AddVenta(wxWindow *parent) : BaseAddVenta(parent) {
	
}

void AddVenta::DisplayConfirmar( wxCommandEvent& event )  {
	event.Skip();
}

AddVenta::~AddVenta() {
	
}

