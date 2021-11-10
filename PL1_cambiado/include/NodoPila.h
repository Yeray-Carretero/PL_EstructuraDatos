#ifndef NODO_PILA.H
#define NODO_PILA.H
#include "Cliente.h"
#include "Entrada.h"
#include<iostream>
using namespace std;

class NodoPila
{
private:
        Cliente cliente;
        NodoPila *siguiente;
        friend class Pila;
        friend class Cola;
    public:
        NodoPila();
        NodoPila(Cliente c, NodoPila *sig=NULL);
        ~NodoPila();
};
typedef NodoPila *pnodo;
#endif