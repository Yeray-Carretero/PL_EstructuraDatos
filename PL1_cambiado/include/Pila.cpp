#include "Pila.h"
#include "Cliente.h"
#include "NodoPila.h"
#include <iostream>
#include <string>
using namespace std;
//Constructor
Pila::Pila(){
    cima=NULL;
}
//Destructor
Pila::~Pila(){}

/* getCima->Duevuelve el nodo que se ecuentra en la cima de la pila sin modificar la pila*/
pnodo Pila::getCima(){
    return cima;
}
/*esVacia T-> si la pila no contiene elementos
          F-> si la pila contiene elementos */
bool Pila::esVacia(){
    return cima==NULL;
}
/*apilar(Cliente c)->coloca como nueva cima de la pila el elemnto introducido*/
void Pila::apilar(Cliente c){
    pnodo nuevo=new NodoPila(c,cima);
    cima=nuevo;
}
/*desapilar()-> desapilar la cima de la pila*/
void Pila::desapilar(){
    pnodo aux;
    if (cima){
        aux=cima;
        cima=aux->siguiente;
        delete aux;
    }

}
/*insertarCliente(Cliente c)->  inserta en la pila a un cliente,
                    Si registrado==T -> se apila en la cima de la pila
                    Si registrado==F ->se coloca por debajo de los registrados en la pila
                    Se comprueba que la id del cliente sea correcta */
void Pila::insertarCliente(Cliente c){
    Pila aux;
    if (!c.comprobarId()){
        cout<<"\nLa identificación del cliente no es válida o no corresponde con el tipo de cliente"<<endl;
    }
    if (c.registrado){  //Apila en la cima de la pila si el cliente está registrado
        apilar(c);
    }
    else{
        if(!cima->cliente.registrado){ //Apila si el primero de la pila es un no registrado
            apilar(c);
        }
        while(cima->cliente.registrado){
            aux.apilar(cima->cliente);
            desapilar();  
        }
        apilar(c);
        while(!aux.esVacia()){
            apilar(aux.cima->cliente);
            aux.desapilar();
        }
    }
}
/*Duplicar(Pila)->  Duplica la pila sin destruir la primera
                    La pila que se introduce como parámetro es donde se copia la pila que llama a la funcion
void Pila::duplicar(Pila aux){
    pnodo p_aux;
    p_aux=cima;
    while(p_aux!=NULL){
        aux.apilar(p_aux->cliente);
        p_aux=p_aux->siguiente;
    }
}*/


//invertir(Pila)-> Invierte la pila en la que se introduce como parámetro
void Pila::invertir(Pila aux){
    pnodo p_aux;
    p_aux=cima;
    while(p_aux!=NULL){
        aux.apilar(p_aux->cliente);
        p_aux=p_aux->siguiente;
    }
}

/*mostrarPila()-> Imprime por pantalla todos los clientes almacenados en la pila*/
void Pila::mostrarPila(){
    cout<<"\nLos clientes son:\n";
    pnodo p_aux;
    p_aux=cima;
    while(p_aux!=NULL){
        cout<<"\n"<<p_aux->cliente.id<<endl;
        p_aux=p_aux->siguiente;
    }
}
/*mostrarRegistrados()->    Muestra por pantalla los clientes registrados*/
void Pila::mostrarRegistrados(){
    cout<<"\nLos clientes registrados son:\n";
    pnodo p_aux;
    p_aux=cima;
    while (p_aux && p_aux->cliente.registrado)
    {
        cout<<"\n"<<p_aux->cliente.id<<endl;
        p_aux=p_aux->siguiente;
    }
    
}
/*mostrarNoRegistrado()->   Muestra por pantalla los clientes no registrados*/
void Pila::mostrarNoRegistrados(){
    cout<<"\nLos clientes no registrados son:\n";
    pnodo p_aux;
    Pila aux;
    invertir(aux);
    p_aux=aux.cima;
    while(p_aux){
        cout<<"\n"<<p_aux->cliente.id<<endl;
        p_aux=p_aux->siguiente;
    }
}
/*borrarPila()  ->  borra todos los clientes de la pila y la deja vacía*/
void Pila::borrarPila(){
    while(cima){
        desapilar();
    }
}