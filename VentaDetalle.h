#ifndef VENTADETALLE_H
#define VENTADETALLE_H
#include <string>
using namespace std;

struct RegistroVentaDetalle {
	int id, id_venta, id_producto, cantidad;
	char descripcion[200];
	float valor_vendido, subtotal;
};

class VentaDetalle {
private:
	int id;
	int id_venta;
	string descripcion;
	int cantidad;
	float valor_vendido; 
	float subtotal;

public:
	VentaDetalle(int idVenta, string descripcion, int cantidad, float precio_producto);
	VentaDetalle(int id, int id_venta, string descripcion, int cantidad, float valor_vendido, float subtotal);
	
	/// ID
	int GetID();
	int GetIDVenta();
	int GetLastId();
	
	/// Producto
	string GetDescripcion();
	
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
