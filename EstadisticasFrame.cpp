#include "EstadisticasFrame.h"
#include <wx/msgdlg.h>

EstadisticasFrame::EstadisticasFrame(wxWindow *parent, Sistema *m_sistema)
	: BaseEstadisticas(parent), sistema(m_sistema) {
	
	sistema->LoadVentas();
}

EstadisticasFrame::~EstadisticasFrame() {}

void EstadisticasFrame::ActualizarDatos( wxCommandEvent& event )  {
	wxDateTime DateFrom = datepicker_from->GetValue();
	wxDateTime DateTo = datepicker_to->GetValue();
	
	vector<Venta> ventas_en_periodo;
	float ganancias=0;
	for(int i=0; i<sistema->GetVentasSize(); i++){
		Venta venta = sistema->GetVenta(i);
		if(DateFrom.GetYear() == DateTo.GetYear()){
			if(venta.GetDayOfYear() > DateFrom.GetDayOfYear() && venta.GetDayOfYear() < DateTo.GetDayOfYear()){
				ventas_en_periodo.push_back(venta);
				ganancias += venta.GetTotal();
			} 
		} else {
			if(venta.GetYear() == DateFrom.GetYear()){
				if(venta.GetDayOfYear() > DateFrom.GetDayOfYear()){
					ventas_en_periodo.push_back(venta);
					ganancias += venta.GetTotal();
				}
			} else if(venta.GetYear() == DateTo.GetYear()){
				if(venta.GetDayOfYear() < DateTo.GetDayOfYear()){
					ventas_en_periodo.push_back(venta);
					ganancias += venta.GetTotal();
				}
			}
		}
	}
	
	if(!ventas_en_periodo.empty()){
		txt_CantidadVentas->SetLabel(to_string(ventas_en_periodo.size()));
		txt_Monto->SetLabel(to_string(ganancias));
	}
}

