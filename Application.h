#ifndef APPLICATION_H
#define APPLICATION_H

#include "Sistema.h"
#include <wx/app.h>

class Application : public wxApp {
private:
	Sistema *sistema;
	
public:
	virtual bool OnInit();
};

#endif
