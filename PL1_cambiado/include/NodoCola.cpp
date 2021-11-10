#include "NodoCola.h"
#include <iostream>
#include <string>
//Constructor por defecto NodoCola
NodoCola::NodoCola(){
    cliente=Cliente();
    siguiente=NULL;
}
//Constructor por parámetros
NodoCola::NodoCola(Cliente c, NodoCola *sig){
    cliente=c;
    siguiente=sig;
}
//Constructor con un solo parámetro
NodoCola::NodoCola(Cliente c){
    cliente=c;
    siguiente=NULL;
}
//Destructor de la clase
NodoCola::~NodoCola(){}