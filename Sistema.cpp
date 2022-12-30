#include "Sistema.h"
using namespace std;

Sistema::Sistema(){
	ActualizarProductos();
	ActualizarClientes();
}

void Sistema::ActualizarProductos(){
	ifstream archiProductos("productos.bin",ios::binary|ios::in|ios::ate);

	int cant_productos = archiProductos.tellg() / sizeof(RegistroProducto);
	archiProductos.seekg(0);
	
	RegistroProducto reg;
	for(int i=0; i<cant_productos; i++){
		archiProductos.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		Producto prod(reg.id,reg.descripcion,reg.precio,reg.stock);
		
		productos.push_back(prod);
	}
	
	archiProductos.close();
}

void Sistema::ActualizarClientes(){
	ifstream archiClientes("clientes.bin",ios::binary|ios::in|ios::ate);
	
	int cant_clientes = archiClientes.tellg() / sizeof(RegistroCliente);
	archiClientes.seekg(0);
	
	RegistroCliente reg;
		for(int i=0; i<cant_clientes; i++){
		archiClientes.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		Cliente cliente(reg.nombre, reg.dni);
		
		clientes.push_back(cliente);
	}
	
	archiClientes.close();
}

int Sistema::getProductosSize(){
	return productos.size();
}

int Sistema::getClientesSize(){
	return clientes.size();
}


/// -- Eliminar Producto 
void Sistema::DeleteProducto(int m_id){
	ifstream archiIn("productos.bin",ios::binary|ios::in|ios::ate);
	
	int cant_productos = archiIn.tellg() / sizeof(RegistroProducto);
	archiIn.seekg(0);
	
	RegistroProducto reg_prod;
	vector<RegistroProducto> v;
	
	for(int i=0; i<cant_productos; i++){
		archiIn.read(reinterpret_cast<char*>(&reg_prod),sizeof(reg_prod));
		v.push_back(reg_prod);
	}
	
	archiIn.close();
	
	ofstream archiOut("productos.bin",ios::binary|ios::trunc);
	
	reg_prod.id = m_id;
	auto it = find(v.begin(), v.end(), reg_prod);
	if(it != v.end()){
		v.erase(it);
	}
	
	for(int i=0; i<v.size(); i++){
		archiOut.write(reinterpret_cast<char*>(&v[i]),sizeof(v[i]));
	}
	
	archiOut.close();
}

/// -- Eliminar Cliente 
void Sistema::DeleteCliente(int m_id){
	ifstream archiIn("clientes.bin",ios::binary|ios::in|ios::ate);
	
	int cant_clientes = archiIn.tellg() / sizeof(RegistroCliente);
	archiIn.seekg(0);
	
	RegistroCliente reg;
	vector<RegistroCliente> v;
	
	for(int i=0; i<cant_clientes; i++){
		archiIn.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		v.push_back(reg);
	}
	
	archiIn.close();
	
	ofstream archiOut("clientes.bin",ios::binary|ios::trunc);
	
	reg.id = m_id;
	auto it = find(v.begin(), v.end(), reg);
	if(it != v.end()){
		v.erase(it);
	}
	
	for(int i=0; i<v.size(); i++){
		archiOut.write(reinterpret_cast<char*>(&v[i]),sizeof(v[i]));
	}
	
	archiOut.close();
}


Producto &Sistema::getProducto(int i){
	return productos[i];
}



