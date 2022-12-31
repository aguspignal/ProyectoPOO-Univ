///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/srchctrl.h>
#include <wx/grid.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class BaseHomepage
///////////////////////////////////////////////////////////////////////////////
class BaseHomepage : public wxFrame
{
	private:

	protected:
		wxButton* btn_Productos;
		wxButton* btn_Clientes;
		wxButton* btn_Ventas;

		// Virtual event handlers, override them in your derived class
		virtual void DisplayProductsFrmae( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayClientesFrame( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayVentasFrame( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseHomepage( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 753,466 ), long style = wxDEFAULT_FRAME_STYLE|wxMAXIMIZE|wxTAB_TRAVERSAL );

		~BaseHomepage();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseProductosFrame
///////////////////////////////////////////////////////////////////////////////
class BaseProductosFrame : public wxFrame
{
	private:

	protected:
		wxButton* btn_BackHome;
		wxSearchCtrl* searchbar_Productos;
		wxGrid* gridProductos;
		wxButton* btn_AddProducto;
		wxButton* btn_DeleteProducto;
		wxButton* btn_EditProducto;
		wxPanel* m_panel3;

		// Virtual event handlers, override them in your derived class
		virtual void BackToHome( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayAddProducto( wxCommandEvent& event ) { event.Skip(); }
		virtual void EliminarProducto( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayEditarProducto( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseProductosFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 954,733 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseProductosFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseClientesFrame
///////////////////////////////////////////////////////////////////////////////
class BaseClientesFrame : public wxFrame
{
	private:

	protected:
		wxButton* btn_BackHome;
		wxTextCtrl* input_BuscarProducto;
		wxButton* btn_BuscarProducto;
		wxGrid* gridClientes;
		wxButton* btn_AddCliente;
		wxButton* btn_DeleteCliente;
		wxButton* btn_EditCliente;
		wxButton* btn_VentasCliente;
		wxStaticText* txt_Copyright;

		// Virtual event handlers, override them in your derived class
		virtual void BackToHome( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayAddCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void EliminarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayEditarCliente( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseClientesFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1060,772 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseClientesFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseConfirmEliminar
///////////////////////////////////////////////////////////////////////////////
class BaseConfirmEliminar : public wxDialog
{
	private:

	protected:
		wxStaticText* txt_Confirmar;
		wxButton* btn_Confirm;
		wxButton* btn_No;

		// Virtual event handlers, override them in your derived class
		virtual void ClickSI( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickNO( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseConfirmEliminar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~BaseConfirmEliminar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAddProductoFrame
///////////////////////////////////////////////////////////////////////////////
class BaseAddProductoFrame : public wxDialog
{
	private:

	protected:
		wxStaticText* txt_AgregarProducto;
		wxStaticText* txt_Descripcion;
		wxTextCtrl* input_Descripcion;
		wxStaticText* txt_Precio;
		wxSpinCtrlDouble* input_Precio;
		wxStaticText* txt_Stock;
		wxSpinCtrl* input_Stock;
		wxButton* btn_Agregar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseAddProductoFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Agregar producto nuevo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 282,245 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAddProductoFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseEditProducto
///////////////////////////////////////////////////////////////////////////////
class BaseEditProducto : public wxDialog
{
	private:

	protected:
		wxStaticText* txt_EditarProducto;
		wxStaticText* txt_Descripcion;
		wxTextCtrl* input_Descripcion;
		wxStaticText* txt_Precio;
		wxSpinCtrlDouble* input_Precio;
		wxStaticText* txt_Stock;
		wxSpinCtrl* input_Stock;
		wxButton* btn_Guardar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseEditProducto( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Editar producto"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 268,245 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseEditProducto();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAddClienteFrame
///////////////////////////////////////////////////////////////////////////////
class BaseAddClienteFrame : public wxDialog
{
	private:

	protected:
		wxStaticText* txt_AgregarCliente;
		wxStaticText* txt_Nombre;
		wxTextCtrl* input_Nombre;
		wxStaticText* txt_DNI;
		wxSpinCtrl* input_DNI;
		wxButton* btn_Agregar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseAddClienteFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Agregar cliente nuevo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 282,245 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAddClienteFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseEditCliente
///////////////////////////////////////////////////////////////////////////////
class BaseEditCliente : public wxDialog
{
	private:

	protected:
		wxStaticText* txt_EditarCliente;
		wxStaticText* txt_Nombre;
		wxTextCtrl* input_Nombre;
		wxStaticText* txt_Stock;
		wxSpinCtrl* input_DNI;
		wxButton* btn_Guardar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseEditCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Editar cliente"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 268,213 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseEditCliente();

};

