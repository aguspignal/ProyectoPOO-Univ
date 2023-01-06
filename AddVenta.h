#ifndef ADDVENTA_H
#define ADDVENTA_H
#include "wxfb_project.h"
#include "Sistema.h"

class AddVenta : public BaseAddVenta {
	
private:
	Sistema *sistema;
	int id_cliente = 0;
	vector<ProductoCantidad> v;
	
protected:
	void AgregarCliente( wxCommandEvent& event )  override;
	void AgregarProducto( wxCommandEvent& event )  override;
	void EliminarProducto( wxCommandEvent& event )  override;
	void ConfirmarVenta( wxCommandEvent& event )  override;
	void CancelarVenta( wxCommandEvent& event )  override;
	float CalcularTotal();
	
public:
	AddVenta(wxWindow *parent, Sistema *m_sistema);
	~AddVenta();
};

#endif

