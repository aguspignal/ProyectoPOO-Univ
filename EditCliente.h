#ifndef EDITCLIENTE_H
#define EDITCLIENTE_H
#include "wxfb_project.h"
#include "Sistema.h"

class EditCliente : public BaseEditCliente {
	
private:
	Sistema *sistema;
	int id;
	
protected:
	void ClickGuardar( wxCommandEvent& event )  override;
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	EditCliente(wxWindow *parent, Sistema *m_sistema, int cliente_id);
	~EditCliente();
};

#endif

