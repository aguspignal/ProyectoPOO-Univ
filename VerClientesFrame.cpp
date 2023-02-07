#include "VerClientesFrame.h"
#include "string_conv.h"
#include <wx/msgdlg.h>

VerClientesFrame::VerClientesFrame(wxWindow *parent, Sistema *m_sistema, string m_busqueda, vector<int> m_resultados)
	: BaseVerClientes(parent), sistema(m_sistema), busqueda(m_busqueda), resultados(m_resultados) {
	
	txt_Resultados->SetLabel("Resultados para: '"+busqueda+"'");
	for(int i=0; i<resultados.size(); i++){
		Cliente cliente = sistema->GetClienteByID(resultados[i]);
		gridClientes->AppendRows();
		gridClientes->SetCellValue(i,0,to_string(cliente.GetID()));
		gridClientes->SetCellValue(i,1,cliente.GetNombre());
		gridClientes->SetCellValue(i,2,to_string(cliente.GetDNI()));
		gridClientes->SetCellValue(i,3,cliente.GetDireccion());
	}
	gridClientes->ClearSelection();
}

VerClientesFrame::~VerClientesFrame() {}

void VerClientesFrame::SeleccionarCliente( wxGridEvent& event )  {
	if(gridClientes->GetNumberRows() != 0){
		int row = event.GetRow();
		long id;
		gridClientes->GetCellValue(row,0).ToLong(&id);
		Cliente cliente = sistema->GetClienteByID(id);
		if(cliente.GetID() != 0){
			id_cliente = id;
			txt_Cliente->SetLabel(gridClientes->GetCellValue(row,1)+" - "+
								  gridClientes->GetCellValue(row,2)+" - "+
								  gridClientes->GetCellValue(row,3));
		}
	}	
}

void VerClientesFrame::AgregarCliente( wxCommandEvent& event )  {
	EndModal(id_cliente);
}

void VerClientesFrame::CloseWindow( wxCloseEvent& event )  {
	EndModal(0);
}



