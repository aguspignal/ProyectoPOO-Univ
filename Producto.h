#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

struct RegistroProducto {
	int id;
	char descripcion[150];
	float precio;
	int stock;
};

class Producto {
private:
	int id;
	string descripcion;
	float precio;
	int stock;
	
public:
	Producto();
	Producto(string descripcion, float precio, int stock);
	Producto(int id, string descripcion, float precio, int stock);
	
	/// ID
	int GetID();
	int GetLastID();
	
	/// Descripcion
	string GetDescripcion();
	void SetDescripcion(string descripcion);
	
	/// Precio
	float GetPrecio();
	void SetPrecio(float precio);
	
	/// Stock
	int GetStock();
	void SetStock(int stock);
	bool CheckStock(int cantidad);
	
	/// Agregar a la database
	void AddProducto();
	
	~Producto(){};
	
	bool operator==(Producto p){
		return this->id == p.GetID();
	}
};


struct ProductoCantidad {
	Producto producto;
	int cantidad;
	
	bool operator==(ProductoCantidad prod_cant){
		if(producto == prod_cant.producto && cantidad == prod_cant.cantidad){
			return true;
		} else { 
			return false; 
		}
	}
};

#endif
