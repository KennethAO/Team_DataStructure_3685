#include <iostream>
#include "Pila.h"

using namespace std;


class Notaciones{
    private:
        string expresion;
        Pila<char> operadores;
        Pila<char> salida;
        Pila<char> entrada;
    public:
        Notaciones() = default;
        void ingresarExpresion(string _expresion);
        string convertirPostfija();
        string convertirPrefija();
        string convertirFuncional();
        int verificarJerarquia(char operador);
        bool comprobarSigno(char temporal);
        bool compararFunciones(int j);
        bool compararFun(int i);

        string compararSigno(char temporal);

};
