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
	
	bool operator==(const RegistroCliente reg) const {
		return id == reg.id;
	}
};
	
	
class Cliente {
private:
	int id;
	std::string nombre;
	int dni;
	
public:
	Cliente();
	Cliente(std::string nombre, int dni);
	
	int GetID();
	int GetLastID();
	
	std::string GetNombre();

	int GetDNI();
	
	/// Manipulacion del Binario
	void addCliente();
	
	~Cliente(){};
};

#endif
