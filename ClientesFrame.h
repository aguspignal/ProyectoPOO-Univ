#ifndef CLIENTESFRAME_H
#define CLIENTESFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class ClientesFrame : public BaseClientesFrame {
	
private:
	Sistema *sistema;
	
protected:
	void DisplayAddCliente( wxCommandEvent& event )  override;
	void EliminarCliente( wxCommandEvent& event )  override;
	void DisplayEditarCliente( wxCommandEvent& event )  override;
	void ActualizarGrid();
	void BackToHome( wxCommandEvent& event )  override;
	
public:
	ClientesFrame(wxWindow *parent, Sistema *m_sistema);
	~ClientesFrame();
};

#endif

