#ifndef VERCLIENTESFRAME_H
#define VERCLIENTESFRAME_H
#include "wxfb_project.h"

class VerClientesFrame : public BaseVerClientes {
	
private:
	
protected:
	void OrdenarGrid( wxGridEvent& event )  override;
	void AgregarCliente( wxCommandEvent& event )  override;
	
public:
	VerClientesFrame(wxWindow *parent=NULL);
	~VerClientesFrame();
};

#endif

