#ifndef PILA.H
#define PILA.H
#include "Cliente.h"
#include "Entrada.h"
#include "NodoPila.h"
using namespace std;

class Pila
{
private:
    pnodo cima;
public:
    Pila();
    ~Pila();
    bool esVacia();
    void apilar(Cliente c);
    void desapilar();
    pnodo getCima();
    //void duplicar(Pila aux);
    void invertir(Pila inversa);
    void insertarCliente(Cliente c);
    void mostrarPila();
    void mostrarRegistrados();
    void mostrarNoRegistrados();
    void borrarPila();
};
#endif


