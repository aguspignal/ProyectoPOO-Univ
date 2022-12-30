#ifndef VENTADETALLE_H
#define VENTADETALLE_H

#include "Producto.h"

class VentaDetalle {
private:
	int id;
	int id_venta;
	Producto producto;
	int cantidad;

public:
	VentaDetalle(int idVenta, Producto prod, int cantidad);
	
	
	
	~VentaDetalle(){};
};

#endif
