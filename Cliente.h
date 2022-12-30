#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>

struct RegistroCliente {
	int id;
	char nombre[100];
//	char direccion[100];
//	char email[100];
//	int telefono;
	int dni;
};
	
	
class Cliente {
private:
	int id;
	std::string nombre;
//	std::string direccion;
//	std::string email[100];
//	int telefono;
	int dni;
	
public:
	Cliente();
	Cliente(std::string nombre, int dni);
	Cliente(int id, std::string nombre, int dni);
	
	/// ID
	int GetID();
	int GetLastID(); // mayor id en la base de datos
	
	/// Nombre
	std::string GetNombre();
	void SetNombre(std::string nombre);
	
	/// DNI
	int GetDNI();
	void SetDNI(int dni);
	
	/// Agregar a la database
	void AddCliente();
	
	~Cliente(){};
};

#endif
