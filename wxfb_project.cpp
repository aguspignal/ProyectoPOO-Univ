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
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_panel17 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel17, 1, wxEXPAND | wxALL, 5 );

	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("Bienvenido!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	m_staticText34->SetFont( wxFont( 20, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("BankGothic Md BT") ) );

	bSizer2->Add( m_staticText34, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_panel24 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel24, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );


	bSizer57->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Productos = new wxButton( this, wxID_ANY, wxT("Productos"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Productos->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	btn_Productos->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer57->Add( btn_Productos, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	btn_Clientes = new wxButton( this, wxID_ANY, wxT("Clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Clientes->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizer57->Add( btn_Clientes, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	btn_Ventas = new wxButton( this, wxID_ANY, wxT("Ventas"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Ventas->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizer57->Add( btn_Ventas, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer57->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer57, 0, wxEXPAND, 5 );

	m_panel18 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel18, 1, wxEXPAND | wxALL, 5 );


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
	this->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );

	input_BuscarProducto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_BuscarProducto->HasFlag( wxTE_MULTILINE ) )
	{
	input_BuscarProducto->SetMaxLength( 198 );
	}
	#else
	input_BuscarProducto->SetMaxLength( 198 );
	#endif
	bSizer50->Add( input_BuscarProducto, 1, wxALL, 5 );

	btn_Buscar = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Buscar->SetLabelMarkup( wxT("Buscar") );
	bSizer50->Add( btn_Buscar, 0, wxALL, 5 );

	btn_Actualizar = new wxButton( this, wxID_ANY, wxT("Actualizar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Actualizar->SetLabelMarkup( wxT("Actualizar") );
	bSizer50->Add( btn_Actualizar, 0, wxALL, 5 );


	bSizer8->Add( bSizer50, 0, wxEXPAND, 5 );

	txt_Productos = new wxStaticText( this, wxID_ANY, wxT("Productos"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Productos->Wrap( -1 );
	txt_Productos->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("BankGothic Md BT") ) );

	bSizer8->Add( txt_Productos, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

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
	bSizer8->Add( gridProductos, 5, wxALL|wxEXPAND, 5 );


	bSizer4->Add( bSizer8, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_AddProducto = new wxButton( this, wxID_ANY, wxT("Agregar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_AddProducto->SetLabelMarkup( wxT("Agregar Producto") );
	bSizer5->Add( btn_AddProducto, 0, wxALL|wxEXPAND, 5 );

	btn_DeleteProducto = new wxButton( this, wxID_ANY, wxT("Eliminar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_DeleteProducto->SetLabelMarkup( wxT("Eliminar Producto") );
	bSizer5->Add( btn_DeleteProducto, 0, wxALL|wxEXPAND, 5 );

	btn_EditProducto = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_EditProducto->SetLabelMarkup( wxT("Editar") );
	bSizer5->Add( btn_EditProducto, 0, wxALL|wxEXPAND, 5 );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer4->Add( bSizer5, 0, wxALL|wxEXPAND, 5 );

	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer4->Add( m_panel3, 0, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Buscar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::BuscarProducto ), NULL, this );
	btn_Actualizar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::ActualizarGrid ), NULL, this );
	gridProductos->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseProductosFrame::OrdenarGrid ), NULL, this );
	btn_AddProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayAddProducto ), NULL, this );
	btn_DeleteProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::EliminarProducto ), NULL, this );
	btn_EditProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayEditarProducto ), NULL, this );
}

BaseProductosFrame::~BaseProductosFrame()
{
	// Disconnect Events
	btn_Buscar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::BuscarProducto ), NULL, this );
	btn_Actualizar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::ActualizarGrid ), NULL, this );
	gridProductos->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseProductosFrame::OrdenarGrid ), NULL, this );
	btn_AddProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayAddProducto ), NULL, this );
	btn_DeleteProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::EliminarProducto ), NULL, this );
	btn_EditProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayEditarProducto ), NULL, this );

}

