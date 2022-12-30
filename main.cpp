#include "Sistema.h"

#include <iostream>
#include <cstring>
using namespace std;

void AgregarArticulo();
void EditarArticulo();
void BorrarArticulo();

int GetInput()
{
	int choice;    
	cin >> choice;
	return choice;
}

void DisplayMainMenu()
{
	cout << "Menu Principal\n";
	cout << "Seleccione una opcion:\n";
	cout << "1 - Articulos\n";
	cout << "2 - Clientes\n";
	cout << "3 - Ventas\n";
	cout << "4 - Salir\n";
	cout << "Seleccion: ";
}

void DisplayArticulosMenu()
{
	cout << "Articulos\n";
	cout << "Seleccione una opcion\n";
	cout << "1 - Agregar\n";
	cout << "2 - Editar\n";
	cout << "3 - Borrar\n";
	cout << "4 - Volver\n";
	cout << "Seleccion: ";
}

void DisplayClientesMenu()
{
	cout << "Clientes\n";
	cout << "Seleccione una opcion\n";
	cout << "1 - Agregar\n";
	cout << "2 - Editar\n";
	cout << "3 - Borrar\n";
	cout << "4 - Volver\n";
	cout << "Seleccion: ";
}

void DisplayVentasMenu()
{
	cout << "Ventas\n";
	cout << "Seleccione una opcion\n";
	cout << "1 - Agregar\n";
	cout << "2 - Editar\n";
	cout << "3 - Borrar\n";
	cout << "4 - Volver\n";
	cout << "Seleccion: ";
}

void Articulos()
{
	int choice = 0;
	do
	{
		system("cls");
		DisplayArticulosMenu();
		choice = GetInput();
		switch(choice)
		{
		case 1:
			AgregarArticulo();
			break;
		case 2:
			cout << "EditarArticulo()...";
			break;
		case 3:
			cout << "BorrarArticulo()...";
			break;
		default:
			break;
		}
	} while(choice!=4);
}

void Clientes()
{
	int choice = 0;
	do
	{
		system("cls");
		DisplayClientesMenu();
		choice = GetInput();
		switch(choice)
		{
		case 1:
			cout << "AgregarCliente()...";
			break;
		case 2:
			cout << "EditarCliente()...";
			break;
		case 3:
			cout << "BorrarCliente()...";
			break;
		default:
			break;
		}
	} while(choice!=4);
}

void Ventas()
{
	int choice = 0;
	do
	{
		system("cls");
		DisplayVentasMenu();
		choice = GetInput();
		switch(choice)
		{
		case 1:
			cout << "AgregarVenta()...";
			break;
		case 2:
			cout << "EditarVenta()...";
			break;
		case 3:
			cout << "BorrarVenta()...";
			break;
		default:
			break;
		}
	} while(choice!=4);
}

int main()
{
	int choice = 0;
	
	do
	{
		system("cls");
		DisplayMainMenu();
		choice = GetInput();
		switch(choice) {
		case 1:
			Articulos();
			break;
		case 2: 
			Clientes();
			break;
		case 3: 
			Ventas();
			break;
			
		default: 
			break;
		}
	} while(choice!=4);
	
	system("PAUSE");
	return EXIT_SUCCESS;
}


void AgregarArticulo(){
	cin.ignore();
	cout << "> Descripcion: ";
	string str; getline(cin,str);
	
	cout << "> Precio: ";
	float precio; cin >> precio;
	
	cout << "> Stock: ";
	int stock = GetInput();
	
	RegistroProducto reg;
	strcpy(reg.descripcion,str.c_str());
	reg.precio = precio;
	reg.stock = stock;
	
	Producto prod(reg.descripcion, reg.precio, reg.stock);
	prod.AddProducto();
}


void EditarArticulo(){
	
}


void BorrarArticulo(){
	
}

