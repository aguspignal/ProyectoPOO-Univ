#ifndef VENTADETALLE_H
#define VENTADETALLE_H

#include "Producto.h"

struct RegistroVentaDetalle {
	int id, id_venta, cant;
	float subtotal;
	RegistroProducto reg_prod;
};

class VentaDetalle {
private:
	int id;
	int id_venta;
	Producto producto;
	int cantidad;
	float subtotal;

public:
	VentaDetalle(int idVenta, Producto prod, int cant);
	VentaDetalle(int id, int id_venta, int cantidad, float subtotal, Producto producto);
	
	/// ID
	int GetID();
	int GetIDVenta();
	int GetLastId();
	
	/// Producto
	Producto GetProducto();
	
	/// Cantidad
	int GetCantidad();
	void SetCantidad(int cant);
	
	/// Subtotal
	float GetSubtotal();
	
	/// Agregar al archivo
	void AddVentaDetalle();
	
	~VentaDetalle(){};
};

#endif
