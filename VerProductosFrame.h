#ifndef VERPRODUCTOSFRAME_H
#define VERPRODUCTOSFRAME_H
#include "wxfb_project.h"

class VerProductosFrame : public BaseVerProductos {
	
private:
	
protected:
	void OrdenarGrid( wxGridEvent& event )  override;
	void AgregarProducto( wxCommandEvent& event )  override;
	
public:
	VerProductosFrame(wxWindow *parent=NULL);
	~VerProductosFrame();
};

#endif

