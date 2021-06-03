/***********************************************************************
 * Module:  Operacion.cpp
 * Author:  Equipo
 * Modified: mi�rcoles, 2 de junio de 2021 15:46:42
 * Purpose: Implementation of the class Operacion
 ***********************************************************************/

#include "Operacion.h"
#include "Matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getMatriz1()
// Purpose:    Implementation of Operacion::getMatriz1()
// Return:     Matriz
////////////////////////////////////////////////////////////////////////

Matriz Operacion::getMatriz1(void)
{
   return matriz1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setMatriz1(Matriz newMatriz1)
// Purpose:    Implementation of Operacion::setMatriz1()
// Parameters:
// - newMatriz1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatriz1(Matriz newMatriz1)
{
   matriz1 = newMatriz1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getMatriz2()
// Purpose:    Implementation of Operacion::getMatriz2()
// Return:     Matriz
////////////////////////////////////////////////////////////////////////

Matriz Operacion::getMatriz2(void)
{
   return matriz2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setMatriz2(Matriz newMatriz2)
// Purpose:    Implementation of Operacion::setMatriz2()
// Parameters:
// - newMatriz2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatriz2(Matriz newMatriz2)
{
   matriz2 = newMatriz2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getMatrizR()
// Purpose:    Implementation of Operacion::getMatrizR()
// Return:     Matriz
////////////////////////////////////////////////////////////////////////

Matriz Operacion::getMatrizR(void)
{
   return matrizR;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setMatrizR(Matriz newMatrizR)
// Purpose:    Implementation of Operacion::setMatrizR()
// Parameters:
// - newMatrizR
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setMatrizR(Matriz newMatrizR)
{
   matrizR = newMatrizR;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion(Matriz matriz1, Matriz matriz2, Matriz matriz3)
// Purpose:    Implementation of Operacion::Operacion()
// Parameters:
// - matriz1
// - matriz2
// - matriz3
// Return:     
////////////////////////////////////////////////////////////////////////

Operacion::Operacion(Matriz matriz1, Matriz matriz2)
{
   this->matriz1=matriz1;
   this->matriz2=matriz2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::~Operacion()
// Purpose:    Implementation of Operacion::~Operacion()
// Return:     
////////////////////////////////////////////////////////////////////////

/*Operacion::~Operacion()
{
   // TODO : implement
}*/

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::generar()
// Purpose:    Implementation of Operacion::generar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::generar()
{
	
	srand(time(NULL));
	//Rand para matriz 1
	int i, j;
	for (i = 0; i < matriz1.getFila_(); i++)
		for (j = 0; j < matriz1.getColumna_(); j++)
			*(*(matriz1.getMatriz_() + i) + j) = rand() % 9;
	
	//Rand para matriz 2
	for (i = 0; i < matriz2.getFila_(); i++)
		for (j = 0; j < matriz2.getColumna_(); j++)
			*(*(matriz2.getMatriz_() + i) + j) = rand() % 9;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::encerar()
// Purpose:    Implementation of Operacion::encerar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::encerar(int **matriz, int dim)
{
    int i,j;
    for(i=0;i<dim;i++)
        for(j=0;j<dim;j++)
        *(*(matriz+i)+j)=0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::procesar(int exponente)
// Purpose:    Implementation of Operacion::procesar()
// Parameters:
// - exponente
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::procesar(int exponente)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::imprimir_()
// Purpose:    Implementation of Operacion::imprimir_()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::imprimir_(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::segmentar()
// Purpose:    Implementation of Operacion::segmentar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::segmentar(void)
{
   // TODO : implement
}
