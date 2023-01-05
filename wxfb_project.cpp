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

	btn_BackHome = new wxButton( this, wxID_ANY, wxT("Regresar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_BackHome->SetLabelMarkup( wxT("Regresar") );
	bSizer50->Add( btn_BackHome, 0, wxALL, 5 );

	input_BuscarProducto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer50->Add( input_BuscarProducto, 1, wxALL, 5 );

	btn_BuscarProducto = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_BuscarProducto->SetLabelMarkup( wxT("Buscar") );
	bSizer50->Add( btn_BuscarProducto, 0, wxALL, 5 );


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
	btn_BackHome->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::BackToHome ), NULL, this );
	btn_AddProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayAddProducto ), NULL, this );
	btn_DeleteProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::EliminarProducto ), NULL, this );
	btn_EditProducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::DisplayEditarProducto ), NULL, this );
}

BaseProductosFrame::~BaseProductosFrame()
{
	// Disconnect Events
	btn_BackHome->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseProductosFrame::BackToHome ), NULL, this );
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

	btn_BackHome = new wxButton( this, wxID_ANY, wxT("Regresar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_BackHome->SetLabelMarkup( wxT("Regresar") );
	bSizer9->Add( btn_BackHome, 0, wxALL|wxEXPAND, 5 );

	input_BuscarCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_BuscarCliente->HasFlag( wxTE_MULTILINE ) )
	{
	input_BuscarCliente->SetMaxLength( 100 );
	}
	#else
	input_BuscarCliente->SetMaxLength( 100 );
	#endif
	bSizer9->Add( input_BuscarCliente, 1, wxALL, 5 );

	btn_BuscarProducto = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	btn_BuscarProducto->SetLabelMarkup( wxT("Buscar") );
	bSizer9->Add( btn_BuscarProducto, 0, wxALL, 5 );


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
	btn_BackHome->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::BackToHome ), NULL, this );
	btn_AddCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::DisplayAddCliente ), NULL, this );
	btn_DeleteCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::EliminarCliente ), NULL, this );
	btn_EditCliente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::DisplayEditarCliente ), NULL, this );
}

BaseClientesFrame::~BaseClientesFrame()
{
	// Disconnect Events
	btn_BackHome->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseClientesFrame::BackToHome ), NULL, this );
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

	m_grid3 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid3->CreateGrid( 0, 3 );
	m_grid3->EnableEditing( true );
	m_grid3->EnableGridLines( true );
	m_grid3->EnableDragGridSize( false );
	m_grid3->SetMargins( 0, 0 );

	// Columns
	m_grid3->SetColSize( 0, 100 );
	m_grid3->SetColSize( 1, 100 );
	m_grid3->SetColSize( 2, 100 );
	m_grid3->EnableDragColMove( false );
	m_grid3->EnableDragColSize( true );
	m_grid3->SetColLabelValue( 0, wxT("ID") );
	m_grid3->SetColLabelValue( 1, wxT("ID Cliente") );
	m_grid3->SetColLabelValue( 2, wxT("Total") );
	m_grid3->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid3->EnableDragRowSize( true );
	m_grid3->SetRowLabelSize( 0 );
	m_grid3->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid3->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer33->Add( m_grid3, 1, wxALL|wxEXPAND, 5 );


	bSizer59->Add( bSizer33, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	txt_Detalle = new wxStaticText( this, wxID_ANY, wxT("Detalle de venta"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Detalle->Wrap( -1 );
	txt_Detalle->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("BankGothic Md BT") ) );

	bSizer34->Add( txt_Detalle, 0, wxALL, 5 );

	m_grid4 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid4->CreateGrid( 0, 5 );
	m_grid4->EnableEditing( true );
	m_grid4->EnableGridLines( true );
	m_grid4->EnableDragGridSize( false );
	m_grid4->SetMargins( 0, 0 );

	// Columns
	m_grid4->SetColSize( 0, 100 );
	m_grid4->SetColSize( 1, 400 );
	m_grid4->SetColSize( 2, 75 );
	m_grid4->SetColSize( 3, 75 );
	m_grid4->SetColSize( 4, 100 );
	m_grid4->EnableDragColMove( false );
	m_grid4->EnableDragColSize( true );
	m_grid4->SetColLabelValue( 0, wxT("ID Producto") );
	m_grid4->SetColLabelValue( 1, wxT("Descripcion") );
	m_grid4->SetColLabelValue( 2, wxT("Precio") );
	m_grid4->SetColLabelValue( 3, wxT("Cantidad") );
	m_grid4->SetColLabelValue( 4, wxT("Subtotal") );
	m_grid4->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid4->EnableDragRowSize( true );
	m_grid4->SetRowLabelSize( 0 );
	m_grid4->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid4->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer34->Add( m_grid4, 1, wxALL|wxEXPAND, 5 );


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
	btn_AddVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayAddVenta ), NULL, this );
	btn_VerDetalle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayDetalleVenta ), NULL, this );
	btn_DeleteVenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayConfirmation ), NULL, this );
}

BaseVentasFrame::~BaseVentasFrame()
{
	// Disconnect Events
	btn_AddVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayAddVenta ), NULL, this );
	btn_VerDetalle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayDetalleVenta ), NULL, this );
	btn_DeleteVenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseVentasFrame::DisplayConfirmation ), NULL, this );

}

