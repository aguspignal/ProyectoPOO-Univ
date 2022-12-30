#ifndef SISTEMA_H
#define SISTEMA_H

#include "Producto.h"
#include "Cliente.h"

#include <string>
#include <vector>
using namespace std;

class Sistema {
	vector<Producto> productos;
	vector<Cliente> clientes;
	
public:
	Sistema();
	
	void ActualizarProductos();
	void ActualizarClientes();
	
	int getProductosSize();
	int getClientesSize();
	
	void DeleteProducto(int m_id);
	void DeleteCliente(int m_id);
	
	Producto &getProducto(int i);
	
	int GetLastID(ifstream archivo);
	
	~Sistema(){};
};

#endif
