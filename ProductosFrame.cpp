#include "ProductosFrame.h"
#include "AddProductoFrame.h"
#include "string_conv.h"
#include "ConfirmEliminar.h"

ProductosFrame::ProductosFrame(wxWindow *parent, Sistema *m_sistema) 
	: BaseProductosFrame(parent), sistema(m_sistema) { 
	
	ActualizarGrid();
	
}

ProductosFrame::~ProductosFrame() { }

void ProductosFrame::DisplayAddProducto( wxCommandEvent& event )  {
	AddProductoFrame *win = new AddProductoFrame(this,sistema);
	if(win->ShowModal() == 1){
		
		gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
		ActualizarGrid();
	}
	
}

void ProductosFrame::BackToHome( wxCommandEvent& event )  {
	
}

void ProductosFrame::ActualizarGrid(){
//	if(gridProductos->GetNumberRows() != 0){
//		gridProductos->DeleteRows(0,gridProductos->GetNumberRows());
//	}
	
	for(int i=0; i<sistema->getProductosSize(); i++){
		Producto &prod = sistema->getProducto(i);
		
		gridProductos->AppendRows();
		gridProductos->SetCellValue(i,0,to_string(prod.getID()));
		gridProductos->SetCellValue(i,1,prod.getDescripcion());
		gridProductos->SetCellValue(i,2,"$"+to_string(prod.getPrecio()));
		gridProductos->SetCellValue(i,3,to_string(prod.getStock()));
	}
}

void ProductosFrame::EliminarProducto( wxCommandEvent& event )  {
	ConfirmEliminar *win = new ConfirmEliminar(this);
	if(win->ShowModal() == 1){
		int x = gridProductos->GetGridCursorRow();
		gridProductos->DeleteRows(x);
		sistema->deleteProducto(x);
		sistema->ActualizarProductos();
		ActualizarGrid();
	}
}

