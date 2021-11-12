#include "NodoLista.h"
#include <iostream>
using namespace std;
/*Constructores del nodo para el manejo de una lista doblemente enlazada*/
NodoLista::NodoLista(){
    cliente=Cliente();
    anterior=NULL;
    siguiente=NULL;
    
}
NodoLista::NodoLista(Cliente c){
    cliente=c;
    anterior=NULL;
    siguiente=NULL;
}
NodoLista::NodoLista(Cliente c, lnodo ant, lnodo sig){
    cliente=c;
    anterior=ant;
    siguiente=sig;
}
/*Destructor de la clase*/
NodoLista::~NodoLista(){}