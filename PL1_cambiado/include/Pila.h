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
    pnodo getCima();
    Pila invertir();
    void insertarCliente(Cliente c);
    void mostrarPila();
};
#endif


