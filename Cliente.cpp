#include "Cliente.h"
using namespace std;

Cliente::Cliente(std::string nombre, int dni){
	GetLastID() == 0 ? id = 1 : id = GetLastID()+1;
	this->nombre = nombre;
	this->dni = dni;
}

int Cliente::GetLastID(){
	int id = 0;
	fstream archi("clientes.bin",ios::binary|ios::in|ios::ate);
	int cant_clientes = archi.tellg() / sizeof(RegistroCliente);
	
	if(cant_clientes > 0){ // buscar mayor valor de id
		RegistroCliente reg;
		for(int i=0; i<cant_clientes; i++){
			archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			if (reg.id>id) {
				id = reg.id;
			}
		}
	}
	
	archi.close();
	return id;
}

string Cliente::GetNombre(){
	return nombre;
}

int Cliente::GetDNI(){
	return dni;
}


/// Manipulaciones con el binario
void Cliente::addCliente(){
	ofstream archiClientes("clientes.bin",ios::binary|ios::out|ios::app);
	
	RegistroCliente reg;
	reg.id = this->id;
	strcpy(reg.nombre,this->nombre.c_str());
	reg.dni = this->dni;
	
	archiClientes.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	
	archiClientes.close();
}
