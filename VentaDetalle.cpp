#include "VentaDetalle.h"
#include "Sistema.h"
#include <fstream>
#include <cstring>
using namespace std;
	
VentaDetalle::VentaDetalle(int id_venta, string descripcion, int cantidad, float precio_producto){
	this->id = GetLastId()+1;
	this->id_venta = id_venta;
	this->descripcion = descripcion;
	this->cantidad = cantidad;
	this->valor_vendido = precio_producto;
	this->subtotal = cantidad * valor_vendido;
}

VentaDetalle::VentaDetalle(int id, int id_venta, string descripcion, int cantidad, float valor_vendido, float subtotal){
	this->id = id;
	this->id_venta = id_venta;
	this->descripcion = descripcion;
	this->cantidad = cantidad;
	this->valor_vendido = valor_vendido;
	this->subtotal = subtotal;
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


/// -- Descripcion
string VentaDetalle::GetDescripcion(){
	return descripcion;
}


/// -- Valor vendido
float VentaDetalle::GetValorVendido(){
	return valor_vendido;
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
	reg.id_venta = this->id_venta;
	strcpy(reg.descripcion,this->descripcion.c_str());
	reg.cantidad = this->cantidad;
	reg.valor_vendido = this->valor_vendido;
	reg.subtotal = this->subtotal;
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
}
