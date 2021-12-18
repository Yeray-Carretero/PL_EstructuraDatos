#include "ABB.h"
#include "NodoABB.h"
#include "Cliente.h"
#include <string>
#include<iostream>

using namespace std;


ABB::ABB() //crea árbol vacío
{
    //ctor
    raiz=NULL;
}
ABB::ABB(NodoABB *r)
{
    raiz=r;

}
ABB::ABB(string id,bool registro, NodoABB *hIz, NodoABB *hDer)//constructor que crea árbolBin con dato y dos subárboles
{
    raiz= new NodoABB(id,registro, hIz, hDer);//llamamos al constructor del Nodo y raiz es un puntero al Nodo creado

}

ABB::~ABB()
{
    //dtor
}
void ABB::verInOrden() { verInOrden(raiz);}//Metodo auxiliar a verInOrden que nos permite inicilizar el valor del nodo
void ABB::verInOrden(NodoABB *nodoaux)// Método para ver Arbol empezando por su izquierda, después pasamos por la raiz y por ultimo por la rama derecha
{
    if (nodoaux) {
       verInOrden(nodoaux->hi);
       cout<< nodoaux->id<<endl;
        verInOrden(nodoaux->hd);
    }
    }
void ABB::verInOrdenIzq(){
    verInOrden(raiz->hi)
}
void ABB::verInOrdenDer(){
    verInOrden(raiz->hd)
}
void ABB::verPreorden(){ verPreorden(raiz);}
void ABB::verPreorden(NodoABB *nodoaux){
    if(nodoaux){
        cout << nodoaux->id <<endl;
        preOrden(nodoaux->izq);
        preOrden(nodoaux->der);
     }
}

bool esVacio(anodo nabb){

    return nabb==NULL;
}
void ABB::insertar(Cliente c)
{
    if(c.registrado)
    {
        insertar(c, raiz->hi);
    }
    else
    {
        insertar(c, raiz->hd);
    }

}
void ABB::insertar(Cliente c,NodoABB *nodoaux)//En este método insertamos un cliente en el ABB para que siga ordenado
{
    if (nodoaux == NULL)
    {
        NodoABB *nuevo = new NodoABB(c);
        nodoaux = nuevo;
    }
    else{



        if ((nodoaux->id>c.id) || (nodoaux->id ==c.id))


             { //Si el id del cliente es menor o igual al del nodo  raíz entoces comprobamos...


            if (nodoaux->hi == NULL)//Si el nodo izquierdo está vacio entoces
            {
                //creo un objeto NodoABB para insertarlo en el ABB
            NodoABB *nuevo=new NodoABB(c);
            nodoaux->hi= nuevo;
            }


            else//En caso de que el nodo no estuviera vacio
            {

                insertar(c, nodoaux->hi);//insertamos al clienteen el nodo izquierdo
            }
        }
        else// Si el id del cliente es mayor queel del nodo
        {

            if (nodoaux->hd == NULL)//Comprobamos si el derecho no existe
            {

                //creo un objeto NodoABB para insertarlo en el ABB
            NodoABB *nuevo=new NodoABB(c);
                nodoaux->hd=nuevo;
                }// Creamos un nuevo nodo en la rama derecha

            else//si existe
            {
                insertar(c, nodoaux->hd);// insertamos el clienteen el nodo derecho
            }
        }
    }

}
void ABB:buscar(string idCli){
    if (idCli[0])== 'R'){
        buscar(idCli,raiz->hi);
    }
    else{
        buscar(idCli,raiz->hd);
    }
}
void ABB::buscar(string idCli, NodoABB *nodoaux){
    if (esVacio(nodoaux)){
            cout<<"No esta en el arbol;
    }
    else{
        if (idCli==(nodoaux->id)){
            cout<<"Los datos del cliente son:"<<endl;
            cout<<nodoaux->id<< endl ;
            cout<<nodoaux->registro<< endl;
            /*lista entradas*/
        }
        else{
            if(idCli<(nodoaux->id)){
                buscar(idCli,nodoaux->hi)

            }
            else{
                buscar(idCli,nodoaux->hd)
            }
        }
    }


}
