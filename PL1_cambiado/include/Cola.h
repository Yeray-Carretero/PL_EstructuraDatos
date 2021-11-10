#ifndef COLA.H
#define COLA.H
#include "NodoCola.h"
#include <iostream>
using namespace std;

class Cola
{
    private:
        cnodo primero;
        cnodo ultimo;
        int longitud;
    public:
        Cola();
        ~Cola();
        bool esVacia();
        void encolar(Cliente c);
        void desencolar();
        void invertir(Cola inversa);
        int getLongitud();
        cnodo prim(); //Muestra el primer elemento de la cola
        void mostrarCola();
        void borrarCola();
};
#endif
