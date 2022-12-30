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
	
	bool operator==(const RegistroProducto reg) const {
		return id == reg.id;
	}
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
	
	int getID();
	int GetLastID();
	
	std::string getDescripcion();
	void setDescripcion(std::string descrip);
	
	int getPrecio();
	void setPrecio(float precio);
	
	int getStock();
	void setStock(int stock);
	
	/// Manipulacion del Binario
	void AddProducto();
	
	~Producto(){};
};


#endif
