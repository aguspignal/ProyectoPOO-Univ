#ifndef ESTADISTICASFRAME_H
#define ESTADISTICASFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"
#include <tuple>
using namespace std;

class EstadisticasFrame : public BaseEstadisticas {
private:
	Sistema *sistema; 
	int year;
	int cant_ventas;
	float ganancias;
	vector<Venta> ventas_en_periodo;
	Cliente cliente_top;
	ProductoCantidad producto_top1;
	ProductoCantidad producto_top2;
	ProductoCantidad producto_top3;
	
protected:
	void ActualizarDatos( wxCommandEvent& event )  override;
	void ActualizarDatos();
	void SetClienteConMasVentas();
	void SetProductosMasVendidos();
	void SetGanancias();
	
public:
	EstadisticasFrame(wxWindow *parent, Sistema *m_sistema);
	~EstadisticasFrame();
};

#endif

