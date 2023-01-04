#ifndef ADDVENTA_H
#define ADDVENTA_H
#include "wxfb_project.h"

class AddVenta : public BaseAddVenta {
	
private:
	
protected:
	void DisplayConfirmar( wxCommandEvent& event )  override;
	
public:
	AddVenta(wxWindow *parent=NULL);
	~AddVenta();
};

#endif

