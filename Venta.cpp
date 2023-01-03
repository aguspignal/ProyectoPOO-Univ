#include "Venta.h"
#include <fstream>
using namespace std;

Venta::Venta(){
	this->id = 0;
	this->id_cliente = 0;
	this->total = 0;
}

Venta::Venta(int idCliente, vector<ProductoCantidad> productos){
	this->id = GetLastID()+1;
	this->id_cliente = idCliente;
	
	for(int i=0; i<productos.size(); i++){
		VentaDetalle vdetalle(this->id, productos[i].prod, productos[i].cant);
		vdetalle.AddVentaDetalle();
	}
	
	this->total = CalcularTotal(productos);
}

Venta::Venta(int m_id, int idCliente, vector<ProductoCantidad> productos){
	this->id = m_id;
	this->id_cliente = idCliente;
	
	for(int i=0; i<productos.size(); i++){
		VentaDetalle vdetalle(this->id, productos[i].prod, productos[i].cant);
		vdetalle.AddVentaDetalle();
	}
	this->total = CalcularTotal(productos);
}

Venta::Venta(int m_id, int idCliente, float m_total){
	this->id = m_id;
	this->id_cliente = idCliente;
	this->total = m_total;
}

/// -- ID
int Venta::GetID(){
	return id;
}

int Venta::GetIDCliente(){
	return id_cliente;
}

int Venta::GetLastID(){
	int id = 0;
	ifstream archi("ventas.bin",ios::binary|ios::in|ios::ate);
	int cant_ventas = archi.tellg() / sizeof(RegistroVenta);
	archi.seekg(0);
	
	if(cant_ventas > 0){
		RegistroVenta reg;
		for(int i=0; i<cant_ventas; i++){
			archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			if (reg.id > id) {
				id = reg.id;
			}
		}
	}
	
	archi.close();
	return id;
}

/// -- Detalles
int Venta::GetDetallesSize(){
	return detalles.size();
}

/// -- Total
float Venta::GetTotal() {
	return total;
}

float Venta::CalcularTotal(vector<ProductoCantidad> productos){
	float suma = 0;
	for(int i=0; i<productos.size(); i++){
		suma += (productos[i].prod.GetPrecio() * productos[i].cant);
	}
	return suma;
}

/// -- Agregar al archivo
void Venta::AddVenta(){
	ofstream archi("ventas.bin",ios::binary|ios::out|ios::app);
	
	RegistroVenta reg;
	reg.id = id;
	reg.id_cliente = id_cliente;
	reg.total = total;
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
}


