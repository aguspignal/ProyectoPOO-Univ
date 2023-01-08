#ifndef PRODUCTOSFRAME_H
#define PRODUCTOSFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class ProductosFrame : public BaseProductosFrame {
	
private:
	Sistema *sistema;
	
protected:
	void OrdenarGrid( wxGridEvent& event )  override;
	void ActualizarGrid( wxCommandEvent& event )  override;
	void BuscarProducto( wxCommandEvent& event )  override;
	void DisplayEditarProducto( wxCommandEvent& event )  override;
	void EliminarProducto( wxCommandEvent& event )  override;
	void DisplayAddProducto( wxCommandEvent& event )  override;
	void ActualizarGrid();
	
public:
	ProductosFrame(wxWindow *parent, Sistema *m_sistema);
	~ProductosFrame();
};

#endif

