#ifndef VERCLIENTESFRAME_H
#define VERCLIENTESFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class VerClientesFrame : public BaseVerClientes {
	
private:
	Sistema *sistema;
	vector<int> resultados;
	string busqueda;
	int id_cliente = 0;
	
protected:
	void CloseWindow( wxCloseEvent& event )  override;
	void SeleccionarCliente( wxGridEvent& event )  override;
	void OrdenarGrid( wxGridEvent& event )  override;
	void AgregarCliente( wxCommandEvent& event )  override;
	
public:
	VerClientesFrame(wxWindow *parent, Sistema *m_sistema, string m_busqueda, vector<int> resultados);
	~VerClientesFrame();
};

#endif

