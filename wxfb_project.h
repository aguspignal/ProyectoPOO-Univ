///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
#include <wx/statbox.h>
#include <wx/srchctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class BaseHomepage
///////////////////////////////////////////////////////////////////////////////
class BaseHomepage : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel17;
		wxStaticText* m_staticText34;
		wxPanel* m_panel24;
		wxButton* btn_Productos;
		wxButton* btn_Clientes;
		wxButton* btn_Ventas;
		wxPanel* m_panel18;

		// Virtual event handlers, override them in your derived class
		virtual void DisplayProductsFrmae( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayClientesFrame( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayVentasFrame( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseHomepage( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,500 ), long style = wxDEFAULT_FRAME_STYLE|wxMAXIMIZE|wxTAB_TRAVERSAL );

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
		wxTextCtrl* input_BuscarProducto;
		wxButton* btn_BuscarProducto;
		wxStaticText* txt_Productos;
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

		BaseProductosFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,700 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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
		wxTextCtrl* input_BuscarCliente;
		wxButton* btn_BuscarProducto;
		wxStaticText* txt_Clientes;
		wxGrid* gridClientes;
		wxButton* btn_AddCliente;
		wxButton* btn_DeleteCliente;
		wxButton* btn_EditCliente;
		wxButton* btn_VentasCliente;
		wxPanel* m_panel25;

		// Virtual event handlers, override them in your derived class
		virtual void BackToHome( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayAddCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void EliminarCliente( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayEditarCliente( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseClientesFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1100,750 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseClientesFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseVentasFrame
///////////////////////////////////////////////////////////////////////////////
class BaseVentasFrame : public wxFrame
{
	private:

	protected:
		wxStaticText* txt_Ventas;
		wxGrid* m_grid3;
		wxStaticText* txt_Detalle;
		wxGrid* m_grid4;
		wxButton* btn_AddVenta;
		wxButton* btn_VerDetalle;
		wxButton* btn_DeleteVenta;
		wxPanel* m_panel23;

		// Virtual event handlers, override them in your derived class
		virtual void DisplayAddVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayDetalleVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisplayConfirmation( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseVentasFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 950,550 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseVentasFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseConfirm
///////////////////////////////////////////////////////////////////////////////
class BaseConfirm : public wxDialog
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

		BaseConfirm( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~BaseConfirm();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAddProductoFrame
///////////////////////////////////////////////////////////////////////////////
class BaseAddProductoFrame : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel8;
		wxStaticText* txt_Descripcion;
		wxTextCtrl* input_Descripcion;
		wxStaticText* txt_Precio;
		wxSpinCtrlDouble* input_Precio;
		wxStaticText* txt_Stock;
		wxSpinCtrl* input_Stock;
		wxPanel* m_panel9;
		wxButton* btn_Agregar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseAddProductoFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,300 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAddProductoFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseEditProducto
///////////////////////////////////////////////////////////////////////////////
class BaseEditProducto : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel6;
		wxStaticText* txt_Descripcion;
		wxTextCtrl* input_Descripcion;
		wxStaticText* txt_Precio;
		wxSpinCtrlDouble* input_Precio;
		wxStaticText* txt_Stock;
		wxSpinCtrl* input_Stock;
		wxPanel* m_panel7;
		wxButton* btn_Guardar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseEditProducto( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,300 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseEditProducto();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAddClienteFrame
///////////////////////////////////////////////////////////////////////////////
class BaseAddClienteFrame : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel3;
		wxStaticText* txt_Nombre;
		wxTextCtrl* input_Nombre;
		wxStaticText* txt_DNI;
		wxSpinCtrl* input_DNI;
		wxPanel* m_panel2;
		wxButton* btn_Agregar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseAddClienteFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,250 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAddClienteFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseEditCliente
///////////////////////////////////////////////////////////////////////////////
class BaseEditCliente : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel4;
		wxStaticText* txt_Nombre;
		wxTextCtrl* input_Nombre;
		wxStaticText* txt_DNI;
		wxSpinCtrl* input_DNI;
		wxPanel* m_panel5;
		wxButton* btn_Guardar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseEditCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,250 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseEditCliente();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAddVenta
///////////////////////////////////////////////////////////////////////////////
class BaseAddVenta : public wxDialog
{
	private:

	protected:
		wxSearchCtrl* m_searchCtrl2;
		wxGrid* m_grid5;
		wxStaticText* m_staticText29;
		wxTextCtrl* m_textCtrl10;
		wxStaticText* m_staticText30;
		wxTextCtrl* m_textCtrl11;
		wxStaticText* m_staticText31;
		wxSpinCtrl* m_spinCtrl5;
		wxButton* btn_Agregar;
		wxButton* btn_Confirmar;
		wxButton* btn_Cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void DisplayConfirmar( wxCommandEvent& event ) { event.Skip(); }


	public:

		BaseAddVenta( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 730,500 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAddVenta();

};

