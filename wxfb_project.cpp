///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

BaseHomepage::BaseHomepage( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	this->SetBackgroundColour( wxColour( 191, 232, 193 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Productos = new wxButton( this, wxID_ANY, wxT("Productos"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Productos->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	btn_Productos->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer2->Add( btn_Productos, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Clientes = new wxButton( this, wxID_ANY, wxT("Clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Clientes->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizer2->Add( btn_Clientes, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Ventas = new wxButton( this, wxID_ANY, wxT("Ventas"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Ventas->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizer2->Add( btn_Ventas, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Productos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseHomepage::DisplayProductsFrmae ), NULL, this );
	btn_Clientes->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseHomepage::DisplayClientesFrame ), NULL, this );
	btn_Ventas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseHomepage::DisplayVentasFrame ), NULL, this );
}

BaseHomepage::~BaseHomepage()
{
	// Disconnect Events
	btn_Productos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseHomepage::DisplayProductsFrmae ), NULL, this );
	btn_Clientes->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseHomepage::DisplayClientesFrame ), NULL, this );
	btn_Ventas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseHomepage::DisplayVentasFrame ), NULL, this );

}

BaseProductosFrame::BaseProductosFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	input_BuscarProducto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_BuscarProducto->HasFlag( wxTE_MULTILINE ) )
	{
	input_BuscarProducto->SetMaxLength( 100 );
	}
	#else
	input_BuscarProducto->SetMaxLength( 100 );
	#endif
	bSizer9->Add( input_BuscarProducto, 1, wxALL|wxEXPAND, 5 );

	btn_BuscarProducto = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( btn_BuscarProducto, 0, wxALL, 5 );


	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	gridProductos = new wxGrid( this, wxID_ANY, wxPoint( -1,-1 ), wxDefaultSize, 0 );

	// Grid
	gridProductos->CreateGrid( 0, 4 );
	gridProductos->EnableEditing( true );
	gridProductos->EnableGridLines( true );
	gridProductos->EnableDragGridSize( false );
	gridProductos->SetMargins( 0, 0 );

	// Columns
	gridProductos->SetColSize( 0, 50 );
	gridProductos->SetColSize( 1, 500 );
	gridProductos->SetColSize( 2, 75 );
	gridProductos->SetColSize( 3, 75 );
	gridProductos->EnableDragColMove( false );
	gridProductos->EnableDragColSize( true );
	gridProductos->SetColLabelValue( 0, wxT("ID") );
	gridProductos->SetColLabelValue( 1, wxT("Descripcion") );
	gridProductos->SetColLabelValue( 2, wxT("Precio") );
	gridProductos->SetColLabelValue( 3, wxT("Stock") );
	gridProductos->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	gridProductos->EnableDragRowSize( true );
	gridProductos->SetRowLabelSize( 0 );
	gridProductos->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance
	gridProductos->SetLabelFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	// Cell Defaults
	gridProductos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer7->Add( gridProductos, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	btn_AddProducto = new wxButton( this, wxID_ANY, wxT("Agregar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( btn_AddProducto, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	btn_DeleteProducto = new wxButton( this, wxID_ANY, wxT("Eliminar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( btn_DeleteProducto, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_BackHome = new wxButton( this, wxID_ANY, wxT("Regresar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( btn_BackHome, 0, wxALL|wxEXPAND, 5 );


	bSizer8->Add( bSizer5, 0, wxEXPAND, 5 );


	bSizer4->Add( bSizer8, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_AddProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayAddProducto ), NULL, this );
	btn_DeleteProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::EliminarProducto ), NULL, this );
	btn_BackHome->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::BackToHome ), NULL, this );
}

BaseProductosFrame::~BaseProductosFrame()
{
	// Disconnect Events
	btn_AddProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayAddProducto ), NULL, this );
	btn_DeleteProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::EliminarProducto ), NULL, this );
	btn_BackHome->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::BackToHome ), NULL, this );

}

BaseConfirmEliminar::BaseConfirmEliminar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );

	txt_Confirmar = new wxStaticText( this, wxID_ANY, wxT("Estas seguro?"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Confirmar->Wrap( -1 );
	bSizer22->Add( txt_Confirmar, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	btn_Confirm = new wxButton( this, wxID_ANY, wxT("Si"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( btn_Confirm, 0, wxALL, 5 );

	btn_No = new wxButton( this, wxID_ANY, wxT("No"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( btn_No, 0, wxALL, 5 );


	bSizer22->Add( bSizer23, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	this->SetSizer( bSizer22 );
	this->Layout();
	bSizer22->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	btn_Confirm->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseConfirmEliminar::ClickSI ), NULL, this );
	btn_No->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseConfirmEliminar::ClickNO ), NULL, this );
}

BaseConfirmEliminar::~BaseConfirmEliminar()
{
	// Disconnect Events
	btn_Confirm->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseConfirmEliminar::ClickSI ), NULL, this );
	btn_No->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseConfirmEliminar::ClickNO ), NULL, this );

}

