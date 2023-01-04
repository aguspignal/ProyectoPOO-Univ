#include "VentaDetalle.h"
#include <fstream>
#include <cstring>
#include "Sistema.h"
using namespace std;
	
VentaDetalle::VentaDetalle(int idVenta, int m_cantidad, Producto m_producto){
	this->id = GetLastId()+1;
	this->id_venta = idVenta;
	this->producto = m_producto;
	this->cantidad = m_cantidad;
	this->subtotal = m_producto.GetPrecio()*m_cantidad;
}

VentaDetalle::VentaDetalle(int m_id, int idVenta, int m_cantidad, float m_subtotal, Producto m_producto){
	this->id = m_id;
	this->id_venta = idVenta;
	this->producto = m_producto;
	this->cantidad = m_cantidad;
	this->subtotal = m_subtotal;
}

/// -- ID
int VentaDetalle::GetID(){
	return id;
}

int VentaDetalle::GetIDVenta(){
	return id_venta;
}

int VentaDetalle::GetLastId(){
	int id = 0;
	ifstream archi("ventasdetalle.bin",ios::binary|ios::in|ios::ate);
	int cant_vdetalles = archi.tellg() / sizeof(RegistroVentaDetalle);
	archi.seekg(0);
	
	if(cant_vdetalles > 0){ 
		RegistroVentaDetalle reg;
		for(int i=0; i<cant_vdetalles; i++){
			archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			if (reg.id > id) {
				id = reg.id;
			}
		}
	}
	
	archi.close();
	return id;
}

/// -- Producto
Producto VentaDetalle::GetProducto(){
	return producto;
}

/// -- Cantidad
int VentaDetalle::GetCantidad(){
	return cantidad;
}

void VentaDetalle::SetCantidad(int cant){
	this->cantidad = cant;
}

/// -- Subtotal
float VentaDetalle::GetSubtotal(){
	return subtotal;
}

/// -- Agregar al archivo
void VentaDetalle::AddVentaDetalle(){
	ofstream archi("ventasdetalle.bin",ios::binary|ios::out|ios::app);
	
	RegistroVentaDetalle reg;
	reg.id = this->id;
	reg.id_venta = id_venta;
	reg.cant = cantidad;
	reg.subtotal = subtotal;
	
	reg.reg_prod.id = producto.GetID();
	strcpy(reg.reg_prod.descripcion, producto.GetDescripcion().c_str());
	reg.reg_prod.precio = producto.GetPrecio();
	reg.reg_prod.stock = producto.GetStock();
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
	
	Sistema sist;
	int newstock = producto.GetStock() - cantidad;
	sist.ModificarProducto(producto.GetID(), producto.GetDescripcion(), producto.GetPrecio(), newstock);
}

