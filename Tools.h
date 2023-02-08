#ifndef TOOLS_H
#define TOOLS_H

#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
using namespace std;

/// String 
string StrSinEspacios(string str);
string StrAMinusculas(string str);
string StrDosDecimales(string str);

/// Producto-Cantidad
bool GetMayorProductoCantidad(ProductoCantidad p1, ProductoCantidad p2);

/// Validaciones 
bool ValidarNumerico(string input);

/// Criterios de ordenamiento
bool Orden_ID_Prod(Producto p1, Producto p2);
bool Orden_Descripcion(Producto p1, Producto p2);
bool Orden_Precio(Producto p1, Producto p2);
bool Orden_Stock(Producto p1, Producto p2);
	
bool Orden_ID_Cliente(Cliente c1, Cliente c2);
bool Orden_Nombre(Cliente c1, Cliente c2);
bool Orden_DNI(Cliente c1, Cliente c2);
bool Orden_Direccion(Cliente c1, Cliente c2);
bool Orden_Email(Cliente c1, Cliente c2);
bool Orden_Telefono(Cliente c1, Cliente c2);
	
bool Orden_ID_Venta(Venta v1, Venta v2);
bool Orden_IDCliente(Venta v1, Venta v2);
bool Orden_Total(Venta v1, Venta v2);
bool Orden_Fecha(Venta v1, Venta v2);
#endif
