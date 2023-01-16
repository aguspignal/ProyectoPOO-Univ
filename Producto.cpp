#include "Producto.h"
#include <string>
#include <fstream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

Producto::Producto(){
	id = 0;
	descripcion = "none";
	precio = 0;
	stock = 0;
}

Producto::Producto(std::string descripcion, float precio, int stock){
	this->id = GetLastID()+1;
	this->descripcion = descripcion;
	this->precio = precio;
	this->stock = stock;
}

Producto::Producto(int id, std::string descripcion, float precio, int stock){
	this->id = id;
	this->descripcion = descripcion;
	this->precio = precio;
	this->stock = stock;
}


/// -- ID -- 
int Producto::GetID(){
	return id;
}

int Producto::GetLastID(){
	ifstream archi("productos.bin",ios::binary|ios::in|ios::ate);
	int cant_productos = archi.tellg() / sizeof(RegistroProducto);
	archi.seekg(0);
	
	int id = 0;
	if(cant_productos > 0){ 
		RegistroProducto reg;
		for(int i=0; i<cant_productos; i++){
			archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			if (reg.id > id) {
				id = reg.id;
			}
		}
	}
	
	archi.close();
	return id;
}

/// -- Descripcion --
std::string Producto::GetDescripcion(){
	return descripcion;
}

void Producto::SetDescripcion(std::string descrip){
	this->descripcion = descrip;
}


/// -- Precio --
float Producto::GetPrecio(){
	return ((precio*10)/10);
}

void Producto::SetPrecio(float precio){
	this->precio = precio;
}


/// -- Stock --
int Producto::GetStock(){
	return stock;
}

void Producto::SetStock(int stock){
	this->stock = stock;
}

bool Producto::CheckStock(int cantidad){
	return stock >= cantidad;
}

/// -- Add Producto --
void Producto::AddProducto(){
	ofstream archi("productos.bin",ios::binary|ios::out|ios::app);
	
	RegistroProducto reg;
	reg.id = this->id;
	strcpy(reg.descripcion, descripcion.c_str());
	reg.precio = precio;
	reg.stock = stock;
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
}





