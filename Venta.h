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
	bool modificada = false;
};

class Venta {
private:
	int id;
	int id_cliente;
	float total;
	bool modificada = false;
	
public:
	Venta();
	Venta(int id_cliente, vector<ProductoCantidad> productos_cantidades);
	Venta(int id, int id_cliente, float total, bool modif);
	
	/// ID
	int GetID();
	int GetLastID();
	
	/// ID Cliente
	int GetIDCliente();
	void SetIDCliente(int id_cliente);
	
	/// Bool
	bool GetModif();
	void SetModifTrue();
	
	/// Total
	float GetTotal();
	void SetTotal(float total);
	float CalcularTotal(vector<ProductoCantidad> v);
	
	/// Agregar al archivo
	void AddVenta();
	
	~Venta(){};
};

#endif
