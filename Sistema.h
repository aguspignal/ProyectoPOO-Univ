#ifndef SISTEMA_H
#define SISTEMA_H

#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
#include "VentaDetalle.h"

#include <string>
#include <vector>
using namespace std;

class Sistema {
	vector<Producto> productos;
	vector<Cliente> clientes;
	vector<Venta> ventas;
	vector<VentaDetalle> detallesventa;
	
public:
	Sistema();
	
	/// Actualizar el archivo 
	void ActualizarProductos();
	void ActualizarClientes();
	void ActualizarVentas();
	void ActualizarDetallesVenta();
	
	/// Cargar desde el archivo
	void CargarProductos();
	void CargarClientes();
	void CargarVentas();
	void CargarDetallesVenta();
	
	/// Guardar en el archivo
	void GuardarProducto(Producto p);
	void GuardarCliente(Cliente c);
	void GuardarVenta(Venta v);
	void GuardarDetalleVenta(VentaDetalle vdetalle);
	
	/// Eliminar
	void DeleteProducto(int id);
	void DeleteCliente(int id);
	void DeleteVenta(int id);
	
	/// Modificar
	void ModificarProducto(int id, string descripcion, float precio, int stock);
	void ModificarCliente(int id, string nombre, int dni);
	
	/// Devolviendo cosas
	Producto &GetProducto(int i);
	Producto &GetProductoByID(int id);
	
	Cliente &GetCliente(int i);
	Cliente &GetClienteByID(int id);
	
	Venta &GetVenta(int i);
	Venta &GetVentaByID(int id);
	
	VentaDetalle &GetDetalleVenta(int i);
	vector<VentaDetalle> &GetDetallesByIDVenta(int id_venta);
	
	int GetProductosSize();
	int GetClientesSize();      
	int GetVentasSize();        
	int GetDetallesVentaSize(); 
	
	~Sistema(){};
};

#endif
