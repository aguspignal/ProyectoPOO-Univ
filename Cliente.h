#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

struct RegistroCliente {
	int id;
	char nombre[100];
	int dni;
	char direccion[200];
	char email[100];
	char telefono[15];
};
	
class Cliente {
private:
	int id;
	string nombre;
	int dni;
	string direccion;
	string email;
	string telefono;
	
public:
	Cliente();
	Cliente(string nombre, int dni, string direccion, string email, string telefono);
	Cliente(int id, string nombre, int dni, string direccion, string email, string telefono);
	
	/// ID
	int GetID();
	int GetLastID(); // mayor id en la base de datos
	
	/// Nombre
	std::string GetNombre();
	void SetNombre(std::string nombre);
	
	/// DNI
	int GetDNI();
	void SetDNI(int dni);
	
	/// Direccion
	string GetDireccion();
	void SetDireccion(string direccion);
	
	/// Email
	string GetEmail();
	void SetEmail(string email);
	
	/// Telefono
	string GetTelefono();
	void SetTelefono(string telefono);
	
	/// Agregar a la database
	void AddCliente();
	
	/// Validacion de datos
	string ValidarDatos();
	
	~Cliente(){};
};

#endif
