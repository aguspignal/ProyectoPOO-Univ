#include "Venta.h"

Venta::Venta(){
	this->id = 0;
	this->id_cliente = 0;
	this->total = 0;
}

Venta::Venta(int idCliente, vector<Producto> v){
	this->id = GetLastID()+1;
	this->id_cliente = idCliente;
	this->total = CalcularTotal(v);
}

Venta::Venta(int idCliente, float m_total){
	this->id = GetLastID()+1;
	this->id_cliente = idCliente;
	this->total = total;
}

Venta::Venta(int m_id, int idCliente, vector<Producto> v){
	this->id = m_id;
	this->id_cliente = idCliente;
	this->total = CalcularTotal(v);
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

/// -- Total
float Venta::GetTotal() {
	return total;
}

float Venta::CalcularTotal(vector<Producto> v){
	float suma = 0;
	for(int i=0; i<v.size(); i++){
		suma += v.size();
	}
	return suma;
}





