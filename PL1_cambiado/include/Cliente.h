#ifndef CLIENTE.H
#define CLIENTE.H
#include "Entrada.h"
#include<string>
using namespace std;
class Cliente{
    private:
        bool registrado;
        int llegada;
        string id;
        Entrada entrada;
        friend class Pila;
        friend class Cola;
        friend class Lista;
    public:
        Cliente();
        Cliente(bool registrado, int llegada, string id,Entrada entrada);
        Cliente(bool registrado, int llegada, string id);
        ~Cliente();
        void cambiarTipo();
        void agregarEntrada(string tipo,string id);
        bool comprobarId();

};
#endif