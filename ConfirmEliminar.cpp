#include "ConfirmEliminar.h"

ConfirmEliminar::ConfirmEliminar(wxWindow *parent) : BaseConfirmEliminar(parent) {
	
}

void ConfirmEliminar::ClickSI( wxCommandEvent& event )  {
	EndModal(1);
}

void ConfirmEliminar::ClickNO( wxCommandEvent& event )  {
	EndModal(0);
}

ConfirmEliminar::~ConfirmEliminar() {
	
}

