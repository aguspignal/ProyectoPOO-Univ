#ifndef CONFIRMELIMINAR_H
#define CONFIRMELIMINAR_H
#include "wxfb_project.h"

class ConfirmEliminar : public BaseConfirmEliminar {
	
private:
	
protected:
	void ClickSI( wxCommandEvent& event )  override;
	void ClickNO( wxCommandEvent& event )  override;
	
public:
	ConfirmEliminar(wxWindow *parent=NULL);
	~ConfirmEliminar();
};

#endif

