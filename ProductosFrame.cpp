#include "ProductosFrame.h"
#include "AddProductoFrame.h"
#include "EditProducto.h"
#include "string_conv.h"
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
		Producto producto = sistema->GetProducto(i);
		gridProductos->AppendRows();
		gridProductos->SetCellValue(i,0, to_string(producto.GetID()));
		gridProductos->SetCellValue(i,1, producto.GetDescripcion());
		gridProductos->SetCellValue(i,2, "$"+to_string(producto.GetPrecio()));
		if(producto.GetStock() <= 0){
			gridProductos->SetCellValue(i,3, "Sin stock");
		} else {
			gridProductos->SetCellValue(i,3, to_string(producto.GetStock()));
		}
	}
	gridProductos->SetColFormatFloat(2,-1,2);
}

void ProductosFrame::ActualizarGrid( wxCommandEvent& event )  {
	if(gridProductos->GetNumberRows() != 0){
		gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
	}
	
	for(int i=0; i<sistema->GetProductosSize(); i++){
		Producto producto = sistema->GetProducto(i);
		gridProductos->AppendRows();
		gridProductos->SetCellValue(i,0, to_string(producto.GetID()));
		gridProductos->SetCellValue(i,1, producto.GetDescripcion());
		gridProductos->SetCellValue(i,2, "$"+to_string(producto.GetPrecio()));
		if(producto.GetStock() <= 0){
			gridProductos->SetCellValue(i,3, "Sin stock");
		} else {
			gridProductos->SetCellValue(i,3, to_string(producto.GetStock()));
		}
	}
	gridProductos->SetColFormatFloat(2,-1,2);
	input_BuscarProducto->SetValue("");
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
			int selected_row = gridProductos->GetGridCursorRow();
			string str = wx_to_std(gridProductos->GetCellValue(selected_row,0));
			int id = stoi(str);
			sistema->DeleteProducto(id);
			
			ActualizarGrid();
		}
	}
}

void ProductosFrame::DisplayEditarProducto( wxCommandEvent& event )  {
	if(gridProductos->GetNumberRows() == 0){
		wxMessageBox("No hay productos","Error",wxOK|wxICON_ERROR);
	} else {
		int selected_row = gridProductos->GetGridCursorRow();
		string str = wx_to_std(gridProductos->GetCellValue(selected_row,0));
		int id = stoi(str);
		
		EditProducto *win = new EditProducto(this,sistema,id);
		if(win->ShowModal() == 1){
			ActualizarGrid();
		}
	}
}

void ProductosFrame::BuscarProducto( wxCommandEvent& event )  {
	if(!input_BuscarProducto->IsEmpty()){
		string busqueda = wx_to_std(input_BuscarProducto->GetValue());
		vector<int> resultados = sistema->BuscarProductos(busqueda);
		
		if(resultados.empty()){
			wxMessageBox("No se encontraron productos","Error",wxOK|wxICON_ERROR);	
		} else {
			if(gridProductos->GetNumberRows() != 0){
				gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
			}
			for(int i=0; i<resultados.size(); i++){
				Producto producto = sistema->GetProductoByID(resultados[i]);
				gridProductos->AppendRows();
				gridProductos->SetCellValue(i,0,to_string(producto.GetID()));
				gridProductos->SetCellValue(i,1,producto.GetDescripcion());
				gridProductos->SetCellValue(i,2,"$"+to_string(producto.GetPrecio()));
				if(producto.GetStock() <= 0){
					gridProductos->SetCellValue(i,3, "Sin stock");
				} else {
					gridProductos->SetCellValue(i,3, to_string(producto.GetStock()));
				}
			}
			gridProductos->SetColFormatFloat(2,-1,2);
		}
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

