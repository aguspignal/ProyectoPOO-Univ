#include "EstadisticasFrame.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include <algorithm>
using namespace std;

EstadisticasFrame::EstadisticasFrame(wxWindow *parent, Sistema *m_sistema)
	: BaseEstadisticas(parent), sistema(m_sistema) {

	ActualizarDatos();
}

EstadisticasFrame::~EstadisticasFrame() {}

void EstadisticasFrame::ActualizarDatos()  {
	year = stoi(wx_to_std(combo_year->GetValue()));
	ventas_en_periodo.clear();
	
	for(int i=0; i<sistema->GetVentasSize(); i++){
		Venta venta = sistema->GetVenta(i);
		if(venta.GetYear() == year){
			ventas_en_periodo.push_back(venta);
		}
	}
	CalcularGanancias();
	SetClienteConMasVentas();
	SetProductosMasVendidos();
	
	txt_CantidadVentas->SetLabel(to_string(ventas_en_periodo.size()));
	
	txt_Monto->SetLabel("$"+to_string(ganancias));
	
	if(cliente_top.GetID() != 0){
		txt_DatosCliente->SetLabel(cliente_top.GetNombre()+" - "+to_string(cliente_top.GetDNI())+
								   " ("+to_string(cant_ventas)+")");
	} else {
		txt_DatosCliente->SetLabel("No se encontraron clientes");
	}
	
	
	if(producto_top1.producto.GetID() != 0){
		txt_Producto1->SetLabel(producto_top1.producto.GetDescripcion()+" ("+to_string(producto_top1.cantidad)+")");
	} else { txt_Producto1->SetLabel(""); }
	
	if(producto_top2.producto.GetID() != 0){
		txt_Producto2->SetLabel(producto_top2.producto.GetDescripcion()+" ("+to_string(producto_top2.cantidad)+")");	
	} else { txt_Producto2->SetLabel(""); }
	
	if(producto_top3.producto.GetID() != 0){
		txt_Producto3->SetLabel(producto_top3.producto.GetDescripcion()+" ("+to_string(producto_top3.cantidad)+")");
	} else { txt_Producto3->SetLabel(""); }
}

void EstadisticasFrame::ActualizarDatos( wxCommandEvent& event )  {
	ActualizarDatos();
}

void EstadisticasFrame::SetClienteConMasVentas(){
	cant_ventas = 0;
	
	for(int i=0; i<sistema->GetClientesSize(); i++){
		Cliente cliente = sistema->GetCliente(i);
		vector<Venta> ventas_cliente;
		
		for(int i=0; i<ventas_en_periodo.size(); i++){
			if(ventas_en_periodo[i].GetIDCliente() == cliente.GetID()){
				ventas_cliente.push_back(ventas_en_periodo[i]);
			}
		}
		if(ventas_cliente.size() > cant_ventas){
			cant_ventas = ventas_cliente.size();
			cliente_top = cliente;
		}
	}
}

void EstadisticasFrame::SetProductosMasVendidos(){
	vector<ProductoCantidad> productos;
	
	for(int i=0; i<ventas_en_periodo.size(); i++){
		vector<VentaDetalle> detalles = sistema->GetDetallesByIDVenta(ventas_en_periodo[i].GetID());
		for(int i=0; i<detalles.size(); i++){
			ProductoCantidad producto_cant;
			producto_cant.cantidad = detalles[i].GetCantidad();
			producto_cant.producto = sistema->GetProductoByDescrip(detalles[i].GetDescripcion());
			productos.push_back(producto_cant);
		}
	}
	
	auto max = max_element(productos.begin(), productos.end(), GetMayorProductoCantidad);
	producto_top1 = *max;
	productos.erase(max);
	
	max = max_element(productos.begin(), productos.end(), GetMayorProductoCantidad);
	producto_top2 = *max;
	productos.erase(max);
	
	max = max_element(productos.begin(), productos.end(), GetMayorProductoCantidad);
	producto_top3 = *max;
	productos.erase(max);
}

void EstadisticasFrame::CalcularGanancias(){
	ganancias = 0;
	for(int i=0; i<ventas_en_periodo.size(); i++){
		ganancias += ventas_en_periodo[i].GetTotal(); 
	}
}

