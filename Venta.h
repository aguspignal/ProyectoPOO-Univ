#ifndef VENTA_H
#define VENTA_H

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
	Venta(int idCliente, vector<Producto> articulos);
	
	
	int getLastID();
	
	~Venta(){};
};

#endif
