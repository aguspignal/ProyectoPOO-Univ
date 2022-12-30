#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Sistema.h"

class Application : public wxApp {
private:
	Sistema *sistema;
	
public:
	virtual bool OnInit();
};

#endif
