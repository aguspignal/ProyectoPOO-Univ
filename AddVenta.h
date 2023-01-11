#ifndef ADDVENTA_H
#define ADDVENTA_H
#include "wxfb_project.h"
#include "Sistema.h"

class AddVenta : public BaseAddVenta {
	
private:
	Sistema *sistema;
	vector<ProductoCantidad> prods_seleccionados;
	int id_cliente = 0;
	int id_prod = 0;
	
protected:
	void OrdenarGrid( wxGridEvent& event )  override;
	void SeleccionarProducto( wxGridEvent& event )  override;
	void AgregarProducto( wxCommandEvent& event )  override;
	void QuitarProducto( wxCommandEvent& event )  override;
	void BuscarCliente( wxCommandEvent& event )  override;
	void BuscarProducto( wxCommandEvent& event )  override;
	void ConfirmarVenta( wxCommandEvent& event )  override;
	void CancelarVenta( wxCommandEvent& event )  override;
	float CalcularTotal();
	void ActualizarGrid();
	
public:
	AddVenta(wxWindow *parent, Sistema *m_sistema);
	~AddVenta();
};

#endif

