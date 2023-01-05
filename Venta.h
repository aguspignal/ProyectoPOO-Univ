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

class Venta {
private:
	int id;
	int id_cliente;
	float total;
	
public:
	Venta();
	Venta(int id_cliente, vector<ProductoCantidad> v);
	Venta(int id, int id_cliente, float total);
	
	/// ID
	int GetID();
	int GetLastID();
	
	/// ID Cliente
	int GetIDCliente();
	void SetIDCliente(int id_cliente);
	
	/// Detalles
	int GetDetallesSize();
	
	/// Total
	float GetTotal();
	void SetTotal(float total);
	float CalcularTotal(vector<ProductoCantidad> v);
	
	/// Agregar al archivo
	void AddVenta();
	
	~Venta(){};
};

#endif
