#ifndef ADDPRODUCTOFRAME_H
#define ADDPRODUCTOFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class AddProductoFrame : public BaseAddProductoFrame {
	
private:
	Sistema *sistema;
	
protected:
	void ClickAgregar( wxCommandEvent& event )  override;
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	AddProductoFrame(wxWindow *parent, Sistema *m_sistema);
	~AddProductoFrame();
};

#endif

