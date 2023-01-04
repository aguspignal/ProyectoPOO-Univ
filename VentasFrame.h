#ifndef VENTASFRAME_H
#define VENTASFRAME_H
#include "wxfb_project.h"

class VentasFrame : public BaseVentasFrame {
	
private:
	
protected:
	void DisplayAddVenta( wxCommandEvent& event )  override;
	void DisplayDetalleVenta( wxCommandEvent& event )  override;
	void DisplayConfirmation( wxCommandEvent& event )  override;
	
public:
	VentasFrame(wxWindow *parent=NULL);
	~VentasFrame();
};

#endif

