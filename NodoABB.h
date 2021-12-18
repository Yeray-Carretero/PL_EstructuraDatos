#ifndef NODOABB_H
#define NODOABB_H
#include "Cliente.h"
#include "Entrada.h"
#include <iostream>
#include <string>
using namespace std;

class NodoABB{
    private:
        string id;
        bool registro;

        NodoABB *hi;
        NodoABB *hd;
        friend class ABB;
    public:
        NodoABB(Cliente c, NodoABB* iz, NodoABB* der);
        NodoABB(Cliente c);
        ~NodoABB();

};
typedef  NodoABB *anodo;

#endif // NODOABB_H_INCLUDED
