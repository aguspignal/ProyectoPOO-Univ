#ifndef EDITPRODUCTO_H
#define EDITPRODUCTO_H
#include "wxfb_project.h"
#include "Sistema.h"

class EditProducto : public BaseEditProducto {
	
private:
	Sistema *sistema;
	int id;
	
protected:
	void ClickGuardar( wxCommandEvent& event )  override;
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	EditProducto(wxWindow *parent, Sistema *m_sistema, int prod_id);
	~EditProducto();
};

#endif

