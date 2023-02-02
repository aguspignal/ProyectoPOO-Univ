#ifndef CLIENTESFRAME_H
#define CLIENTESFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class ClientesFrame : public BaseClientesFrame {
private:
	Sistema *sistema;
	
protected:
	void SeleccionarRow( wxGridEvent& event )  override;
	void VerVentas( wxCommandEvent& event )  override;
	void OrdenarGrid( wxGridEvent& event )  override;
	void ActualizarGrid( wxCommandEvent& event )  override;
	void BuscarCliente( wxCommandEvent& event )  override;
	void DisplayAddCliente( wxCommandEvent& event )  override;
	void EliminarCliente( wxCommandEvent& event )  override;
	void DisplayEditarCliente( wxCommandEvent& event )  override;
	void ActualizarGrid();
	
public:
	ClientesFrame(wxWindow *parent, Sistema *m_sistema);
	~ClientesFrame();
};

#endif

