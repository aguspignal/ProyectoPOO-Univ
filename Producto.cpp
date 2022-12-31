#include "Producto.h"
using namespace std;

Producto::Producto(){
	id = 0;
	descripcion = "none";
	precio = 0;
	stock = 0;
}

Producto::Producto(std::string m_descripcion, float m_precio, int m_stock){
	this->id = GetLastID()+1;
	this->descripcion = m_descripcion;
	this->precio = m_precio;
	this->stock = m_stock;
}

Producto::Producto(int m_id, std::string m_descripcion, float m_precio, int m_stock){
	this->id = m_id;
	this->descripcion = m_descripcion;
	this->precio = m_precio;
	this->stock = m_stock;
}


/// -- ID -- 
int Producto::GetID(){
	return id;
}

int Producto::GetLastID(){
	int id = 0;
	ifstream archi("productos.bin",ios::binary|ios::in|ios::ate);
	int cant_productos = archi.tellg() / sizeof(RegistroProducto);
	archi.seekg(0);
	
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

/// -- Add Producto --
void Producto::AddProducto(){
	ofstream archi("productos.bin",ios::binary|ios::out|ios::app);
	
	RegistroProducto reg_prod;
	reg_prod.id = this->id;
	strcpy(reg_prod.descripcion, descripcion.c_str());
	reg_prod.precio = precio;
	reg_prod.stock = stock;
	
	archi.write(reinterpret_cast<char*>(&reg_prod),sizeof(reg_prod));
	archi.close();
}





