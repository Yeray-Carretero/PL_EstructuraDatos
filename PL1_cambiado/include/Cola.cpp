#include "Cola.h"
#include "NodoCola.h"
#include "Pila.h"
#include "NodoPila.h"
#include <iostream>

using namespace std;
/*Cola()    -> Constructor del TAD Cola de clientes*/
Cola::Cola(){
    primero=NULL;
    ultimo=NULL;
    longitud=0;

}
/*~Cola()   -> Destructor*/
Cola::~Cola(){}

/*encolar(Cliente c)    -> agrega un cliente al final de la cola*/
void Cola::encolar(Cliente c){
    NodoCola *nuevoNodo= new NodoCola(c);
    if(primero==NULL&&ultimo==NULL){
        primero=nuevoNodo;
        ultimo=nuevoNodo;
    }else{
        ultimo->siguiente=nuevoNodo;
        ultimo=nuevoNodo;
    }
    longitud++;
}

bool Cola::esVacia(){
    return (primero==NULL && ultimo==NULL);
}
/*desencolar()  ->quita el primer elemento de la cola*/
void Cola::desencolar(){
    if (!esVacia())
    {
        Cliente c=primero->cliente;
        NodoCola *aux= primero;
        if ((primero==ultimo)&& (primero->siguiente==NULL)){
            primero =NULL;
            ultimo =NULL;
            aux->siguiente =NULL;
            delete (aux);
        }
        else {
            primero=primero->siguiente;
            aux->siguiente=NULL;
            delete(aux);
        }
        longitud--;
    }
}
/*invertir(Cola)    -> invierte la cola, en la cola que se introduce en la función*/
void Cola::invertir(Cola inversa){
    Pila pila_aux;
    cnodo caux; //Nodo de la cola aux
    pnodo paux; //Nodo de la pula aux
    caux=primero;
    while(caux){
        pila_aux.apilar(caux->cliente);
        caux=caux->siguiente;
    }
    paux=pila_aux.getCima();
    while(paux){
        inversa.encolar(paux->cliente);
        paux=paux->siguiente;
    }
}
/*getLongitud() ->devuelve la longitud de la cola*/
int Cola::getLongitud(){
    return longitud;
}
/*prim()        ->devuelve el nodo el primer cliente de la cola*/
cnodo Cola::prim(){
    return primero;
}
/*borrarCola()  ->borra todos los elementos de la cola, y se deja como cola vacía*/
void Cola::borrarCola(){
    while(prim){
        desencolar();
    }
}
/*mostrarCola() ->muestra por pantalla los clientes introducidos*/
void Cola::mostrarCola(){
    cout<<"\nLa cola de clientes es:\n";
    cnodo caux=primero;
    while(caux){
        cout<<"\n"<<caux->cliente.id;
        caux=caux->siguiente;
    }
}
