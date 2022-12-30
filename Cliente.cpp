#include "Cliente.h"
using namespace std;

Cliente::Cliente(){
	this->id = 0;
	this->nombre = "none";
	this->dni = 0;
}

Cliente::Cliente(std::string nombre, int dni){
	this->id = GetLastID()+1;
	this->nombre = nombre;
	this->dni = dni;
}

Cliente::Cliente(int m_id, std::string m_nombre, int m_dni){
	this->id = m_id;
	this->nombre = m_nombre;
	this->dni = m_dni;
}

/// -- ID
int Cliente::GetID(){
	return id;
}

int Cliente::GetLastID(){
	int id = 0;
	ifstream archi("clientes.bin",ios::binary|ios::in|ios::ate);
	int cant_clientes = archi.tellg() / sizeof(RegistroCliente);
	archi.seekg(0);
	
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

/// -- Nombre
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

/// Agregar Cliente al archivo
void Cliente::AddCliente(){
	ofstream archi("clientes.bin",ios::binary|ios::out|ios::app);
	
	RegistroCliente reg;
	reg.id = this->id;
	strcpy(reg.nombre,this->nombre.c_str());
	reg.dni = this->dni;
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
}
