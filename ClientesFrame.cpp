#include "ClientesFrame.h"
#include "AddClienteFrame.h"
#include "Confirm.h"
#include "EditCliente.h"
#include "string_conv.h"

ClientesFrame::ClientesFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseClientesFrame(parent), sistema(m_sistema) {
	
	ActualizarGrid();
}

ClientesFrame::~ClientesFrame() { }

void ClientesFrame::BackToHome( wxCommandEvent& event )  {
	this->Close();
}

void ClientesFrame::ActualizarGrid(){
	int numberRows = gridClientes->GetNumberRows();
	gridClientes->DeleteRows(0,numberRows);
	
	for(int i=0; i<sistema->GetClientesSize(); i++){
		gridClientes->AppendRows();
		gridClientes->SetCellValue(i,0, to_string(sistema->GetCliente(i).GetID()));
		gridClientes->SetCellValue(i,1, sistema->GetCliente(i).GetNombre());
		gridClientes->SetCellValue(i,2, to_string(sistema->GetCliente(i).GetDNI()));
		gridClientes->SetCellValue(i,3, " ");
		gridClientes->SetCellValue(i,3, " ");
		gridClientes->SetCellValue(i,3, " ");
	}
}

void ClientesFrame::DisplayAddCliente( wxCommandEvent& event )  {
	AddClienteFrame *win = new AddClienteFrame(this,sistema);
	if(win->ShowModal() == 1){
		ActualizarGrid();
	}
}

void ClientesFrame::EliminarCliente( wxCommandEvent& event )  {
	Confirm *win = new Confirm(this);
	if(win->ShowModal() == 1){
		int row = gridClientes->GetGridCursorRow();
		string str = wx_to_std(gridClientes->GetCellValue(row,0));
		int id = stoi(str); // str to int
		sistema->DeleteCliente(id);
		
		ActualizarGrid();
	}
}

void ClientesFrame::DisplayEditarCliente( wxCommandEvent& event )  {
	string str = wx_to_std(gridClientes->GetCellValue(gridClientes->GetGridCursorRow(),0));
	int id = stoi(str);
	
	EditCliente *win = new EditCliente(this,sistema,id);
	
	if(win->ShowModal() == 1){
		ActualizarGrid();
	}
}

