#include "Confirm.h"

Confirm::Confirm(wxWindow *parent) : BaseConfirm(parent) {
	
}

void Confirm::ClickSI( wxCommandEvent& event )  {
	EndModal(1);
}

void Confirm::ClickNO( wxCommandEvent& event )  {
	EndModal(0);
}

Confirm::~Confirm() {
	
}

