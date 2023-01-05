#include "VentaDetalle.h"
#include <fstream>
#include <cstring>
#include "Sistema.h"
using namespace std;
	
//VentaDetalle::VentaDetalle(int idVenta, int m_cantidad, Producto m_producto){
//	this->id = GetLastId()+1;
//	this->id_venta = idVenta;
//	this->producto = m_producto;
//	this->cantidad = m_cantidad;
//	this->subtotal = m_producto.GetPrecio()*m_cantidad;
//	
//	RetirarStock();
//}

VentaDetalle::VentaDetalle(int idVenta, int m_cantidad, int idProducto, float precio_producto){
	this->id = GetLastId()+1;
	this->id_venta = idVenta;
	this->id_producto = idProducto;
	this->cantidad = m_cantidad;
	this->valor_vendido = precio_producto;
	this->subtotal = cantidad * valor_vendido;
	
	RetirarStock();
}

VentaDetalle::VentaDetalle(int m_id, int idVenta, int idProducto, int m_cantidad, float valor_vendido, float m_subtotal){
	this->id = m_id;
	this->id_venta = idVenta;
	this->id_producto = idProducto;
	this->cantidad = m_cantidad;
	this->valor_vendido = valor_vendido;
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
//Producto VentaDetalle::GetProducto(){
//	return producto;
//}
int VentaDetalle::GetIDProducto(){
	return id_producto;
}

/// -- Valor vendido
float VentaDetalle::GetValorVendido(){
	return valor_vendido;
}

/// -- Cantidad
int VentaDetalle::GetCantidad(){
	return cantidad;
}

/// -- Subtotal
float VentaDetalle::GetSubtotal(){
	return subtotal;
}

void VentaDetalle::SetCantidad(int cant){
	this->cantidad = cant;
}

/// -- Retirar Stock del producto
void VentaDetalle::RetirarStock(){
	Sistema sistema;
	sistema.RetirarStockProducto(id_producto, cantidad);
}


/// -- Agregar al archivo
void VentaDetalle::AddVentaDetalle(){
	ofstream archi("ventasdetalle.bin",ios::binary|ios::out|ios::app);
	
	RegistroVentaDetalle reg;
	reg.id = this->id;
	reg.id_venta = this->id_venta;
	reg.id_producto = this->id_producto;
	reg.cantidad = this->cantidad;
	reg.valor_vendido = this->valor_vendido;
	reg.subtotal = this->subtotal;
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
}
