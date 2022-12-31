#ifndef VENTA_H
#define VENTA_H

#include "Producto.h"

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
	Venta(int idCliente, vector<Producto> v);
	Venta(int idCliente, float total);
	Venta(int id, int idCliente, vector<Producto> v);
	Venta(int id, int idCliente, float total);
	
	/// ID
	int GetID();
	int GetLastID();
	
	/// ID Cliente
	int GetIDCliente();
	
	/// Total
	float GetTotal();
	float CalcularTotal(vector<Producto> v);
	
	~Venta(){};
};

#endif
