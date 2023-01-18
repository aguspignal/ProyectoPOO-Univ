#ifndef VENTASCLIENTE_H
#define VENTASCLIENTE_H
#include "wxfb_project.h"
#include "Sistema.h"

class VentasCliente : public BaseVentasCliente {
private:
	Sistema *sistema;
	Cliente cliente;
	vector<int> ventas_cliente;
	
protected:
	void VerDetalleVenta( wxCommandEvent& event )  override;
	void ActualizarGridVentas();
	void ActualizarGridDetalles(int id_venta);
	
public:
	VentasCliente(wxWindow *parent, Sistema *m_sistema, int id, vector<int> ventas_cliente);
	~VentasCliente();
};

#endif
