#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <fstream>
#include <vector>
#include <cstring>
#include <algorithm>

struct RegistroProducto {
	int id;
	char descripcion[200];
	float precio;
	int stock;
};

class Producto {
private:
	int id;
	std::string descripcion;
	float precio;
	int stock;
	
public:
	Producto();
	Producto(std::string m_descripcion, float m_precio, int m_stock);
	Producto(int m_id, std::string m_descripcion, float m_precio, int m_stock);
	
	/// ID
	int GetID();
	int GetLastID(); // mayor id en la base de datos
	
	/// Descripcion
	std::string GetDescripcion();
	void SetDescripcion(std::string descrip);
	
	/// Precio
	float GetPrecio();
	void SetPrecio(float precio);
	
	/// Stock
	int GetStock();
	void SetStock(int stock);
	
	/// Agregar a la database
	void AddProducto();
	
	~Producto(){};
};


#endif
