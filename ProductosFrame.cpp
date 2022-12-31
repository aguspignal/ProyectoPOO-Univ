#include "ProductosFrame.h"
#include "AddProductoFrame.h"
#include "string_conv.h"
#include "ConfirmEliminar.h"
#include "EditProducto.h"

ProductosFrame::ProductosFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseProductosFrame(parent), sistema(m_sistema) { 
	
	ActualizarGrid();
}

ProductosFrame::~ProductosFrame() { }

void ProductosFrame::ActualizarGrid(){
	int numberRows = gridProductos->GetNumberRows();
	gridProductos->DeleteRows(0,numberRows);
	
	for(int i=0; i<sistema->GetProductosSize(); i++){
		gridProductos->AppendRows();
		gridProductos->SetCellValue(i,0, to_string(sistema->GetProducto(i).GetID()));
		gridProductos->SetCellValue(i,1, sistema->GetProducto(i).GetDescripcion());
		gridProductos->SetCellValue(i,2, to_string(sistema->GetProducto(i).GetPrecio()));
		gridProductos->SetCellValue(i,3, to_string(sistema->GetProducto(i).GetStock()));
	}
}

void ProductosFrame::DisplayAddProducto( wxCommandEvent& event )  {
	AddProductoFrame *win = new AddProductoFrame(this,sistema);
	if(win->ShowModal() == 1){
		ActualizarGrid();
	}
}

void ProductosFrame::EliminarProducto( wxCommandEvent& event )  {
	ConfirmEliminar *win = new ConfirmEliminar(this);
	if(win->ShowModal() == 1){
		int row = gridProductos->GetGridCursorRow();
		string str = wx_to_std(gridProductos->GetCellValue(row,0));
		int id = stoi(str); // str to int
		sistema->DeleteProducto(id);
		
		ActualizarGrid();
	}
}

void ProductosFrame::DisplayEditarProducto( wxCommandEvent& event )  {
	string str = wx_to_std(gridProductos->GetCellValue(gridProductos->GetGridCursorRow(),0));
	int id = stoi(str);
	
	EditProducto *win = new EditProducto(this,sistema,id);
	
	if(win->ShowModal() == 1){
		ActualizarGrid();
	}
}

void ProductosFrame::BackToHome( wxCommandEvent& event )  {
	this->Close();
}

