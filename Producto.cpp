#include "Producto.h"
using namespace std;

Producto::Producto(){
	GetLastID() == 0 ? id = 1 : id = GetLastID()+1;
	descripcion = "none";
	precio = 0;
	stock = 0;
}

Producto::Producto(std::string m_descripcion, float m_precio, int m_stock){
	GetLastID() == 0 ? id = 1 : id = GetLastID()+1;
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
int Producto::getID(){
	return id;
}

int Producto::GetLastID(){
	int id = 0;
	fstream archi("productos.bin",ios::binary|ios::in|ios::ate);
	int cant_productos = archi.tellg() / sizeof(RegistroProducto);
	
	if(cant_productos > 0){ // buscar mayor valor de id
		RegistroProducto reg;
		for(int i=0; i<cant_productos; i++){
			archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			if (reg.id>id) {
				id = reg.id;
			}
		}
	}
	
	archi.close();
	return id;
}

/// -- Descripcion --
std::string Producto::getDescripcion(){
	return descripcion;
}

void Producto::setDescripcion(std::string descrip){
	this->descripcion = descrip;
}


/// -- Precio --
int Producto::getPrecio(){
	return precio;
}

void Producto::setPrecio(float precio){
	this->precio = precio;
}


/// -- Stock --
int Producto::getStock(){
	return stock;
}

void Producto::setStock(int stock){
	this->stock = stock;
}

/// -- Add & Delete Producto --
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





