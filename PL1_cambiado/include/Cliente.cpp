#include "Cliente.h"
#include "Entrada.h"
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

//Contructor
Cliente::Cliente(){
    registrado=false;
    llegada=0;
    id=' ';
    entrada=Entrada();
    
}
//Constructor con entrada
Cliente::Cliente(bool er, int lleg, string id, Entrada e){
    registrado=er;
    llegada=lleg;
    this->id=id;
    entrada=e;
}
//Constructor sin entrada
Cliente::Cliente(bool er, int lleg, string id){
    registrado=er;
    llegada=lleg;
    this->id=id;
    entrada=Entrada();
}
//Destructor
Cliente::~Cliente(){}
/*cambiarTipo-> Cambia el estado del cliente a registrado si no lo está
                y a no registrado si cierra su cuenta en la plataforma*/
void Cliente::cambiarTipo(){
    registrado=(!registrado);
}
/*agregarEntrada(string tipo,string id)->añade una entrada que compra el cliente*/
void Cliente::agregarEntrada(string tipo,string id){
    entrada=Entrada(tipo,id);
}
/*comprobarId-> Comprueba que el id del cliente es válido en función si está registrado o no*/
bool Cliente::comprobarId(){
    const char * c=id.c_str();
    if(registrado){
        bool sonNum=true;
        int k=6;
        int i=strncmp(c,"CODREG",6);
        while(k<id.length() && sonNum){
            sonNum=(isdigit(c[k])!=0);
            k++;
        }
        return (strncmp(c,"CODREG",6)==0) && sonNum && id.length()==9;
    }
    else{
        char letra[]="TRWAGMYFPDXBNJZSQVHLCKE";
        string num=id.substr(0,id.length()-1);
        const char * numDni=num.c_str();
        if(id.length()!=9){
            return false;
        }
        else{
            return letra[atoi(numDni)%23]==c[8];
        }
    }
}
