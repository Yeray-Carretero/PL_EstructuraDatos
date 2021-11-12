#ifndef NODO_LISTA.H
#define NODO_LISTA.H
#include "Cliente.h"
#include "Entrada.h"
#include <iostream>
using namespace std;

class NodoLista
{
    private:
        Cliente cliente;
        lnodo anterior;
        lnodo siguiente;
        friend class Lista;
    public:
        NodoLista();
        NodoLista(Cliente cliente);
        NodoLista(Cliente cliente, lnodo siguiente, lnodo anterior);
        ~NodoLista();

        
};
typedef NodoLista *lnodo;
#endif