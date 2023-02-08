#include "Cliente.h"
#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

Cliente::Cliente(){
	this->id = 0;
	this->nombre = "none";
	this->dni = 0;
	this->direccion = "none";
	this->email = "none";
	this->telefono = "none";
}

Cliente::Cliente(string nombre, int dni, string direccion, string email, string telefono){
	this->id = GetLastID()+1;
	this->nombre = nombre;
	this->dni = dni;
	this->direccion = direccion;
	this->email = email;
	this->telefono = telefono;
}

Cliente::Cliente(int id, std::string nombre, int dni, string direccion, string email, string telefono){
	this->id = id;
	this->nombre = nombre;
	this->dni = dni;
	this->direccion = direccion;
	this->email = email;
	this->telefono = telefono;
}

/// -- ID
int Cliente::GetID(){
	return id;
}

int Cliente::GetLastID(){
	ifstream archi("clientes.bin",ios::binary|ios::in|ios::ate);
	int cant_clientes = archi.tellg() / sizeof(RegistroCliente);
	archi.seekg(0);
	
	int id = 0;
	if(cant_clientes > 0){
		RegistroCliente reg;
		for(int i=0; i<cant_clientes; i++){
			archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			if (reg.id > id) {
				id = reg.id;
			}
		}
	}
	
	archi.close();
	return id;
}

/// -- NOMBRE
string Cliente::GetNombre(){
	return nombre;
}

void Cliente::SetNombre(string str){
	this->nombre = str;
}


/// -- DNI
int Cliente::GetDNI(){
	return dni;
}

void Cliente::SetDNI(int dni){
	this->dni = dni;
}


/// -- DIRECCION
string Cliente::GetDireccion(){
	return direccion;
}

void Cliente::SetDireccion(string direccion){
	this->direccion = direccion;
}


/// -- EMAIL
string Cliente::GetEmail(){
	return email;
}

void Cliente::SetEmail(string email){
	this->email = email;
}


/// -- TELEFONO
string Cliente::GetTelefono(){
	return telefono;
}

void Cliente::SetTelefono(string telefono){
	this->telefono = telefono;
}


/// -- Agregar Cliente al archivo
void Cliente::AddCliente(){
	ofstream archi("clientes.bin",ios::binary|ios::out|ios::app);
	
	RegistroCliente reg;
	reg.id = this->id;
	strcpy(reg.nombre,this->nombre.c_str());
	reg.dni = this->dni;
	strcpy(reg.direccion,this->direccion.c_str());
	strcpy(reg.email,this->email.c_str());
	strcpy(reg.telefono,this->telefono.c_str());
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
}