BaseClientesFrame::BaseClientesFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	input_BuscarCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_BuscarCliente->HasFlag( wxTE_MULTILINE ) )
	{
	input_BuscarCliente->SetMaxLength( 98 );
	}
	#else
	input_BuscarCliente->SetMaxLength( 98 );
	#endif
	bSizer9->Add( input_BuscarCliente, 1, wxALL, 5 );

	btn_Buscar = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_Buscar->SetLabelMarkup( wxT("Buscar") );
	bSizer9->Add( btn_Buscar, 0, wxALL, 5 );

	btn_BackHome = new wxButton( this, wxID_ANY, wxT("Actualizar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_BackHome->SetLabelMarkup( wxT("Actualizar") );
	bSizer9->Add( btn_BackHome, 0, wxALL|wxEXPAND, 5 );


	bSizer7->Add( bSizer9, 0, wxEXPAND, 5 );

	txt_Clientes = new wxStaticText( this, wxID_ANY, wxT("Clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Clientes->Wrap( -1 );
	txt_Clientes->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("BankGothic Md BT") ) );

	bSizer7->Add( txt_Clientes, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	gridClientes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	gridClientes->CreateGrid( 0, 6 );
	gridClientes->EnableEditing( true );
	gridClientes->EnableGridLines( true );
	gridClientes->EnableDragGridSize( false );
	gridClientes->SetMargins( 0, 0 );

	// Columns
	gridClientes->SetColSize( 0, 50 );
	gridClientes->SetColSize( 1, 225 );
	gridClientes->SetColSize( 2, 150 );
	gridClientes->SetColSize( 3, 225 );
	gridClientes->SetColSize( 4, 225 );
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
	gridClientes->SetRowLabelSize( 1 );
	gridClientes->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	gridClientes->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer7->Add( gridClientes, 1, wxALL|wxEXPAND, 5 );


	bSizer4->Add( bSizer7, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_AddCliente = new wxButton( this, wxID_ANY, wxT("Agregar cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_AddCliente->SetLabelMarkup( wxT("Agregar cliente") );
	bSizer5->Add( btn_AddCliente, 0, wxALL|wxEXPAND, 5 );

	btn_DeleteCliente = new wxButton( this, wxID_ANY, wxT("Eliminar cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_DeleteCliente->SetLabelMarkup( wxT("Eliminar cliente") );
	bSizer5->Add( btn_DeleteCliente, 0, wxALL|wxEXPAND, 5 );

	btn_EditCliente = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_EditCliente->SetLabelMarkup( wxT("Editar") );
	bSizer5->Add( btn_EditCliente, 0, wxALL|wxEXPAND, 5 );

	btn_VentasCliente = new wxButton( this, wxID_ANY, wxT("Ver ventas del cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_VentasCliente->SetLabelMarkup( wxT("Ver ventas del cliente") );
	bSizer5->Add( btn_VentasCliente, 0, wxALL|wxEXPAND, 5 );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer4->Add( bSizer5, 0, wxALL|wxEXPAND, 5 );

	m_panel25 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer4->Add( m_panel25, 0, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Buscar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::BuscarCliente ), NULL, this );
	btn_BackHome->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::ActualizarGrid ), NULL, this );
	gridClientes->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseClientesFrame::OrdenarGrid ), NULL, this );
	btn_AddCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::DisplayAddCliente ), NULL, this );
	btn_DeleteCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::EliminarCliente ), NULL, this );
	btn_EditCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::DisplayEditarCliente ), NULL, this );
}

BaseClientesFrame::~BaseClientesFrame()
{
	// Disconnect Events
	btn_Buscar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::BuscarCliente ), NULL, this );
	btn_BackHome->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::ActualizarGrid ), NULL, this );
	gridClientes->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseClientesFrame::OrdenarGrid ), NULL, this );
	btn_AddCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::DisplayAddCliente ), NULL, this );
	btn_DeleteCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::EliminarCliente ), NULL, this );
	btn_EditCliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::DisplayEditarCliente ), NULL, this );

}

