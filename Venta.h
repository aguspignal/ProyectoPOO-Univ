#ifndef VENTA_H
#define VENTA_H

#include "Producto.h"
#include "VentaDetalle.h"
#include <vector>
using namespace std;

struct Fecha {
	int year;
	unsigned short month;
	unsigned short day;
	unsigned short year_day;
};

struct RegistroVenta {
	int id;
	int id_cliente;
	float total;
	Fecha fecha;
	bool modificada = false;
};

class Venta {
private:
	int id;
	int id_cliente;
	float total;
	int year;
	unsigned short month;
	unsigned short day;
	unsigned short year_day;
	bool modificada = false;
	
public:
	Venta();
	Venta(int id_cliente, vector<ProductoCantidad> productos_cantidades);
	Venta(int id, int id_cliente, float total, Fecha fecha, bool modif);
	Venta(int id, int id_cliente, float total, bool modif);
	
	/// ID
	int GetID();
	int GetLastID();
	
	/// ID Cliente
	int GetIDCliente();
	void SetIDCliente(int id_cliente);
	
	/// Bool
	bool GetModif();
	void SetModifTrue();
	
	/// Fecha
	void SetFecha(int year, unsigned short mo, unsigned short day);
	string GetFecha();
	
	int GetYear();
	void SetYear(int yr);
	
	unsigned short GetMonth();
	void SetMonth(unsigned short mo);
	
	unsigned short GetDay();
	void SetDay(unsigned short d);
	
	unsigned short GetDayOfYear();
	void SetDayOfYear(unsigned short yd);
	
	/// Total
	float GetTotal();
	void SetTotal(float total);
	float CalcularTotal(vector<ProductoCantidad> v);
	
	/// Agregar al archivo
	void AddVenta();
	
	~Venta(){};
};

#endif
