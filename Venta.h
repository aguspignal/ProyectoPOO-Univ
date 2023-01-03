#ifndef VENTA_H
#define VENTA_H

#include "Producto.h"
#include "VentaDetalle.h"

#include <vector>
using namespace std;

struct RegistroVenta {
	int id;
	int id_cliente;
	float total;
};

struct ProductoCantidad {
	Producto prod;
	int cant;
};

class Venta {
private:
	int id;
	int id_cliente;
	vector<VentaDetalle> detalles;
	float total;
	
public:
	Venta();
	Venta(int idCliente, vector<ProductoCantidad> productos);
	Venta(int id, int idCliente, vector<ProductoCantidad> productos);
	Venta(int id, int id_cliente, float total);
	
	/// ID
	int GetID();
	int GetLastID();
	
	/// ID Cliente
	int GetIDCliente();
	
	/// Detalles
	int GetDetallesSize();
	
	/// Total
	float GetTotal();
	float CalcularTotal(vector<ProductoCantidad> v);
		
	/// Agregar al archivo
	void AddVenta();
	
	~Venta(){};
};

#endif
