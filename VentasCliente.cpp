#include "VentasCliente.h"
#include "string_conv.h"

VentasCliente::VentasCliente(wxWindow *parent, Sistema *m_sistema, int id_cliente, vector<int> ventas) 
	: BaseVentasCliente(parent), sistema(m_sistema), ventas_cliente(ventas) {
	
	Cliente cliente = sistema->GetClienteByID(id_cliente);
	txt_DatosCliente->SetLabel(cliente.GetNombre()+" - "+to_string(cliente.GetDNI())+" - "+cliente.GetDireccion());
	txt_CantVentas->SetLabel(to_string(ventas_cliente.size()));
	ActualizarGridVentas();
}

VentasCliente::~VentasCliente() {}

void VentasCliente::ActualizarGridVentas(){
	if(gridIDVentas->GetNumberRows() != 0){
		gridIDVentas->DeleteRows(0,gridIDVentas->GetNumberRows());
	}
	for(int i=0; i<ventas_cliente.size(); i++){
		gridIDVentas->AppendRows();
		gridIDVentas->SetCellValue(i,0,to_string(ventas_cliente[i]));
		
		gridTotales->AppendRows();
		gridTotales->SetCellValue(i,0, to_string(sistema->GetVentaByID(ventas_cliente[i]).GetTotal()));
	}
	gridTotales->SetColFormatFloat(2,-1,2);
}

void VentasCliente::ActualizarGridDetalles(int id_venta){
	if(gridDetalles->GetNumberRows() != 0){
		gridDetalles->DeleteRows(0,gridDetalles->GetNumberRows());
	}
	
	if(id_venta != 0){
		vector<VentaDetalle> detalles = sistema->GetDetallesByIDVenta(id_venta);
		for(int i=0; i<detalles.size(); i++){
			gridDetalles->AppendRows();
			gridDetalles->SetCellValue(i,0, detalles[i].GetDescripcion());
			gridDetalles->SetCellValue(i,1, to_string(detalles[i].GetValorVendido()));
			gridDetalles->SetCellValue(i,2, to_string(detalles[i].GetCantidad()));
			gridDetalles->SetCellValue(i,3, to_string(detalles[i].GetSubtotal()));
		}
		gridDetalles->SetColFormatFloat(1,-1,2);
		gridDetalles->SetColFormatFloat(3,-1,2);
	}
}

void VentasCliente::VerDetalleVenta( wxCommandEvent& event )  {
	if(gridIDVentas->GetNumberRows() != 0){
		int row = gridIDVentas->GetGridCursorRow();
		int id_venta = stoi(wx_to_std(gridIDVentas->GetCellValue(row,0))); // str to int
		ActualizarGridDetalles(id_venta);
	}
}



