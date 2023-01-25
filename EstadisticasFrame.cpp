#include "EstadisticasFrame.h"

EstadisticasFrame::EstadisticasFrame(wxWindow *parent, Sistema *m_sistema)
	: BaseEstadisticas(parent), sistema(m_sistema) {
	
	sistema->LoadVentas();
}

EstadisticasFrame::~EstadisticasFrame() {}

void EstadisticasFrame::ActualizarDatos( wxDateEvent& event )  {
	wxDateTime DateFrom = datepicker_from->GetValue();
	wxDateTime DateTo = datepicker_to->GetValue();
	
	vector<Venta> ventas_en_periodo;
	float ganancias=0;
	for(int i=0; i<sistema->GetVentasSize(); i++){
		Venta venta = sistema->GetVenta(i);
		if(venta.GetYear() >= DateFrom.GetYear() && venta.GetYear() <= DateTo.GetYear()){
			if(venta.GetMonth() >= DateFrom.GetMonth() && venta.GetMonth() <= DateTo.GetMonth()){
				if(venta.GetDay() >= DateFrom.GetDay() && venta.GetDay() <= DateTo.GetDay()){
					ventas_en_periodo.push_back(venta);
					ganancias += venta.GetTotal();
					
				}
			}
		}
	}
	
	if(!ventas_en_periodo.empty()){
		sort(ventas_en_periodo.begin(), ventas_en_periodo.end(), Orden_Fecha);
		
		txt_CantidadVentas->SetLabel(to_string(ventas_en_periodo.size()));
		txt_Monto->SetLabel(to_string(ganancias));
	}
	
}

