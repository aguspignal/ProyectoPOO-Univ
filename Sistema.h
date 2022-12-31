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
	
	/// Actualizar el archivo 
	void ActualizarProductos();
	void ActualizarClientes();
	void ActualizarVentas();
	
	/// Cargar desde el archivo
	void CargarProductos();
	void CargarClientes();
	void CargarVentas();
	
	/// Eliminar
	void DeleteProducto(int id);
	void DeleteCliente(int id);
	void DeleteVenta(int id);
	
	/// Modificar
	void ModificarProducto(int id, string descripcion, float precio, int stock);
	void ModificarCliente(int id, string nombre, int dni);
	
	/// Devolviendo cosas
	Producto &GetProducto(int i);
	Producto GetProductoByID(int id);
	
	Cliente &GetCliente(int i);
	Cliente GetClienteByID(int id);
	
	Venta &GetVenta(int i);
	Venta GetVentaByID(int id);
	
	int GetProductosSize(); // (Sizes de los vectores, no del archivo)
	int GetClientesSize(); //
	int GetVentasSize();  //
	
	~Sistema(){};
};

#endif
