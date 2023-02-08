#include "Venta.h"
#include "Sistema.h"
#include <fstream>
using namespace std;

Venta::Venta(){
	this->id = 0;
	this->id_cliente = 0;
	this->total = 0;
}

Venta::Venta(int idCliente, vector<ProductoCantidad> prods_cants){
	this->id = GetLastID()+1;
	this->id_cliente = idCliente;
	this->total = CalcularTotal(prods_cants);
	
	for(int i=0; i<prods_cants.size(); i++){
		VentaDetalle vdetalle(this->id, prods_cants[i].producto.GetDescripcion(),
							  prods_cants[i].cantidad, prods_cants[i].producto.GetPrecio());
		vdetalle.AddVentaDetalle();
	}
}

Venta::Venta(int id, int idCliente, float total, Fecha fecha, bool modif){
	this->id = id;
	this->id_cliente = idCliente;
	this->total = total;
	this->fecha = fecha;
	this->modificada = modif;
}

//Venta::Venta(int id, int idCliente, float total, bool modif){
//	this->id = id;
//	this->id_cliente = idCliente;
//	this->total = total;
//	this->modificada = modif;
//}

/// -- ID --
int Venta::GetID(){
	return id;
}

int Venta::GetIDCliente(){
	return id_cliente;
}

void Venta::SetIDCliente(int id_cliente){
	this->id_cliente = id_cliente;
}

int Venta::GetLastID(){
	ifstream archi("ventas.bin",ios::binary|ios::in|ios::ate);
	int cant_ventas = archi.tellg() / sizeof(RegistroVenta);
	archi.seekg(0);
	
	int id = 0;
	if(cant_ventas > 0){
		RegistroVenta reg;
		for(int i=0; i<cant_ventas; i++){
			archi.read(reinterpret_cast<char*>(&reg),sizeof(reg));
			if (reg.id > id) {
				id = reg.id;
			}
		}
	}
	
	archi.close();
	return id;
}

/// -- Total --
float Venta::GetTotal() {
	return total;
}

void Venta::SetTotal(float total){
	this->total = total;
}

float Venta::CalcularTotal(vector<ProductoCantidad> prods_cants){
	Sistema sist;
	float suma = 0;
	for(int i=0; i<prods_cants.size(); i++){
		suma += (prods_cants[i].producto.GetPrecio() * prods_cants[i].cantidad);
	}
	return suma;
}

/// -- Bool --
bool Venta::GetModif(){
	return modificada;
}

void  Venta::SetModifTrue(){
	this->modificada = true;
}

/// -- FECHA -- 
void Venta::SetFecha(int yr, unsigned short mo, unsigned short day){
	SetYear(yr);
	SetMonth(mo);
	SetDay(day);
}

Fecha Venta::GetFecha(){
	return this->fecha;
}

string Venta::GetStrFecha(){
	string str = to_string(fecha.day)+"/"+to_string(fecha.month)+"/"+to_string(fecha.year);
	return str;
}

// -- Año --
int Venta::GetYear(){
	return fecha.year;
}

void Venta::SetYear(int yr){
	this->fecha.year = yr;
}

// -- Mes --
unsigned short Venta::GetMonth(){
	return fecha.month;
}

void Venta::SetMonth(unsigned short mo){
	this->fecha.month = mo;
}

// -- Dia --
unsigned short Venta::GetDay(){
	return fecha.day;
}

void Venta::SetDay(unsigned short dy){
	this->fecha.day = dy;
}

// -- Dia del año --
unsigned short Venta::GetDayOfYear(){
	return fecha.year_day;
}

void Venta::SetDayOfYear(unsigned short yd){
	this->fecha.year_day = yd;
}


/// -- Agregar al archivo --
void Venta::AddVenta(){
	ofstream archi("ventas.bin",ios::binary|ios::out|ios::app);
	
	RegistroVenta reg;
	reg.id = id;
	reg.id_cliente = id_cliente;
	reg.total = total;
	reg.fecha = fecha;
	reg.modificada = modificada;
	
	archi.write(reinterpret_cast<char*>(&reg),sizeof(reg));
	archi.close();
}


