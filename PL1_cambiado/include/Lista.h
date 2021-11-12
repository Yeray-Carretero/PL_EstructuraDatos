#ifndef LISTA.H
#define LISTA.H
#include "NodoLista.h"
#include "Cliente.h"
#include "Entrada.h"
#include <iostream>
using namespace std;

class Lista{
    private:
        lnodo primero;
        lnodo ultimo;
    public:
        Lista();
        ~Lista();
        void agregarIzq(Cliente c);
        void agregarDer(Cliente c);
        void agrergarPos(Cliente c, int pos);
        void borrarDer();
        void borrarIzq();
        void borrarPos(int pos);
        Cliente devolverPos(int pos);
        bool esta(Cliente c);
        bool esVacia();
};
#endif