#ifndef VENTASFRAME_H
#define VENTASFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class VentasFrame : public BaseVentasFrame {
	
private:
	Sistema *sistema;
	
protected:
	void OrdenarGrid( wxGridEvent& event )  override;
	void DisplayAddVenta( wxCommandEvent& event )  override;
	void DisplayDetalleVenta( wxCommandEvent& event )  override;
	void EliminarVenta( wxCommandEvent& event )  override;
	void ActualizarGridVentas();
	void ActualizarGridDetalles(int id_venta);
	
public:
	VentasFrame(wxWindow *parent, Sistema *m_sistema);
	~VentasFrame();
};

#endif

