#include "Venta.h"

Venta::Venta(int idCliente, vector<Producto> v){
	getLastID() == 0 ? id=1 : id=(getLastID()+1);
	
	this->id_cliente = idCliente;
	this->total = 0;
	
	for(int i=0; i<v.size(); i++){
		
		
		total += v[i].getPrecio();
	}
}

int Venta::getLastID(){
	ifstream archiVentas("ventas.bin",ios::binary|ios::in|ios::ate);
	
	// calcula cuantos productos hay en el archivo
	int cant_ventas = archiVentas.tellg() / sizeof(RegistroVenta);
	if(cant_ventas == 0){
		archiVentas.close();
		return 0;
		
	} else {
		archiVentas.close();
		return cant_ventas;
	}
	
	return 0;
}
