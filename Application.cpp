#include <wx/image.h>
#include "Application.h"
#include "Homepage.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	sistema = new Sistema();
	
	Homepage *win = new Homepage(sistema);
	win->Show();
	
	return true;
}