BaseVentasFrame::BaseVentasFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );

	txt_Ventas = new wxStaticText( this, wxID_ANY, wxT("Ventas"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Ventas->Wrap( -1 );
	txt_Ventas->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("BankGothic Md BT") ) );

	bSizer33->Add( txt_Ventas, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	gridVentas = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	gridVentas->CreateGrid( 0, 3 );
	gridVentas->EnableEditing( true );
	gridVentas->EnableGridLines( true );
	gridVentas->EnableDragGridSize( false );
	gridVentas->SetMargins( 0, 0 );

	// Columns
	gridVentas->SetColSize( 0, 50 );
	gridVentas->SetColSize( 1, 75 );
	gridVentas->SetColSize( 2, 150 );
	gridVentas->EnableDragColMove( false );
	gridVentas->EnableDragColSize( true );
	gridVentas->SetColLabelValue( 0, wxT("ID") );
	gridVentas->SetColLabelValue( 1, wxT("ID Cliente") );
	gridVentas->SetColLabelValue( 2, wxT("Total") );
	gridVentas->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	gridVentas->EnableDragRowSize( true );
	gridVentas->SetRowLabelSize( 0 );
	gridVentas->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	gridVentas->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer33->Add( gridVentas, 1, wxALL|wxEXPAND, 5 );


	bSizer59->Add( bSizer33, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	txt_Detalle = new wxStaticText( this, wxID_ANY, wxT("Detalle de venta"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Detalle->Wrap( -1 );
	txt_Detalle->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("BankGothic Md BT") ) );

	bSizer34->Add( txt_Detalle, 0, wxALL, 5 );

	gridDetalles = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	gridDetalles->CreateGrid( 0, 5 );
	gridDetalles->EnableEditing( true );
	gridDetalles->EnableGridLines( true );
	gridDetalles->EnableDragGridSize( false );
	gridDetalles->SetMargins( 0, 0 );

	// Columns
	gridDetalles->SetColSize( 0, 100 );
	gridDetalles->SetColSize( 1, 400 );
	gridDetalles->SetColSize( 2, 75 );
	gridDetalles->SetColSize( 3, 75 );
	gridDetalles->SetColSize( 4, 100 );
	gridDetalles->EnableDragColMove( false );
	gridDetalles->EnableDragColSize( true );
	gridDetalles->SetColLabelValue( 0, wxT("ID Producto") );
	gridDetalles->SetColLabelValue( 1, wxT("Descripcion") );
	gridDetalles->SetColLabelValue( 2, wxT("Precio") );
	gridDetalles->SetColLabelValue( 3, wxT("Cantidad") );
	gridDetalles->SetColLabelValue( 4, wxT("Subtotal") );
	gridDetalles->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	gridDetalles->EnableDragRowSize( true );
	gridDetalles->SetRowLabelSize( 0 );
	gridDetalles->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	gridDetalles->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer34->Add( gridDetalles, 1, wxALL|wxEXPAND, 5 );


	bSizer59->Add( bSizer34, 1, wxALL|wxEXPAND, 5 );


	bSizer32->Add( bSizer59, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );


	bSizer35->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_AddVenta = new wxButton( this, wxID_ANY, wxT("Nueva Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_AddVenta->SetLabelMarkup( wxT("Nueva Venta") );
	bSizer35->Add( btn_AddVenta, 0, wxALL, 5 );

	btn_VerDetalle = new wxButton( this, wxID_ANY, wxT("Ver Detalle"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_VerDetalle->SetLabelMarkup( wxT("Ver Detalle") );
	bSizer35->Add( btn_VerDetalle, 0, wxALL, 5 );

	btn_EditarVenta = new wxButton( this, wxID_ANY, wxT("Editar Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_EditarVenta->SetLabelMarkup( wxT("Editar Venta") );
	bSizer35->Add( btn_EditarVenta, 0, wxALL, 5 );

	btn_DeleteVenta = new wxButton( this, wxID_ANY, wxT("Eliminar Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_DeleteVenta->SetLabelMarkup( wxT("Eliminar Venta") );
	bSizer35->Add( btn_DeleteVenta, 0, wxALL, 5 );


	bSizer35->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer32->Add( bSizer35, 0, wxALL|wxEXPAND, 5 );

	m_panel23 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer32->Add( m_panel23, 0, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer32 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	gridVentas->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseVentasFrame::OrdenarGrid ), NULL, this );
	btn_AddVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayAddVenta ), NULL, this );
	btn_VerDetalle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayDetalleVenta ), NULL, this );
	btn_EditarVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayEditarVenta ), NULL, this );
	btn_DeleteVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::EliminarVenta ), NULL, this );
}

