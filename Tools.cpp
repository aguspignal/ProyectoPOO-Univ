#include "Tools.h"
#include <algorithm>
#include <cstring>
using namespace std;

/// STRING 
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
	
string StrDosDecimales(string str){
	size_t pos = str.find(".",0);
	if(pos != str.length()){ 
		string str2 = str.substr(0,pos+3);
		return str2;
	}
	return str;
}

	
/// PRODUCTO-CANTIDAD
bool GetMayorProductoCantidad(ProductoCantidad p1, ProductoCantidad p2){
	return p1.cantidad < p2.cantidad;
}
	
	
/// VALIDACIONES
bool ValidarNumerico(string input){
	char C_INPUT[input.length()];
	strcpy(C_INPUT,input.c_str());
	
	for(int i=0; i<input.length(); i++){
		if(C_INPUT[i] < 48 || C_INPUT[i] > 57){ // numeros en codigo ASCII
			return false;
		}
	}
	return true;
}
	
	
/// CRITERIOS ORDENAMIENTO
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
bool Orden_Fecha(Venta v1, Venta v2){
	if(v1.GetYear() == v2.GetYear()){
		if(v1.GetMonth() == v2.GetMonth()){
			if(v1.GetDay() == v2.GetDay()){
				return true;
			} else {
				return v1.GetDay() < v2.GetDay();
			}
		} else {
			return v1.GetMonth() < v2.GetMonth();
		}
	} else {
		return v1.GetYear() < v2.GetYear();
	}
	return false;
}

	

	
	
