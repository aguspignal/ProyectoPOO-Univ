#include "Sistema.h"
#include <iostream>
using namespace std;

Sistema::Sistema(){
	CargarProductos();
	CargarClientes();
	CargarVentas();
	CargarDetallesVenta();
}

/// -- CARGAR Productos
void Sistema::CargarProductos(){
	ifstream archi("productos.bin",ios::binary|ios::in|ios::ate);

	int cant_productos = archi.tellg() / sizeof(RegistroProducto);
	archi.seekg(0);
	
	RegistroProducto reg;
	productos.clear();
	for(int i=0; i<cant_productos; i++){
		archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		Producto prod(reg.id,reg.descripcion,reg.precio,reg.stock);
		
		productos.push_back(prod);
	}
	
	archi.close();
}

/// -- CARGAR Clientes
void Sistema::CargarClientes(){
	ifstream archi("clientes.bin",ios::binary|ios::in|ios::ate);
	
	int cant_clientes = archi.tellg() / sizeof(RegistroCliente);
	archi.seekg(0);
	
	RegistroCliente reg;
	clientes.clear();			
	for(int i=0; i<cant_clientes; i++){
		archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		
		Cliente cliente(reg.id, reg.nombre, reg.dni);
		clientes.push_back(cliente);
	}
}

/// -- CARGAR Ventas
void Sistema::CargarVentas(){
	ifstream archi("ventas.bin",ios::binary|ios::in|ios::ate);
	
	int cant_ventas = archi.tellg() / sizeof(RegistroVenta);
	archi.seekg(0);
	
	RegistroVenta reg;
	ventas.clear();
	for(int i=0; i<cant_ventas; i++){
		archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		Venta venta(reg.id,reg.id_cliente,reg.total,reg.modificada);
		
		ventas.push_back(venta);
	}
	
	archi.close();
}

/// -- CARGAR Detalles de Venta
void Sistema::CargarDetallesVenta(){
	ifstream archi("ventasdetalle.bin",ios::binary|ios::in|ios::ate);
	
	int cant_detalles = archi.tellg() / sizeof(RegistroVentaDetalle);
	archi.seekg(0);
	
	RegistroVentaDetalle reg;
	detallesventa.clear();
	for(int i=0; i<cant_detalles; i++){
		archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		
		VentaDetalle vdetalle(reg.id, reg.id_venta, reg.id_producto, reg.cantidad, reg.valor_vendido, reg.subtotal);
		detallesventa.push_back(vdetalle);
	}
	
	archi.close();
}


/// -- ACTUALIZAR Productos
void Sistema::ActualizarProductos(){
	ofstream archi("productos.bin",ios::binary|ios::trunc);
	
	RegistroProducto reg;
	for(int i=0; i<productos.size(); i++){
		reg.id = productos[i].GetID();
		strcpy(reg.descripcion, productos[i].GetDescripcion().c_str());
		reg.precio = productos[i].GetPrecio();
		reg.stock = productos[i].GetStock();
		archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	}
	
	archi.close();
}

/// ACTUALIZAR Clientes
void Sistema::ActualizarClientes(){
	ofstream archi("clientes.bin",ios::binary|ios::trunc);
	
	RegistroCliente reg;
	for(int i=0; i<clientes.size(); i++){
		reg.id = clientes[i].GetID();
		strcpy(reg.nombre, clientes[i].GetNombre().c_str());
		reg.dni = clientes[i].GetDNI();
		archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	}
	
	archi.close();
}

/// ACTUALIZAR Ventas
void Sistema::ActualizarVentas(){
	ofstream archi("ventas.bin",ios::binary|ios::trunc);
	
	RegistroVenta reg;
	for(int i=0; i<ventas.size(); i++){
		reg.id = ventas[i].GetID();
		reg.id_cliente = ventas[i].GetIDCliente();
		reg.total = ventas[i].GetTotal();
		reg.modificada = ventas[i].GetModif();
		archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	}
	
	archi.close();
}

/// ACTUALIZAR Detalles de Venta
void Sistema::ActualizarDetallesVenta(){
	ofstream archi("ventasdetalle.bin",ios::binary|ios::trunc);
	
	RegistroVentaDetalle reg;
	for(int i=0; i<detallesventa.size(); i++){
		reg.id = detallesventa[i].GetID();
		reg.id_venta = detallesventa[i].GetIDVenta();
		reg.id_producto = detallesventa[i].GetIDProducto();
		reg.cantidad = detallesventa[i].GetCantidad();
		reg.valor_vendido = detallesventa[i].GetValorVendido();
		reg.subtotal = detallesventa[i].GetSubtotal();
		
		archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	}
	
	archi.close();
}


/// -- GUARDAR Producto
void Sistema::GuardarProducto(Producto p){
	productos.push_back(p);
	ActualizarProductos();
}

/// -- GUARDAR Cliente
void Sistema::GuardarCliente(Cliente c){
	clientes.push_back(c);
	ActualizarClientes();
}

/// -- GUARDAR Venta
void Sistema::GuardarVenta(Venta v){
	ventas.push_back(v);
	ActualizarVentas();
}

/// -- GUARDAR Detalle Venta
void Sistema::GuardarDetalleVenta(VentaDetalle vdetalle){
	detallesventa.push_back(vdetalle);
	ActualizarDetallesVenta();
}


