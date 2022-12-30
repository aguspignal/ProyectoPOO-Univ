#ifndef SISTEMA_H
#define SISTEMA_H

#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"

#include <string>
#include <vector>
using namespace std;

class Sistema {
	vector<Producto> productos;
	vector<Cliente> clientes;
	vector<Venta> ventas;
	
public:
	Sistema();
	
	void ActualizarProductos();
	void ActualizarClientes();
	void ActualizarVentas();
	
	void CargarProductos();
	void CargarClientes();
	void CargarVentas();
	
	void DeleteProducto(int id);
	void DeleteCliente(int id);
	void DeleteVenta(int id);
	
	Producto &GetProducto(int i);
	Producto GetProductoByID(int id);
	
	Cliente &GetCliente(int i);
	Cliente GetClienteByID(int id);
	
	Venta &GetVenta(int i);
	Venta GetVentaByID(int id);
	
	int GetProductosSize();
	int GetClientesSize();
	int GetVentasSize();
	
	~Sistema(){};
};

#endif
