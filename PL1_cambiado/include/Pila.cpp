#include "Pila.h"
#include "Cliente.h"
#include "NodoPila.h"
#include <iostream>
#include <string>
using namespace std;
//Constructor
Pila::Pila(){
    pnodo cima=NULL;
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
/*insertarCliente(Cliente c)->  inserta en la pila a un cliente,
                    Si registrado==T -> se apila en la cima de la pila
                    Si registrado==F ->se coloca por debajo de los registrados en la pila
                    Se comprueba que la id del cliente sea correcta */
void Pila::insertarCliente(Cliente c){
    if (!c.comprobarId()){
        cout<<"\nLa identificación del cliente no es válida o no corresponde con el tipo de cliente"<<endl;
    }
    if (c.registrado){  //Apila en la cima de la pila si el cliente está registrado
        apilar(c);
    }
    else{
        do{
            if(!cima->cliente.registrado){ //Apila si el primero de la pila es un no registrado
                apilar(c);
            }
        }
        while(cima->cliente.registrado){

        }
    }
}




Pila Pila::invertir(){
    Pila aux;
    while(!esVacia()){
        
    }
}