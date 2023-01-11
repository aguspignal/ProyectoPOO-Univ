#ifndef SISTEMA_H
#define SISTEMA_H

#include "VentaDetalle.h"
#include "Tools.h"

#include <string>
#include <vector>
using namespace std;

enum CriterioOrdenProducto {ID_PRODUCTO,DESCRIPCION,PRECIO,STOCK};
enum CriterioOrdenCliente {ID_CLIENTE,NOMBRE,DNI,DIRECCION,EMAIL,TELEFONO};
enum CriterioOrdenVenta {ID_VENTA,IDCLIENTE,TOTAL};

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
	void RetirarStockProducto(int id, int cantidad);
	void ModificarCliente(int id, string nombre, int dni, string direccion, string email, string telefono);
	void ModificarVenta(int id, int id_cliente, float total);
	
	/// Devolviendo cosas
	Producto &GetProducto(int i);
	Producto GetProductoByID(int id);
	Producto GetProductoByDescrip(string descripcion);
	
	Cliente &GetCliente(int i);
	Cliente GetClienteByID(int id);
	Cliente GetClienteByNombre(string nombre);
	
	Venta &GetVenta(int i);
	Venta GetVentaByID(int id);
	
	VentaDetalle &GetDetalleVenta(int i);
	vector<VentaDetalle> GetDetallesByIDVenta(int id_venta);
	
	int GetProductosSize();
	int GetClientesSize();      
	int GetVentasSize();        
	int GetDetallesVentaSize(); 
	
	vector<int> BuscarClientes(string busqueda);
	vector<int> BuscarProductos(string busqueda);
	
	void MostrarDetalles();
	
	/// Ordenamiento
	void OrdenarProductos(CriterioOrdenProducto criterio);
	void OrdenarClientes(CriterioOrdenCliente criterio);
	void OrdenarVentas(CriterioOrdenVenta criterio);
	
	~Sistema(){};
};



#endif
