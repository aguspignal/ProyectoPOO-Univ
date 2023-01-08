#include "Tools.h"

/// String 
string StrSinEspacios(string str){
	str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
	return str;
}

string StrAMinusculas(string str){
	for(int i=0; i<str.length(); i++){
		str[i] = tolower(str[i]);
	}
	return str;
}

/// Criterios de ordenamiento
// Para Producto
bool Orden_ID_Prod(Producto p1, Producto p2){
	return p1.GetID() < p2.GetID();
}

bool Orden_Descripcion(Producto p1, Producto p2){
	return StrAMinusculas(p1.GetDescripcion()) < StrAMinusculas(p2.GetDescripcion());
}
	
bool Orden_Precio(Producto p1, Producto p2){
	return p1.GetPrecio() < p2.GetPrecio();
}
	
bool Orden_Stock(Producto p1, Producto p2){
	return p1.GetStock() < p2.GetStock();
}

// Para Cliente
bool Orden_ID_Cliente(Cliente c1, Cliente c2){
	return c1.GetID() < c2.GetID();
}
	
bool Orden_Nombre(Cliente c1, Cliente c2){
	return StrAMinusculas(c1.GetNombre()) < StrAMinusculas(c2.GetNombre());
}
	
bool Orden_DNI(Cliente c1, Cliente c2){
	return c1.GetDNI() < c2.GetDNI();
}
	
bool Orden_Direccion(Cliente c1, Cliente c2){
	return StrAMinusculas(c1.GetDireccion()) < StrAMinusculas(c2.GetDireccion());
}
	
bool Orden_Email(Cliente c1, Cliente c2){
	return StrAMinusculas(c1.GetEmail()) < StrAMinusculas(c2.GetEmail());
}
	
bool Orden_Telefono(Cliente c1, Cliente c2){
	return StrAMinusculas(c1.GetTelefono()) < StrAMinusculas(c2.GetTelefono());
}

// Para Venta
bool Orden_ID_Venta(Venta v1, Venta v2){
	return v1.GetID() < v2.GetID();
}

bool Orden_IDCliente(Venta v1, Venta v2){
	return v1.GetIDCliente() < v2.GetIDCliente();
}

bool Orden_Total(Venta v1, Venta v2){
	return v1.GetTotal() < v2.GetTotal();
}
