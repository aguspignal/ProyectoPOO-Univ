#ifndef VENTADETALLE_H
#define VENTADETALLE_H

struct RegistroVentaDetalle {
	int id, id_venta, id_producto, cantidad;
	float valor_vendido, subtotal;
};

class VentaDetalle {
private:
	int id;
	int id_venta;
	int id_producto;
	int cantidad;
	float valor_vendido; 
	float subtotal;

public:
	VentaDetalle(int idVenta, int cantidad, int id_producto, float precio_producto);
	VentaDetalle(int id, int id_venta, int id_producto, int cantidad, float valor_vendido, float subtotal);
	
	/// ID
	int GetID();
	int GetIDVenta();
	int GetLastId();
	
	/// Producto
	int GetIDProducto();
	
	/// Valor vendido
	float GetValorVendido();
	
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
