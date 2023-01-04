#ifndef CONFIRM_H
#define CONFIRM_H
#include "wxfb_project.h"

class Confirm : public BaseConfirm {
	
private:
	
protected:
	void ClickSI( wxCommandEvent& event )  override;
	void ClickNO( wxCommandEvent& event )  override;
	
public:
	Confirm(wxWindow *parent=NULL);
	~Confirm();
};

#endif

