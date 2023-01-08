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
	o << reg.id <<"   "<< reg.nombre <<"   "<< reg.dni <<"   "
		<< reg.direccion << reg.email << reg.telefono <<endl;
	return o;
}
ostream &operator<<(ostream &o, Cliente c){
	o << c.GetID() <<"   "<< c.GetNombre()<<"  "<< c.GetDNI() <<"  "
		<<c.GetDireccion()<<"   "<<c.GetEmail()<<"   "<<c.GetTelefono()<<endl;
	return o;
}
ostream &operator<<(ostream &o, VentaDetalle vdetalle){
	Sistema sist;
	string str;
	if(sist.GetProductoByID(vdetalle.GetIDProducto()).GetDescripcion() == "none"){
		str = "Producto eliminado";
	} else { 
		str = sist.GetProductoByID(vdetalle.GetIDProducto()).GetDescripcion(); 
	}
	
	o << vdetalle.GetIDProducto() <<"     "
		<< str <<"   $"
		<< vdetalle.GetValorVendido() <<"    "
		<< vdetalle.GetCantidad() <<"    "
		<< vdetalle.GetSubtotal() <<endl;
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
	cout<<"\n\nID |    Nombre    |   DNI   |    Direccion    |     Email    |     Telefono\n";
	
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
	string nombre; getline(cin,nombre);
	
	cout << "> DNI: ";
	int dni = GetInput();
	
	cin.ignore();
	cout << "> Direccion: ";
	string direccion; getline(cin,direccion);
	cout << "> Email: ";
	string email; getline(cin,email);
	cout << "> Telefono: ";
	string telefono; getline(cin,telefono);
	
	Cliente cliente(nombre, dni, direccion, email, telefono);
	
	Sistema sist;
	sist.GuardarCliente(cliente);
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
		string nombre; getline(cin,nombre);
		
		cout << "> DNI: ";
		int dni; cin>>dni;
		
		cout << "> Direccion: ";
		string direccion; getline(cin,direccion);
		cout << "> Email: ";
		string email; getline(cin,email);
		cout << "> Telefono: ";
		string telefono; getline(cin,telefono);
		
		sist.ModificarCliente(id,nombre,dni, direccion, email, telefono);
	}
}
	
void BorrarCliente(){
	cout<<"ID del cliente: ";
	int id = GetInput();
	
	Sistema sist;
	sist.DeleteCliente(id);
}
	
	
/// -- Venta
void MostrarVentas(){
	Sistema sist; 
//	sist.MostrarDetalles();
	for(int i=0; i<sist.GetVentasSize(); i++){
		cout << "\n\nID | ID Cliente |  Total = $"<< sist.GetVenta(i).GetTotal() << " |\n";
		cout << sist.GetVenta(i).GetID() <<"    "<< sist.GetVenta(i).GetIDCliente() <<endl;
		
		vector<VentaDetalle> detallesventa = sist.GetDetallesByIDVenta(sist.GetVenta(i).GetID());
		
		cout << "ProdID |   Descripcion   | Precio | Cantidad | Subtotal\n";
		for(int j=0; j<detallesventa.size(); j++){
			cout << detallesventa[j];
		}
		if(sist.GetVenta(i).GetModif()){
			cout<<"\n				      *Venta Editada";
		}
	}
	cout<<endl;
	system("PAUSE");
}
	
void AgregarVenta(){
	Sistema sist;
	
	cout << "ID Cliente: (0 para cancelar) ";
	int id_cliente; cin >> id_cliente;
	if(id_cliente != 0){
		
		int id;
		ProductoCantidad ProdCant;
		vector<ProductoCantidad> articulos;
		do {
			cout << "ID Articulo: (0 para terminar)\n";
			cin >> id;
			if(id != 0){
				ProdCant.prod = sist.GetProductoByID(id);
				
				bool result;
				do {
					cout << "Cantidad: ";
					cin >> ProdCant.cant;
					
					result = sist.GetProductoByID(id).CheckStock(ProdCant.cant);
					if(!result){
						cout<< "Falta de stock!\n";
					} else {
						articulos.push_back(ProdCant);
					}
					
				} while(!result);
			}
		} while(id != 0);
		
		Venta venta(id_cliente, articulos);
		venta.AddVenta();
	}
}
	
void EditarVenta(){
	cout<<"ID de la venta: ";
	int id; cin>>id;
	
	Sistema sist;
	Venta venta = sist.GetVentaByID(id);
	
	if(venta.GetID() == 0){
		cout << "Venta no encontrada\n";
		system("PAUSE");
	} else {
		cout << "\n\nID | ID Cliente |  Total = $"<< venta.GetTotal() << " |\n";
		cout << venta.GetID() <<"    "<< venta.GetIDCliente() <<endl;
		
		vector<VentaDetalle> detallesventa = sist.GetDetallesByIDVenta(venta.GetID());
		
		cout << "ProdID |   Descripcion   | Precio | Cantidad | Subtotal\n";
		for(int j=0; j<detallesventa.size(); j++){
			cout << detallesventa[j];
		}
		
		cout << "\n> ID Cliente: ";
		int id_cliente; cin>>id_cliente;
		cout << "> Total: ";
		float total; cin>>total;
		
		sist.ModificarVenta(id,id_cliente,total);
	}
}

void BorrarVenta(){
	cout<<"ID de la venta: ";
	int id = GetInput();
	
	Sistema sist;
	sist.DeleteVenta(id);
}
	
/// -- Menu 
void DisplayMainMenu()
{
	cout << "- Menu Principal -\n";
	cout << "Seleccione una opcion:\n";
	cout << "1 - Articulos\n";
	cout << "2 - Clientes\n";
	cout << "3 - Ventas\n";
	cout << "4 - Salir\n";
	cout << "Seleccion: ";
}

void DisplayArticulosMenu()
{
	cout << "- Articulos -\n";
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
	cout << "- Clientes -\n";
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
	cout << "- Ventas -\n";
	cout << "Seleccione una opcion\n";
	cout << "0 - Ver Ventas\n";
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
		case 0:
			MostrarVentas();
			break;
		case 1:
			AgregarVenta();
			break;
		case 2:
			EditarVenta();
			break;
		case 3:
			BorrarVenta();
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
