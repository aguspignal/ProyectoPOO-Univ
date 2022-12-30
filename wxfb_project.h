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
#include <wx/textctrl.h>
#include <wx/grid.h>
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

		BaseHomepage( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 601,341 ), long style = wxDEFAULT_FRAME_STYLE|wxMAXIMIZE|wxTAB_TRAVERSAL );

		~BaseHomepage();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseProductosFrame
///////////////////////////////////////////////////////////////////////////////
class BaseProductosFrame : public wxFrame
{
	private:

	protected:
		wxTextCtrl* input_BuscarProducto;
		wxButton* btn_BuscarProducto;
		wxGrid* gridProductos;
		wxButton* btn_AddProducto;
		wxButton* btn_DeleteProducto;
		wxButton* btn_BackHome;

		// Virtual event handlers, override them in your derived class
		virtual void DisplayAddProducto( wxCommandEvent& event ) { event.Skip(); }
		virtual void EliminarProducto( wxCommandEvent& event ) { event.Skip(); }
		virtual void BackToHome( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseProductosFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1049,700 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseProductosFrame();

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

		BaseAddProductoFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 235,261 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAddProductoFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseClientesFrame
///////////////////////////////////////////////////////////////////////////////
class BaseClientesFrame : public wxFrame
{
	private:

	protected:
		wxTextCtrl* input_BuscarProducto;
		wxButton* btn_BuscarProducto;
		wxGrid* gridClientes;
		wxButton* btn_AddCliente;
		wxButton* btn_DeleteCliente;
		wxButton* btn_VentasCliente;
		wxButton* btn_BackHome;

		// Virtual event handlers, override them in your derived class
		virtual void BackToHome( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseClientesFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1085,702 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseClientesFrame();

};

