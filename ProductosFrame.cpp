#include "ProductosFrame.h"
#include "AddProductoFrame.h"
#include "string_conv.h"
#include "EditProducto.h"
#include <wx/msgdlg.h>

ProductosFrame::ProductosFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseProductosFrame(parent), sistema(m_sistema) { 
	
	ActualizarGrid();
}

ProductosFrame::~ProductosFrame() { }

void ProductosFrame::ActualizarGrid()  {
	if(gridProductos->GetNumberRows() != 0){
		gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
	}
	
	for(int i=0; i<sistema->GetProductosSize(); i++){
		gridProductos->AppendRows();
		gridProductos->SetCellValue(i,0, to_string(sistema->GetProducto(i).GetID()));
		gridProductos->SetCellValue(i,1, sistema->GetProducto(i).GetDescripcion());
		gridProductos->SetCellValue(i,2, to_string(sistema->GetProducto(i).GetPrecio()));
		gridProductos->SetCellValue(i,3, to_string(sistema->GetProducto(i).GetStock()));
	}
}

void ProductosFrame::ActualizarGrid( wxCommandEvent& event )  {
	if(gridProductos->GetNumberRows() != 0){
		gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
	}
	
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
	if(gridProductos->GetNumberRows() == 0){
		wxMessageBox("No hay productos","Error",wxOK|wxICON_ERROR);
		
	} else {
		int choice = wxMessageBox("¿Esta seguro?","Advertencia",wxYES_NO|wxICON_QUESTION);
		if(choice == wxYES){
			int row = gridProductos->GetGridCursorRow();
			string str = wx_to_std(gridProductos->GetCellValue(row,0));
			int id = stoi(str); // str to int
			sistema->DeleteProducto(id);
			
			ActualizarGrid();
		}
	}
}

void ProductosFrame::DisplayEditarProducto( wxCommandEvent& event )  {
	if(gridProductos->GetNumberRows() == 0){
		wxMessageBox("No hay productos","Error",wxOK|wxICON_ERROR);
	} else {
		string str = wx_to_std(gridProductos->GetCellValue(gridProductos->GetGridCursorRow(),0));
		int id = stoi(str);
		
		EditProducto *win = new EditProducto(this,sistema,id);
		if(win->ShowModal() == 1){
			ActualizarGrid();
		}
	}
}

void ProductosFrame::BuscarProducto( wxCommandEvent& event )  {
	string busqueda = wx_to_std(input_BuscarProducto->GetValue());
	
	Producto prod = sistema->GetProductoByDescrip(busqueda);
	if(prod.GetID() == 0){
		wxMessageBox("No se encontro el producto","Error",wxOK|wxICON_ERROR);
	} else {
		gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
		gridProductos->AppendRows();
		gridProductos->SetCellValue(0,0, to_string(prod.GetID()));
		gridProductos->SetCellValue(0,1, prod.GetDescripcion());
		gridProductos->SetCellValue(0,2, to_string(prod.GetPrecio()));
		gridProductos->SetCellValue(0,3, to_string(prod.GetStock()));
	}
}


void ProductosFrame::OrdenarGrid( wxGridEvent& event )  {
	int col = event.GetCol();
	switch (col){
	case 0: sistema->OrdenarProductos(ID_PRODUCTO); break;
	case 1: sistema->OrdenarProductos(DESCRIPCION); break;
	case 2: sistema->OrdenarProductos(PRECIO); break;
	case 3: sistema->OrdenarProductos(STOCK); break;
	}
}

