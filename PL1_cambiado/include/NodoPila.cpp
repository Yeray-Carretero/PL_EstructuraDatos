#include "NodoPila.h"
#include <iostream>
#include <string>

NodoPila::NodoPila(){
    cliente=Cliente();
    siguiente=NULL;
}
NodoPila::NodoPila(Cliente c,NodoPila *sig){
    cliente=c;
    siguiente=sig;
}
NodoPila::~NodoPila(){};