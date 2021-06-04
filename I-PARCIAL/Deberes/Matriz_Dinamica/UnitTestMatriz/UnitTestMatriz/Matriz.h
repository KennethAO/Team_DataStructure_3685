#pragma once
#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h

class Matriz
{
public:
	int getFila_(void);
	void setFila_(int newFila_);
	int getColumna_(void);
	void setColumna_(int newColumna_);
	int** getMatriz_(void);
	void setMatriz_(int** newMatriz_);
	Matriz(int _fila, int _columna);
	Matriz() = default;

protected:
private:
	int fila_;
	int columna_;
	int** matriz;


};

#endif

#include "Matriz.h"

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getFila_()
// Purpose:    Implementation of Matriz::getFila_()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::getFila_(void)
{
	return fila_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setFila_(int newFila_)
// Purpose:    Implementation of Matriz::setFila_()
// Parameters:
// - newFila_
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::setFila_(int newFila_)
{
	fila_ = newFila_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getColumna_()
// Purpose:    Implementation of Matriz::getColumna_()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::getColumna_(void)
{
	return columna_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setColumna_(int newColumna_)
// Purpose:    Implementation of Matriz::setColumna_()
// Parameters:
// - newColumna_
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::setColumna_(int newColumna_)
{
	columna_ = newColumna_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getMatriz_(int newColumna_)
// Purpose:    Implementation of Matriz::getMatriz()
// Parameters:
// -
// Return:     int
////////////////////////////////////////////////////////////////////////

int** Matriz::getMatriz_(void) {
	return matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setMatriz_(int newColumna_)
// Purpose:    Implementation of Matriz::setMatriz()
// Parameters:
// - 
// Return:     int
////////////////////////////////////////////////////////////////////////

void Matriz::setMatriz_(int** newMatriz_) {
	matriz = newMatriz_;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Matriz(int _fila, int _columna)
// Purpose:    Implementation of Matriz::Matriz()
// Parameters:
// - _fila
// - _columna
// Return:     
////////////////////////////////////////////////////////////////////////

Matriz::Matriz(int _fila, int _columna)
{
	fila_ = _fila;
	columna_ = _columna;
}
