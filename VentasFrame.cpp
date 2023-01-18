#include "VentasFrame.h"
#include "AddVenta.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

VentasFrame::VentasFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseVentasFrame(parent), sistema(m_sistema) {
	
	ActualizarGridVentas();
}

VentasFrame::~VentasFrame() {}

/// Actualizar GRID VENTAS
void VentasFrame::ActualizarGridVentas(){
	if(gridVentas->GetNumberRows() != 0){
		gridVentas->DeleteRows(0,gridVentas->GetNumberRows());
	}
	
	for(int i=0; i<sistema->GetVentasSize(); i++){
		gridVentas->AppendRows();
		gridVentas->SetCellValue(i,0, to_string(sistema->GetVenta(i).GetID()));
		gridVentas->SetCellValue(i,1, to_string(sistema->GetVenta(i).GetIDCliente()));
		gridVentas->SetCellValue(i,2, "$"+to_string(sistema->GetVenta(i).GetTotal()));
	}
	gridVentas->SetColFormatFloat(2,-1,2);
}

/// Actualizar GRID DETALLES
void VentasFrame::ActualizarGridDetalles(int id_venta){
	if(gridDetalles->GetNumberRows() != 0){
		gridDetalles->DeleteRows(0,gridDetalles->GetNumberRows());
	}
	
	if(id_venta != 0){
		vector<VentaDetalle> detalles = sistema->GetDetallesByIDVenta(id_venta);
		for(int i=0; i<detalles.size(); i++){
			gridDetalles->AppendRows();
			gridDetalles->SetCellValue(i,0,to_string(detalles[i].GetIDProducto()));
			gridDetalles->SetCellValue(i,1, sistema->GetProductoByID(detalles[i].GetIDProducto()).GetDescripcion());
			gridDetalles->SetCellValue(i,2, "$"+to_string(detalles[i].GetValorVendido()));
			gridDetalles->SetCellValue(i,3, to_string(detalles[i].GetCantidad()));
			gridDetalles->SetCellValue(i,4, "$"+to_string(detalles[i].GetSubtotal()));
		}
		gridDetalles->SetColFormatFloat(2,-1,2);
		gridDetalles->SetColFormatFloat(4,-1,2);
	}
}

/// -- AGREGAR Venta
void VentasFrame::DisplayAddVenta( wxCommandEvent& event )  {
	AddVenta *win = new AddVenta(this,sistema);
	if(win->ShowModal() == 1){
		ActualizarGridVentas();
		ActualizarGridDetalles(0);
	}
}

/// -- MOSTRAR DETALLE
void VentasFrame::DisplayDetalleVenta( wxCommandEvent& event )  {
	if(gridVentas->GetNumberRows() != 0){
		int row = gridVentas->GetGridCursorRow();
		int id_venta = stoi(wx_to_std(gridVentas->GetCellValue(row,0))); // str to int
		ActualizarGridDetalles(id_venta);
	}
}

/// -- ELIMINAR Venta
void VentasFrame::EliminarVenta( wxCommandEvent& event )  {
	if(gridVentas->GetNumberRows() == 0){
		wxMessageBox("No hay ventas","Error",wxOK|wxICON_ERROR);
	} else {
		int choice = wxMessageBox("¿Esta seguro?","Advertencia",wxYES_NO|wxICON_QUESTION);
		if(choice == wxYES){
			int id = stoi(wx_to_std(gridVentas->GetCellValue(gridVentas->GetGridCursorRow(),0))); // str to int
			sistema->DeleteVenta(id);
			
			ActualizarGridVentas();
			ActualizarGridDetalles(0);
		}
	}
}

/// -- EDITAR Venta
void VentasFrame::DisplayEditarVenta( wxCommandEvent& event )  {
	event.Skip();
}

void VentasFrame::OrdenarGrid( wxGridEvent& event )  {
	int col = event.GetCol();
	switch (col){
	case 0: sistema->OrdenarVentas(ID_VENTA); break;
	case 1: sistema->OrdenarVentas(IDCLIENTE); break;
	case 2: sistema->OrdenarVentas(TOTAL); break;
	}
}