BaseVentasFrame::~BaseVentasFrame()
{
	// Disconnect Events
	gridVentas->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( BaseVentasFrame::OrdenarGrid ), NULL, this );
	btn_AddVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayAddVenta ), NULL, this );
	btn_VerDetalle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayDetalleVenta ), NULL, this );
	btn_EditarVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayEditarVenta ), NULL, this );
	btn_DeleteVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::EliminarVenta ), NULL, this );

}

BaseAddProductoFrame::BaseAddProductoFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Ingrese los datos") ), wxVERTICAL );

	m_panel17 = new wxPanel( sbSizer4->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer4->Add( m_panel17, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Descripcion = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Descripcion->Wrap( -1 );
	bSizer13->Add( txt_Descripcion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Descripcion = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Descripcion->HasFlag( wxTE_MULTILINE ) )
	{
	input_Descripcion->SetMaxLength( 198 );
	}
	#else
	input_Descripcion->SetMaxLength( 198 );
	#endif
	bSizer13->Add( input_Descripcion, 1, wxALL|wxEXPAND, 5 );


	sbSizer4->Add( bSizer13, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );

	txt_Precio = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("    Precio"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Precio->Wrap( -1 );
	bSizer131->Add( txt_Precio, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Precio = new wxSpinCtrlDouble( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999999, 1, 0.1 );
	input_Precio->SetDigits( 2 );
	bSizer131->Add( input_Precio, 1, wxALL, 5 );


	sbSizer4->Add( bSizer131, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	txt_Stock = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("    Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Stock->Wrap( -1 );
	bSizer132->Add( txt_Stock, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Stock = new wxSpinCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999999, 1 );
	bSizer132->Add( input_Stock, 1, wxALL, 5 );


	sbSizer4->Add( bSizer132, 0, wxALL|wxEXPAND, 5 );

	m_panel9 = new wxPanel( sbSizer4->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer4->Add( m_panel9, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Agregar = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Agregar, 0, wxALL, 5 );

	btn_Cancelar = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Cancelar, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );


	sbSizer4->Add( bSizer21, 0, wxALL|wxEXPAND, 5 );


	bSizer14->Add( sbSizer4, 1, wxALL|wxEXPAND, 5 );


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

BaseEditProducto::BaseEditProducto( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Ingrese los datos") ), wxVERTICAL );

	m_panel16 = new wxPanel( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer5->Add( m_panel16, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Descripcion = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Descripcion->Wrap( -1 );
	bSizer13->Add( txt_Descripcion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Descripcion = new wxTextCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Descripcion->HasFlag( wxTE_MULTILINE ) )
	{
	input_Descripcion->SetMaxLength( 198 );
	}
	#else
	input_Descripcion->SetMaxLength( 198 );
	#endif
	bSizer13->Add( input_Descripcion, 1, wxALL|wxEXPAND, 5 );


	sbSizer5->Add( bSizer13, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );

	txt_Precio = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("    Precio"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Precio->Wrap( -1 );
	bSizer131->Add( txt_Precio, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Precio = new wxSpinCtrlDouble( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999999, 1, 0.1 );
	input_Precio->SetDigits( 2 );
	bSizer131->Add( input_Precio, 1, wxALL, 5 );


	sbSizer5->Add( bSizer131, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	txt_Stock = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("     Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Stock->Wrap( -1 );
	bSizer132->Add( txt_Stock, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Stock = new wxSpinCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999999, 1 );
	bSizer132->Add( input_Stock, 1, wxALL, 5 );


	sbSizer5->Add( bSizer132, 0, wxALL|wxEXPAND, 5 );

	m_panel7 = new wxPanel( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer5->Add( m_panel7, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Guardar = new wxButton( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Guardar cambios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Guardar, 0, wxALL, 5 );

	btn_Cancelar = new wxButton( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Cancelar, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );


	sbSizer5->Add( bSizer21, 0, wxALL|wxEXPAND, 5 );


	bSizer14->Add( sbSizer5, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer14 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditProducto::ClickGuardar ), NULL, this );
	btn_Cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditProducto::ClickCancelar ), NULL, this );
}

BaseEditProducto::~BaseEditProducto()
{
	// Disconnect Events
	btn_Guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditProducto::ClickGuardar ), NULL, this );
	btn_Cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditProducto::ClickCancelar ), NULL, this );

}

BaseAddClienteFrame::BaseAddClienteFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Ingrese los datos") ), wxVERTICAL );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Nombre = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("  Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Nombre->Wrap( -1 );
	bSizer13->Add( txt_Nombre, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Nombre = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Nombre->HasFlag( wxTE_MULTILINE ) )
	{
	input_Nombre->SetMaxLength( 98 );
	}
	#else
	input_Nombre->SetMaxLength( 98 );
	#endif
	bSizer13->Add( input_Nombre, 1, wxALL|wxEXPAND, 5 );


	sbSizer2->Add( bSizer13, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	txt_DNI = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("          DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_DNI->Wrap( -1 );
	bSizer132->Add( txt_DNI, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_DNI = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_DNI->HasFlag( wxTE_MULTILINE ) )
	{
	input_DNI->SetMaxLength( 10 );
	}
	#else
	input_DNI->SetMaxLength( 10 );
	#endif
	bSizer132->Add( input_DNI, 1, wxALL|wxEXPAND, 5 );


	sbSizer2->Add( bSizer132, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer1321;
	bSizer1321 = new wxBoxSizer( wxHORIZONTAL );

	txt_Direccion = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Direccion"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Direccion->Wrap( -1 );
	bSizer1321->Add( txt_Direccion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Direccion = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Direccion->HasFlag( wxTE_MULTILINE ) )
	{
	input_Direccion->SetMaxLength( 99 );
	}
	#else
	input_Direccion->SetMaxLength( 99 );
	#endif
	bSizer1321->Add( input_Direccion, 1, wxALL, 5 );


	sbSizer2->Add( bSizer1321, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer1322;
	bSizer1322 = new wxBoxSizer( wxHORIZONTAL );

	txt_Email = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("       Email"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Email->Wrap( -1 );
	bSizer1322->Add( txt_Email, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Email = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Email->HasFlag( wxTE_MULTILINE ) )
	{
	input_Email->SetMaxLength( 99 );
	}
	#else
	input_Email->SetMaxLength( 99 );
	#endif
	bSizer1322->Add( input_Email, 1, wxALL, 5 );


	sbSizer2->Add( bSizer1322, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer1323;
	bSizer1323 = new wxBoxSizer( wxHORIZONTAL );

	txt_Telefono = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT(" Telefono"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Telefono->Wrap( -1 );
	bSizer1323->Add( txt_Telefono, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Telefono = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Telefono->HasFlag( wxTE_MULTILINE ) )
	{
	input_Telefono->SetMaxLength( 10 );
	}
	#else
	input_Telefono->SetMaxLength( 10 );
	#endif
	bSizer1323->Add( input_Telefono, 1, wxALL, 5 );


	sbSizer2->Add( bSizer1323, 1, wxALL|wxEXPAND, 5 );

	m_panel2 = new wxPanel( sbSizer2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer2->Add( m_panel2, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Agregar = new wxButton( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Agregar, 0, wxALL, 5 );

	btn_Cancelar = new wxButton( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Cancelar, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );


	sbSizer2->Add( bSizer21, 0, wxALL|wxEXPAND, 5 );


	bSizer14->Add( sbSizer2, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer14 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Agregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddClienteFrame::ClickAgregar ), NULL, this );
	btn_Cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddClienteFrame::ClickCancelar ), NULL, this );
}

BaseAddClienteFrame::~BaseAddClienteFrame()
{
	// Disconnect Events
	btn_Agregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddClienteFrame::ClickAgregar ), NULL, this );
	btn_Cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddClienteFrame::ClickCancelar ), NULL, this );

}

BaseEditCliente::BaseEditCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Ingrese los datos") ), wxVERTICAL );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Nombre = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("  Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Nombre->Wrap( -1 );
	bSizer13->Add( txt_Nombre, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Nombre = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Nombre->HasFlag( wxTE_MULTILINE ) )
	{
	input_Nombre->SetMaxLength( 98 );
	}
	#else
	input_Nombre->SetMaxLength( 98 );
	#endif
	bSizer13->Add( input_Nombre, 1, wxALL|wxEXPAND, 5 );


	sbSizer3->Add( bSizer13, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	txt_DNI = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("          DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_DNI->Wrap( -1 );
	bSizer132->Add( txt_DNI, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_DNI = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_DNI->HasFlag( wxTE_MULTILINE ) )
	{
	input_DNI->SetMaxLength( 10 );
	}
	#else
	input_DNI->SetMaxLength( 10 );
	#endif
	bSizer132->Add( input_DNI, 1, wxALL, 5 );


	sbSizer3->Add( bSizer132, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer1321;
	bSizer1321 = new wxBoxSizer( wxHORIZONTAL );

	txt_Direccion = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Direccion"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Direccion->Wrap( -1 );
	bSizer1321->Add( txt_Direccion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Direccion = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Direccion->HasFlag( wxTE_MULTILINE ) )
	{
	input_Direccion->SetMaxLength( 99 );
	}
	#else
	input_Direccion->SetMaxLength( 99 );
	#endif
	bSizer1321->Add( input_Direccion, 1, wxALL, 5 );


	sbSizer3->Add( bSizer1321, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer1322;
	bSizer1322 = new wxBoxSizer( wxHORIZONTAL );

	txt_Email = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("       Email"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Email->Wrap( -1 );
	bSizer1322->Add( txt_Email, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Email = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Email->HasFlag( wxTE_MULTILINE ) )
	{
	input_Email->SetMaxLength( 99 );
	}
	#else
	input_Email->SetMaxLength( 99 );
	#endif
	bSizer1322->Add( input_Email, 1, wxALL, 5 );


	sbSizer3->Add( bSizer1322, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer1323;
	bSizer1323 = new wxBoxSizer( wxHORIZONTAL );

	txt_Telefono = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT(" Telefono"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Telefono->Wrap( -1 );
	bSizer1323->Add( txt_Telefono, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Telefono = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Telefono->HasFlag( wxTE_MULTILINE ) )
	{
	input_Telefono->SetMaxLength( 14 );
	}
	#else
	input_Telefono->SetMaxLength( 14 );
	#endif
	bSizer1323->Add( input_Telefono, 1, wxALL, 5 );


	sbSizer3->Add( bSizer1323, 1, wxALL|wxEXPAND, 5 );

	m_panel15 = new wxPanel( sbSizer3->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer3->Add( m_panel15, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Guardar = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Guardar cambios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Guardar, 0, wxALL, 5 );

	btn_Cancelar = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( btn_Cancelar, 0, wxALL, 5 );


	bSizer21->Add( 0, 0, 1, wxEXPAND, 5 );


	sbSizer3->Add( bSizer21, 0, wxALL|wxEXPAND, 5 );


	bSizer14->Add( sbSizer3, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer14 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditCliente::ClickGuardar ), NULL, this );
	btn_Cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditCliente::ClickCancelar ), NULL, this );
}

BaseEditCliente::~BaseEditCliente()
{
	// Disconnect Events
	btn_Guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditCliente::ClickGuardar ), NULL, this );
	btn_Cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseEditCliente::ClickCancelar ), NULL, this );

}

BaseAddVenta::BaseAddVenta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Agregar venta nueva") ), wxVERTICAL );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer421;
	bSizer421 = new wxBoxSizer( wxHORIZONTAL );

	txt_IDCliente = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("ID Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_IDCliente->Wrap( -1 );
	txt_IDCliente->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer421->Add( txt_IDCliente, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_IDCliente = new wxTextCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer421->Add( input_IDCliente, 1, wxALL, 5 );

	btn_Cliente = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer421->Add( btn_Cliente, 0, wxALL, 5 );


	bSizer421->Add( 0, 0, 1, 0, 5 );


	bSizer421->Add( 0, 0, 1, wxEXPAND, 5 );

	txt_DatosCliente = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Nombre y DNI del Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_DatosCliente->Wrap( -1 );
	bSizer421->Add( txt_DatosCliente, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer42->Add( bSizer421, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	txt_IDProducto = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT(" ID Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_IDProducto->Wrap( -1 );
	txt_IDProducto->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer48->Add( txt_IDProducto, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_IDProducto = new wxTextCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( input_IDProducto, 1, wxALL, 5 );


	bSizer43->Add( bSizer48, 1, 0, 5 );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );

	txt_Cantidad = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Cantidad"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Cantidad->Wrap( -1 );
	txt_Cantidad->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer49->Add( txt_Cantidad, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Cantidad = new wxSpinCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999999, 1 );
	bSizer49->Add( input_Cantidad, 1, wxALL, 5 );


	bSizer43->Add( bSizer49, 1, 0, 5 );


	bSizer43->Add( 0, 0, 1, wxEXPAND, 5 );

	btn_Agregar = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Agregar producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( btn_Agregar, 0, wxALL, 5 );

	btn_EliminarProducto = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Eliminar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( btn_EliminarProducto, 0, wxALL, 5 );


	bSizer42->Add( bSizer43, 0, wxEXPAND, 5 );


	sbSizer6->Add( bSizer42, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	txt_Productos = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Productos añadidos"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Productos->Wrap( -1 );
	txt_Productos->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer41->Add( txt_Productos, 0, wxALL, 5 );

	gridDetalles = new wxGrid( sbSizer6->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	gridDetalles->CreateGrid( 0, 5 );
	gridDetalles->EnableEditing( true );
	gridDetalles->EnableGridLines( true );
	gridDetalles->EnableDragGridSize( false );
	gridDetalles->SetMargins( 0, 0 );

	// Columns
	gridDetalles->SetColSize( 0, 90 );
	gridDetalles->SetColSize( 1, 350 );
	gridDetalles->SetColSize( 2, 80 );
	gridDetalles->SetColSize( 3, 80 );
	gridDetalles->SetColSize( 4, 80 );
	gridDetalles->EnableDragColMove( false );
	gridDetalles->EnableDragColSize( true );
	gridDetalles->SetColLabelValue( 0, wxT("ID Producto") );
	gridDetalles->SetColLabelValue( 1, wxT("Descripcion") );
	gridDetalles->SetColLabelValue( 2, wxT("Precio") );
	gridDetalles->SetColLabelValue( 3, wxT("Cantidad") );
	gridDetalles->SetColLabelValue( 4, wxT("Subtotal") );
	gridDetalles->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	gridDetalles->EnableDragRowSize( true );
	gridDetalles->SetRowLabelSize( 1 );
	gridDetalles->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	gridDetalles->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer41->Add( gridDetalles, 1, wxALL|wxEXPAND, 5 );


	sbSizer6->Add( bSizer41, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );

	txt_Total = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Total:"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Total->Wrap( -1 );
	txt_Total->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer44->Add( txt_Total, 0, wxALL|wxALIGN_BOTTOM, 5 );

	txt_Monto = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("$0"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Monto->Wrap( -1 );
	txt_Monto->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer44->Add( txt_Monto, 0, wxALL, 5 );


	sbSizer6->Add( bSizer44, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );

	btn_Confirmar = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Confirmar venta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( btn_Confirmar, 0, wxALL, 5 );

	btn_Cancelar = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( btn_Cancelar, 0, wxALL, 5 );


	sbSizer6->Add( bSizer51, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer36->Add( sbSizer6, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer36 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Cliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::AgregarCliente ), NULL, this );
	btn_Agregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::AgregarProducto ), NULL, this );
	btn_EliminarProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::EliminarProducto ), NULL, this );
	btn_Confirmar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::ConfirmarVenta ), NULL, this );
	btn_Cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::CancelarVenta ), NULL, this );
}

BaseAddVenta::~BaseAddVenta()
{
	// Disconnect Events
	btn_Cliente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::AgregarCliente ), NULL, this );
	btn_Agregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::AgregarProducto ), NULL, this );
	btn_EliminarProducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::EliminarProducto ), NULL, this );
	btn_Confirmar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::ConfirmarVenta ), NULL, this );
	btn_Cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::CancelarVenta ), NULL, this );

}
