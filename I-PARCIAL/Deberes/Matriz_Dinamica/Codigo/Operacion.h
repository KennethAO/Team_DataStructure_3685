/***********************************************************************
 * Module:  Operacion.h
 * Author:  Equipo
 * Modified: mi�rcoles, 2 de junio de 2021 15:46:42
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#if !defined(__Matriz_Operacion_h)
#define __Matriz_Operacion_h

#include "Matriz.cpp"

class Operacion
{
public:
   Matriz getMatriz1(void);
   void setMatriz1(Matriz newMatriz1);
   Matriz getMatriz2(void);
   void setMatriz2(Matriz newMatriz2);
   Matriz getMatrizR(void);
   void setMatrizR(Matriz newMatrizR);
   Operacion(Matriz matriz1, Matriz matriz2, Matriz matriz3);
   ~Operacion();
   Operacion()=default;
   void generar(void);
   void encerar(void);
   void procesar(int exponente);
   void imprimir_(void);
   void segmentar(void);

protected:
private:
   Matriz matriz1;
   Matriz matriz2;
   Matriz matrizR;


};

#endif