/// -- ELIMINAR Producto 
void Sistema::DeleteProducto(int id){
	for(int i=0; i<productos.size(); i++){
		
		if(productos[i].GetID() == id){
			productos.erase(productos.begin()+i);
		}
	}
	ActualizarProductos();
}

/// -- ELIMINAR Cliente 
void Sistema::DeleteCliente(int id){
	for(int i=0; i<clientes.size(); i++){
		
		if(clientes[i].GetID() == id){
			clientes.erase(clientes.begin()+i);
		}
	}
	ActualizarClientes();
}

/// -- ELIMINAR Venta
void Sistema::DeleteVenta(int id){
	for(int i=0; i<ventas.size(); i++){
		if(ventas[i].GetID() == id){
			ventas.erase(ventas.begin()+i);
		}
	}
	
	vector<VentaDetalle> v;
	for(int i=0; i<detallesventa.size(); i++){
		if(detallesventa[i].GetIDVenta() != id){
			v.push_back(detallesventa[i]);
		}
	}
	this->detallesventa.clear();
	this->detallesventa = v;
	
	ActualizarVentas();
	ActualizarDetallesVenta();
}


/// -- MODIFICAR Producto
void Sistema::ModificarProducto(int id, string descripcion, float precio, int stock){
	for(int i=0; i<productos.size(); i++){
		if(productos[i].GetID() == id){
			productos[i].SetDescripcion(descripcion);
			productos[i].SetPrecio(precio);
			productos[i].SetStock(stock);
		}
	}
	ActualizarProductos();
}

void Sistema::RetirarStockProducto(int id, int cantidad){
	for(int i=0; i<productos.size(); i++){
		if(productos[i].GetID() == id){
			int nuevo_stock = productos[i].GetStock() - cantidad;
			productos[i].SetStock(nuevo_stock);
		}
	}
	ActualizarProductos();
}


/// -- MODIFICAR Cliente 
void Sistema::ModificarCliente(int id, string nombre, int dni){
	for(int i=0; i<clientes.size(); i++){
		if(clientes[i].GetID() == id){
			clientes[i].SetNombre(nombre);
			clientes[i].SetDNI(dni);
		}
	}
	ActualizarClientes();
}

/// -- MODIFICAR Venta
void Sistema::ModificarVenta(int id, int id_cliente, float total){
	for(int i=0; i<ventas.size(); i++){
		if(ventas[i].GetID() == id){
			ventas[i].SetIDCliente(id_cliente);
			ventas[i].SetTotal(total);
			ventas[i].SetModifTrue();
		}
	}
	ActualizarVentas();
}


/// -- BUSCAR Producto 
Producto &Sistema::GetProducto(int i){
	return productos[i];
}

Producto Sistema::GetProductoByID(int id){
	for(int i=0; i<productos.size(); i++){
		if(productos[i].GetID() == id){
			return productos[i];
		}
	}
	
	Producto prod;
	return prod;
}

/// -- BUSCAR Cliente
Cliente &Sistema::GetCliente(int i){
	return clientes[i];
}

Cliente Sistema::GetClienteByID(int id){
	for(int i=0; i<clientes.size(); i++){
		if(clientes[i].GetID() == id){
			return clientes[i];
		}
	}
}

/// -- BUSCAR Venta
Venta &Sistema::GetVenta(int i){
	return ventas[i];
}
	
Venta Sistema::GetVentaByID(int id){
	for(int i=0; i<ventas.size(); i++){
		if(ventas[i].GetID() == id){
			return ventas[i];
		}
	}
	
	Venta venta;
	return venta;
}

/// -- BUSCAR Detalles Venta
VentaDetalle &Sistema::GetDetalleVenta(int i){
	return detallesventa[i];
}

vector<VentaDetalle> Sistema::GetDetallesByIDVenta(int id_venta){
	vector<VentaDetalle> v;
	
	for(int i=0; i<detallesventa.size(); i++){
		if(detallesventa[i].GetIDVenta() == id_venta){
			v.push_back(detallesventa[i]);
		}
	}
	return v;
}

/// -- Sizes
int Sistema::GetProductosSize(){
	return productos.size();
}

int Sistema::GetClientesSize(){
	return clientes.size();
}

int Sistema::GetVentasSize(){
	return ventas.size();
}

//ostream &operator<<(ostream &o, VentaDetalle vdetalle){
//	Sistema sist;
//	string str;
//	if(sist.GetProductoByID(vdetalle.GetIDProducto()).GetDescripcion() == "none"){
//		str = "Producto eliminado";
//	} else { 
//		str = sist.GetProductoByID(vdetalle.GetIDProducto()).GetDescripcion(); 
//	}
//	
//	o << vdetalle.GetIDVenta() <<"    "
//	   << vdetalle.GetIDProducto() <<"     "
//		<< str <<"   $"
//		<< vdetalle.GetValorVendido() <<"    "
//		<< vdetalle.GetCantidad() <<"    "
//		<< vdetalle.GetSubtotal() <<endl;
//	return o;
//}

//void Sistema::MostrarDetalles(){
//	cout << "ProdID |   Descripcion   | Precio | Cantidad | Subtotal\n";
//	for(int j=0; j<detallesventa.size(); j++){
//		cout << detallesventa[j];
//	}
//	system("PAUSE");
//}
	
