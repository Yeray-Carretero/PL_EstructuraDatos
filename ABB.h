#ifndef ABB_H
#define ABB_H
#include "NodoABB.h"
#include <string>
#include<iostream>
using namespace std;

class ABB
{   private:
        friend class Cliente;
        anodo raiz;
    public:
        ABB();
        ABB(NodoABB *r);
        ABB(string id,bool registro, NodoABB *hIz=NULL, NodoABB *hDer=NULL);
        ~ABB();
        void verInOrden();
        void verInOrden(NodoABB *nodoaux);
        void verInOrdenDer();
        void verInOrdenIzq();
        void verPreorden();
        void verPreorden(NodoABB *nodoaux);
        bool esVacio(anodo nabb);
        void insertar(Cliente c);
        void insertar(Cliente c, NodoABB *nodoaux);
        void buscar(string idCli);
        void buscar(string idCli, NodoABB *nodoaux);


};

#endif // ABB_H_INCLUDED
