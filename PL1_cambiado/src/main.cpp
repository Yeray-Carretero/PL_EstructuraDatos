#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "Pila.h"
#include "Cliente.h"
#include "Cola.h"
#include "Lista.h"
#include "Entrada.h"
using namespace std;

/*generarNumAle()	->función que genera un número aleatoriamente*/
int generarNumAle(){
	srand ((unsigned)time(0));
	return rand();
}
/*generarBoolAle()	->función que genera un bool aleatoriamente*/
bool generarBoolAle(){
	if(generarNumAle()%2==0){
		return false;
	}
	else{
		return true;
	}
}
/*generarIdAle() -> genera un id del ciente de forma aleatoria distinguiendo entre registrado y no
				 -Registrado: la id se forma de "CODEREG" mas un numero de 3 digitos aleatorio
				 -No Registrado: la id es el DNI del cliente*/
string generarIdAle(bool registrado){
	if(registrado){
		int numReg=generarNumAle()%999;
		string parteNum=to_string(numReg);
		return "CODREG"+parteNum;
	}else{
		char letras[]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
		int numDNI=generarNumAle()%99999999;
		char letra=letras[numDNI%23];
		string DNI=to_string(numDNI)+letra;
		return DNI;
	}
}
/*clienAle()	-> Crea un cliente aleatorio*/
Cliente clienAle(){
	Cliente c;
	bool registrado=generarBoolAle();
	int llegada=generarNumAle()%60;
	string id=generarIdAle(registrado);
	c=Cliente(registrado,llegada,id);
	return c;
}
/*	Variables globales	*/
Pila pilaClientes=Pila();
Cola colaRegistrados=Cola();
Cola colaNoRegistrados=Cola();
/*------------------------*/
int main(int argc, char *argv[])
{
char opcion;
bool salir;
	/*Bucle con el menú hasta que se introduzca el Q*/
	do{
		cout<<"Selecciones una opción del menú: "<<endl;
		cout<<"\nA-Generar 5 clientes en la lista y en las dos colas\n";
		cout<<"\nB-Generar N clientes con reserva en la pila\n";
		cout<<"\nC-Generar N1 y N2 clientes y agregarlos a las colas\n";
		cout<<"\nD-Incluir cliente en la pila manualmente\n";
		cout<<"\nE-Incluir cliente en la cola manualmente\n";
		cout<<"\nF-Mostrar todos los clientes de la pila\n";
		cout<<"\nG-Borrar los clientes de la pila\n";
		cout<<"\nH-Mostrar cola de clientes registrados\n";
		cout<<"\nI-Mostrar cola de clientes no registrados\n";
		cout<<"\nJ-Borrar la cola de registrados, no registrados o ambas\n";
		cout<<"\nQ-Salir del programa\n";
		cin>>opcion;
		/*switch con las opciones del menú*/
		switch(opcion){
			case 'A':
		}
	}while(!salir);
 	

}