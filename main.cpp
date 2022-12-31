#include "Sistema.h"

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

ostream &operator<<(ostream &o, RegistroProducto reg){
	o << reg.id <<"   "<< reg.descripcion <<"   $"<< reg.precio <<"  "<< reg.stock <<endl;
	return o;
}
ostream &operator<<(ostream &o, Producto p){
	o << p.GetID() <<"   "<< p.GetDescripcion() <<"   $"<< p.GetPrecio() <<"  "<< p.GetStock() <<endl;
	return o;
}
ostream &operator<<(ostream &o, RegistroCliente reg){
	o << reg.id <<"   "<< reg.nombre <<"   "<< reg.dni <<endl;
	return o;
}
ostream &operator<<(ostream &o, Cliente c){
	o << c.GetID() <<"   "<< c.GetNombre()<<"  "<< c.GetDNI() <<endl;
	return o;
}

int GetInput()
{
	int choice;    
	cin >> choice;
	return choice;
}

/// -- Articulos
void MostrarArticulos(){
	cout<<"\n\nID |    Descripcion    | Precio | Stock\n";
	
//	Sistema sist;
//	for(int i=0; i<sist.GetProductosSize(); i++){
//		cout << sist.GetProducto(i);
//	}
//	A diferencia de Cliente aca andan bien las dos maneras
	ifstream archi("productos.bin",ios::binary|ios::in|ios::ate);
	int cant_prods = archi.tellg() / sizeof(RegistroProducto);
	archi.seekg(0);
	
	RegistroProducto reg;
	for(int i=0; i<cant_prods; i++){
		archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
		cout << reg;
	}
	
	cout<<endl;
	system("PAUSE");
}
	
void AgregarArticulo(){
	cin.ignore();
	cout << "> Descripcion: ";
	string str; getline(cin,str);
	
	cout << "> Precio: ";
	float precio; cin>>precio;
	
	cout << "> Stock: ";
	int stock = GetInput();
	
	Producto prod(str, precio, stock);
	prod.AddProducto();
}


void EditarArticulo(){
	cout<<"ID del articulo: ";
	int id = GetInput();
	
	Sistema sist;
	Producto prod = sist.GetProductoByID(id);
	
	if(prod.GetID() == 0){
		cout << "Articulo no encontrado\n";
		system("PAUSE");
	} else {
		cout << prod;
		
		cin.ignore();
		cout << "> Descripcion: ";
		string str; getline(cin,str);
		
		cout << "> Precio: ";
		float precio; cin >> precio;
		
		cout << "> Stock: ";
		int stock = GetInput();
		
		sist.ModificarProducto(id,str,precio,stock);
	}
}

void BorrarArticulo(){
	cout<<"ID del articulo: ";
	int id = GetInput();
	
	Sistema sist;
	sist.DeleteProducto(id);
}

/// -- Clientes
void MostrarClientes(){
	cout<<"\n\nID |    Nombre    | DNI\n";
	
	Sistema sist;
	for(int i=0; i<sist.GetClientesSize(); i++){
		cout << sist.GetCliente(i);
	}	
	cout<<endl;
	system("PAUSE");
}
	
void AgregarCliente(){
	cin.ignore();
	cout << "> Nombre: ";
	string str; getline(cin,str);
	
	cout << "> DNI: ";
	int dni = GetInput();
	
	Cliente cliente(str, dni);
	cliente.AddCliente();
}

	
void EditarCliente(){
	cout<<"ID del cliente: ";
	int id; cin>>id;
	
	Sistema sist;
	Cliente cliente = sist.GetClienteByID(id);
	
	if(cliente.GetID() == 0){
		cout << "Cliente no encontrado\n";
		system("PAUSE");
	} else {
		cout << cliente;
		
		cin.ignore();
		cout << "> Nombre: ";
		string str; getline(cin,str);
		
		cout << "> DNI: ";
		int dni; cin>>dni;
		
		sist.ModificarCliente(id,str,dni);
	}
}
	
void BorrarCliente(){
	cout<<"ID del cliente: ";
	int id = GetInput();
	
	Sistema sist;
	sist.DeleteCliente(id);
}
	
/// -- Menu 
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
	cout << "0 - Ver Articulos\n";
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
	cout << "0 - Ver Clientes\n";
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
		case  0:
			MostrarArticulos();
			break;
		case 1:
			AgregarArticulo();
			break;
		case 2:
			EditarArticulo();
			break;
		case 3:
			BorrarArticulo();
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
		case 0:
			MostrarClientes();
			break;
		case 1:
			AgregarCliente();
			break;
		case 2:
			EditarCliente();
			break;
		case 3:
			BorrarCliente();
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
	
	return EXIT_SUCCESS;
}
