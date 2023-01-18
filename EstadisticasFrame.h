#ifndef ESTADISTICASFRAME_H
#define ESTADISTICASFRAME_H
#include "wxfb_project.h"
#include "Sistema.h"

class EstadisticasFrame : public BaseEstadisticas {
private:
	Sistema *sistema; 
	
protected:
	
public:
	EstadisticasFrame(wxWindow *parent, Sistema *m_sistema);
	~EstadisticasFrame();
};

#endif

