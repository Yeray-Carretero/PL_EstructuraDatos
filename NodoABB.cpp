#include "NodoABB.h"
#include "Cliente.h"
#include <string>
#include<iostream>
using namespace std;

NodoABB::NodoABB(Cliente c, NodoABB *izq, NodoABB *der)//ctor dados todos los atributos
{

    id=cliente.id;
    registro=cliente.registrado;
    hi=izq;
    hd=der;

}8

NodoABB:NodoABB(Cliente c){
    id=cliente.id
    registro=cliente.registrado
    hi=NULL;
    hd=NULL;
}
NodoABB::~NodoABB()
{
    //dtor
}

