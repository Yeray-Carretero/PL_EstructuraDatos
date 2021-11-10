#ifndef NODO_COLA.H
#define NODOD_COLA.H
#include "Cliente.h"
#include "Entrada.h"
#include <iostream>
using namespace std;

class NodoCola
{
    private:
        Cliente cliente;
        NodoCola *siguiente;
        friend class Cola;
    public:
        NodoCola();
        NodoCola(Cliente cliente);
        NodoCola(Cliente cliente, NodoCola *siguiente);
        ~NodoCola();

};
typedef  NodoCola *cnodo;
#endif
