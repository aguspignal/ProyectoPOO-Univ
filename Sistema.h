#ifndef SISTEMA_H
#define SISTEMA_H

#include "Tools.h"
using namespace std;

enum CriterioOrdenProducto {ID_PRODUCTO,DESCRIPCION,PRECIO,STOCK};
enum CriterioOrdenCliente {ID_CLIENTE,NOMBRE,DNI,DIRECCION,EMAIL};
enum CriterioOrdenVenta {ID_VENTA,IDCLIENTE,TOTAL};

class Sistema {
	vector<Producto> productos;
	vector<Cliente> clientes;
	vector<Venta> ventas;
	vector<VentaDetalle> detallesventa;
	
public:
	Sistema();
	
	/// Actualizar el archivo 
	void SaveProductos();
	void SaveClientes();
	void SaveVentas();
	void SaveDetallesVenta();
	
	/// Cargar desde el archivo
	void LoadProductos();
	void LoadClientes();
	void LoadVentas();
	void LoadDetallesVenta();
	
	/// Guardar un solo dato
	void GuardarProducto(Producto p);
	void GuardarCliente(Cliente c);
	void GuardarVenta(Venta v);
	void GuardarDetalleVenta(VentaDetalle vdetalle);
	
	/// Eliminar
	void DeleteProducto(int id);
	void DeleteCliente(int id);
	void DeleteVenta(int id);
	
	/// Modificar
	// revisar argumentos 
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
	vector<int> GetVentasByIDCliente(int id);
	
	VentaDetalle &GetDetalleVenta(int i);
	vector<VentaDetalle> GetDetallesByIDVenta(int id_venta);
	
	int GetProductosSize();
	int GetClientesSize();      
	int GetVentasSize();        
	int GetDetallesVentaSize(); 
	
	/// Vector con id's de los resultados
	vector<int> BuscarClientes(string busqueda);
	vector<int> BuscarProductos(string busqueda);
	
	/// Ordenamiento
	// revisar
	void OrdenarProductos(CriterioOrdenProducto criterio);
	void OrdenarClientes(CriterioOrdenCliente criterio);
	void OrdenarVentas(CriterioOrdenVenta criterio);
	
	~Sistema(){};
};



#endif
