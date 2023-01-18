#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include "wxfb_project.h"
#include "Sistema.h"

class Homepage : public BaseHomepage {
	
private:
	Sistema *sistema;
	
protected:
	void DisplayEstadisticas( wxCommandEvent& event )  override;
	void DisplayProductsFrmae( wxCommandEvent& event )  override;
	void DisplayClientesFrame( wxCommandEvent& event )  override;
	void DisplayVentasFrame( wxCommandEvent& event )  override;
	
public:
	Homepage(Sistema *m_sistema);
	~Homepage();
};

#endif

