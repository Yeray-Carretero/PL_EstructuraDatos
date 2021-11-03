#include "Entrada.h"
using namespace std;
//Constructor
Entrada::Entrada(){
    tipo=' ';
    idConcierto=' ';
}
Entrada::Entrada(string t, string idCon){
    tipo=t;
    idConcierto=idCon;
}
//Destructor
Entrada::~Entrada(){}
//Modificar la identificación del concierto 
void Entrada::modificarID(string nuevaID){
    idConcierto=nuevaID;
}
//Modificar el tipo de entrada
void Entrada::modificarTipo(string nuevoTipo){
    tipo=nuevoTipo;
}