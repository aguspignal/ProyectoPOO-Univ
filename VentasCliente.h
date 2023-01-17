#ifndef VENTASCLIENTE_H
#define VENTASCLIENTE_H
#include "wxfb_project.h"

class VentasCliente : public BaseVentasCliente {
private:
	Sistema *sistema;
protected:
	
public:
	VentasCliente(wxWindow *parent, Sistema *m_sistema);
	~VentasCliente();
};

#endif

