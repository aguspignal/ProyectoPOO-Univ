#ifndef ADDCLIENTEFRAME_H
#define ADDCLIENTEFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class AddClienteFrame : public BaseAddClienteFrame {
	
private:
	Sistema *sistema;
	
protected:
	void ClickAgregar( wxCommandEvent& event )  override;
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	AddClienteFrame(wxWindow *parent, Sistema *m_sistema);
	~AddClienteFrame();
};

#endif