BaseAddProductoFrame::BaseAddProductoFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Agregar producto nuevo") ), wxVERTICAL );

	m_panel8 = new wxPanel( sbSizer4->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer4->Add( m_panel8, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Descripcion = new wxStaticText( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Descripcion->Wrap( -1 );
	bSizer13->Add( txt_Descripcion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Descripcion = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Descripcion->HasFlag( wxTE_MULTILINE ) )
	{
	input_Descripcion->SetMaxLength( 200 );
	}
	#else
	input_Descripcion->SetMaxLength( 200 );
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


	bSizer14->Add( sbSizer4, 1, wxEXPAND, 5 );


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
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Editar Producto") ), wxVERTICAL );

	m_panel6 = new wxPanel( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer5->Add( m_panel6, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Descripcion = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Descripcion->Wrap( -1 );
	bSizer13->Add( txt_Descripcion, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Descripcion = new wxTextCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
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


	bSizer14->Add( sbSizer5, 1, wxEXPAND, 5 );


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
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Agregar cliente nuevo") ), wxVERTICAL );

	m_panel3 = new wxPanel( sbSizer2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer2->Add( m_panel3, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Nombre = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Nombre->Wrap( -1 );
	bSizer13->Add( txt_Nombre, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Nombre = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Nombre->HasFlag( wxTE_MULTILINE ) )
	{
	input_Nombre->SetMaxLength( 100 );
	}
	#else
	input_Nombre->SetMaxLength( 100 );
	#endif
	bSizer13->Add( input_Nombre, 1, wxALL|wxEXPAND, 5 );


	sbSizer2->Add( bSizer13, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	txt_DNI = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("        DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_DNI->Wrap( -1 );
	bSizer132->Add( txt_DNI, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_DNI = new wxSpinCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 10000000, 99999999, 1 );
	bSizer132->Add( input_DNI, 1, wxALL, 5 );


	sbSizer2->Add( bSizer132, 0, wxALL|wxEXPAND, 5 );

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
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Editar Cliente") ), wxVERTICAL );

	m_panel4 = new wxPanel( sbSizer3->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer3->Add( m_panel4, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	txt_Nombre = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_Nombre->Wrap( -1 );
	bSizer13->Add( txt_Nombre, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_Nombre = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !input_Nombre->HasFlag( wxTE_MULTILINE ) )
	{
	input_Nombre->SetMaxLength( 200 );
	}
	#else
	input_Nombre->SetMaxLength( 200 );
	#endif
	bSizer13->Add( input_Nombre, 1, wxALL|wxEXPAND, 5 );


	sbSizer3->Add( bSizer13, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	txt_DNI = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("        DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	txt_DNI->Wrap( -1 );
	bSizer132->Add( txt_DNI, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	input_DNI = new wxSpinCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10000000, 99999999, 1 );
	bSizer132->Add( input_DNI, 1, wxALL, 5 );


	sbSizer3->Add( bSizer132, 0, wxALL|wxEXPAND, 5 );

	m_panel5 = new wxPanel( sbSizer3->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer3->Add( m_panel5, 1, wxEXPAND | wxALL, 5 );

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

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	m_searchCtrl2 = new wxSearchCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifndef __WXMAC__
	m_searchCtrl2->ShowSearchButton( true );
	#endif
	m_searchCtrl2->ShowCancelButton( false );
	bSizer41->Add( m_searchCtrl2, 0, wxALL|wxEXPAND, 5 );

	m_grid5 = new wxGrid( sbSizer6->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid5->CreateGrid( 0, 5 );
	m_grid5->EnableEditing( true );
	m_grid5->EnableGridLines( true );
	m_grid5->EnableDragGridSize( false );
	m_grid5->SetMargins( 0, 0 );

	// Columns
	m_grid5->SetColSize( 0, 50 );
	m_grid5->SetColSize( 1, 400 );
	m_grid5->SetColSize( 2, 75 );
	m_grid5->SetColSize( 3, 75 );
	m_grid5->EnableDragColMove( false );
	m_grid5->EnableDragColSize( true );
	m_grid5->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid5->EnableDragRowSize( true );
	m_grid5->SetRowLabelSize( 1 );
	m_grid5->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid5->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer41->Add( m_grid5, 1, wxALL|wxEXPAND, 5 );


	sbSizer6->Add( bSizer41, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("ID Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer47->Add( m_staticText29, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl10 = new wxTextCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer47->Add( m_textCtrl10, 1, wxALL, 5 );


	bSizer42->Add( bSizer47, 1, 0, 5 );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText30 = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("ID Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer48->Add( m_staticText30, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl11 = new wxTextCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_textCtrl11, 1, wxALL, 5 );


	bSizer42->Add( bSizer48, 1, 0, 5 );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Cantidad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer49->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl5 = new wxSpinCtrl( sbSizer6->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	bSizer49->Add( m_spinCtrl5, 1, wxALL, 5 );


	bSizer42->Add( bSizer49, 1, 0, 5 );

	btn_Agregar = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Agregar producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer42->Add( btn_Agregar, 0, wxALL, 5 );


	sbSizer6->Add( bSizer42, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxVERTICAL );


	sbSizer6->Add( bSizer56, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );

	btn_Confirmar = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Confirmar venta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( btn_Confirmar, 0, wxALL, 5 );

	btn_Cancelar = new wxButton( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( btn_Cancelar, 0, wxALL, 5 );


	sbSizer6->Add( bSizer51, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer36->Add( sbSizer6, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer36 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	btn_Confirmar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::DisplayConfirmar ), NULL, this );
}

BaseAddVenta::~BaseAddVenta()
{
	// Disconnect Events
	btn_Confirmar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseAddVenta::DisplayConfirmar ), NULL, this );

}