BaseAddProductoFrame::BaseAddProductoFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	txt_AgregarProducto = new wxStaticText( this, wxID_ANY, wxT("Agregar producto"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_AgregarProducto->Wrap( -1 );
	bSizer14->Add( txt_AgregarProducto, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Descripcion = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Descripcion->Wrap( -1 );
	bSizer13->Add( txt_Descripcion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Descripcion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( input_Descripcion, 1, wxALL|wxEXPAND, 5 );


	bSizer14->Add( bSizer13, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );

	txt_Precio = new wxStaticText( this, wxID_ANY, wxT("Precio"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Precio->Wrap( -1 );
	bSizer131->Add( txt_Precio, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Precio = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999999, 1, 0.1 );
	input_Precio->SetDigits( 2 );
	bSizer131->Add( input_Precio, 1, wxALL, 5 );


	bSizer14->Add( bSizer131, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	txt_Stock = new wxStaticText( this, wxID_ANY, wxT("Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Stock->Wrap( -1 );
	bSizer132->Add( txt_Stock, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Stock = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999999, 1 );
	bSizer132->Add( input_Stock, 1, wxALL, 5 );


	bSizer14->Add( bSizer132, 0, wxALL|wxEXPAND, 5 );


	bSizer14->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	btn_Agregar = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Agregar, 0, wxALL, 5 );

	btn_Cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Cancelar, 0, wxALL, 5 );


	bSizer14->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer14->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer14 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Agregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddProductoFrame::ClickAgregar ), NULL, this );
	btn_Cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddProductoFrame::ClickCancelar ), NULL, this );
}

BaseAddProductoFrame::~BaseAddProductoFrame()
{
	// Disconnect Events
	btn_Agregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddProductoFrame::ClickAgregar ), NULL, this );
	btn_Cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddProductoFrame::ClickCancelar ), NULL, this );

}

BaseClientesFrame::BaseClientesFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	input_BuscarProducto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_BuscarProducto->HasFlag( wxTE_MULTILINE ) )
	{
	input_BuscarProducto->SetMaxLength( 100 );
	}
	#else
	input_BuscarProducto->SetMaxLength( 100 );
	#endif
	bSizer9->Add( input_BuscarProducto, 1, wxALL, 5 );

	btn_BuscarProducto = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_BuscarProducto->SetLabelMarkup( wxT("Buscar") );
	bSizer9->Add( btn_BuscarProducto, 0, wxALL, 5 );


	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	gridClientes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	gridClientes->CreateGrid( 0, 6 );
	gridClientes->EnableEditing( true );
	gridClientes->EnableGridLines( true );
	gridClientes->EnableDragGridSize( false );
	gridClientes->SetMargins( 0, 0 );

	// Columns
	gridClientes->SetColSize( 0, 50 );
	gridClientes->SetColSize( 1, 200 );
	gridClientes->SetColSize( 2, 150 );
	gridClientes->SetColSize( 3, 200 );
	gridClientes->SetColSize( 4, 200 );
	gridClientes->SetColSize( 5, 150 );
	gridClientes->EnableDragColMove( false );
	gridClientes->EnableDragColSize( true );
	gridClientes->SetColLabelValue( 0, wxT("ID") );
	gridClientes->SetColLabelValue( 1, wxT("Nombre") );
	gridClientes->SetColLabelValue( 2, wxT("DNI") );
	gridClientes->SetColLabelValue( 3, wxT("Direccion") );
	gridClientes->SetColLabelValue( 4, wxT("Email") );
	gridClientes->SetColLabelValue( 5, wxT("Telefono") );
	gridClientes->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	gridClientes->EnableDragRowSize( true );
	gridClientes->SetRowLabelSize( 0 );
	gridClientes->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	gridClientes->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer7->Add( gridClientes, 1, wxEXPAND, 5 );


	bSizer13->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	btn_AddCliente = new wxButton( this, wxID_ANY, wxT("Agregar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_AddCliente->SetLabelMarkup( wxT("Agregar Cliente") );
	bSizer5->Add( btn_AddCliente, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	btn_DeleteCliente = new wxButton( this, wxID_ANY, wxT("Eliminar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_DeleteCliente->SetLabelMarkup( wxT("Eliminar Cliente") );
	bSizer5->Add( btn_DeleteCliente, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	btn_VentasCliente = new wxButton( this, wxID_ANY, wxT("Ver ventas"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_VentasCliente->SetLabelMarkup( wxT("Ver ventas") );
	bSizer5->Add( btn_VentasCliente, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_BackHome = new wxButton( this, wxID_ANY, wxT("Regresar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_BackHome->SetLabelMarkup( wxT("Regresar") );
	bSizer5->Add( btn_BackHome, 0, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer5, 0, wxEXPAND, 5 );


	bSizer4->Add( bSizer13, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_BackHome->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::BackToHome ), NULL, this );
}

BaseClientesFrame::~BaseClientesFrame()
{
	// Disconnect Events
	btn_BackHome->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::BackToHome ), NULL, this );

}
