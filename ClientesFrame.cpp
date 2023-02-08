#include "ClientesFrame.h"
#include "AddClienteFrame.h"
#include "EditCliente.h"
#include "string_conv.h"
#include <wx/msgdlg.h>
#include "VentasCliente.h"

ClientesFrame::ClientesFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseClientesFrame(parent), sistema(m_sistema) {
	
	ActualizarGrid();
	gridClientes->ClearSelection();
}

ClientesFrame::~ClientesFrame() { }

/// -- ACTUALIZAR Grid
void ClientesFrame::ActualizarGrid(){
	gridClientes->ClearSelection();
	if(gridClientes->GetNumberRows() != 0){
		gridClientes->DeleteRows(0,gridClientes->GetNumberRows());
	}
	
	for(int i=0; i<sistema->GetClientesSize(); i++){
		gridClientes->AppendRows();
		gridClientes->SetCellValue(i,0, to_string(sistema->GetCliente(i).GetID()));
		gridClientes->SetCellValue(i,1, sistema->GetCliente(i).GetNombre());
		gridClientes->SetCellValue(i,2, to_string(sistema->GetCliente(i).GetDNI()));
		gridClientes->SetCellValue(i,3, sistema->GetCliente(i).GetDireccion());
		gridClientes->SetCellValue(i,4, sistema->GetCliente(i).GetEmail());
		gridClientes->SetCellValue(i,5, sistema->GetCliente(i).GetTelefono());
	}
}

// Ejecutada en btn "Actualizar"
void ClientesFrame::ActualizarGrid( wxCommandEvent& event )  {
	sistema->LoadClientes();
	ActualizarGrid();
	input_BuscarCliente->SetLabel("");
}


/// -- AGREGAR
void ClientesFrame::DisplayAddCliente( wxCommandEvent& event )  {
	AddClienteFrame *win = new AddClienteFrame(this,sistema);
	if(win->ShowModal() == 1){
		ActualizarGrid();
	}
}


/// -- ELIMINAR
void ClientesFrame::EliminarCliente( wxCommandEvent& event )  {
	if(gridClientes->GetNumberRows() == 0){
		wxMessageBox("No hay clientes","Error",wxOK|wxICON_ERROR);
	} else {
		int choice = wxMessageBox("¿Esta seguro?","Advertencia",wxYES_NO|wxICON_QUESTION);
		if(choice == wxYES){
			int id = stoi(wx_to_std(gridClientes->GetCellValue(gridClientes->GetGridCursorRow(),0)));
			sistema->DeleteCliente(id);
			
			ActualizarGrid();
		}
	}
}


/// -- EDITAR
void ClientesFrame::DisplayEditarCliente( wxCommandEvent& event )  {
	if(gridClientes->GetNumberRows() == 0){
		wxMessageBox("No hay clientes","Error",wxOK|wxICON_ERROR);
	} else {
		int id = stoi(wx_to_std(gridClientes->GetCellValue(gridClientes->GetGridCursorRow(),0)));
		
		EditCliente *win = new EditCliente(this,sistema,id);
		if(win->ShowModal() == 1){
			ActualizarGrid();
		}
	}
	
}


/// -- VENTAS Registradas
void ClientesFrame::VerVentas( wxCommandEvent& event )  {
	if(gridClientes->GetNumberRows() == 0){
		wxMessageBox("No hay clientes","Error",wxOK|wxICON_ERROR);
	} else {
		int id = stoi(wx_to_std(gridClientes->GetCellValue(gridClientes->GetGridCursorRow(),0)));
		
		vector<int> ventas_cliente = sistema->GetVentasByIDCliente(id);
		if(ventas_cliente.empty()){
			wxMessageBox("El cliente no posee ventas","Error",wxOK|wxICON_EXCLAMATION);
		} else {
			VentasCliente *win = new VentasCliente(this,sistema,id,ventas_cliente);
			win->ShowModal();
		}
	}
}

/// -- BUSQUEDA
void ClientesFrame::BuscarCliente( wxCommandEvent& event )  {
	if(!input_BuscarCliente->IsEmpty()){
		string busqueda = wx_to_std(input_BuscarCliente->GetValue());
		vector<int> resultados = sistema->BuscarClientes(busqueda);
		
		if(resultados.empty()){
			wxMessageBox("No se encontraron productos","Error",wxOK|wxICON_ERROR);	
		} else {
			if(gridClientes->GetNumberRows() != 0){
				gridClientes->DeleteRows(0,gridClientes->GetNumberRows());
			}
			for(int i=0; i<resultados.size(); i++){
				Cliente cliente = sistema->GetClienteByID(resultados[i]);
				gridClientes->AppendRows();
				gridClientes->SetCellValue(i,0, to_string(cliente.GetID()));
				gridClientes->SetCellValue(i,1, cliente.GetNombre());
				gridClientes->SetCellValue(i,2, to_string(cliente.GetDNI()));
				gridClientes->SetCellValue(i,3, cliente.GetDireccion());
				gridClientes->SetCellValue(i,4, cliente.GetEmail());
				gridClientes->SetCellValue(i,5, cliente.GetTelefono());
			}
		}
	}
}


/// -- ORDENAR
void ClientesFrame::OrdenarGrid( wxGridEvent& event )  {
	int col = event.GetCol();
	switch (col){
	case 0: sistema->OrdenarClientes(ID_CLIENTE); break;
	case 1: sistema->OrdenarClientes(NOMBRE); break;
	case 2: sistema->OrdenarClientes(DNI); break;
	case 3: sistema->OrdenarClientes(DIRECCION); break;
	case 4: sistema->OrdenarClientes(EMAIL); break;
	}
	ActualizarGrid();
}


void ClientesFrame::SeleccionarRow( wxGridEvent& event )  {
	gridClientes->ClearSelection();
	gridClientes->SelectRow(event.GetRow());
}

