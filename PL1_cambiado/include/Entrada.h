#ifndef ENTRADA.H
#define ENTRADA.H
#include <string>
using namespace std;
class Entrada{
private:
    string tipo;
    string idConcierto;
    friend class Cliente;
public:
    Entrada();
    Entrada(string tipo,string idConcierto);
    ~Entrada();
    void modificarTipo(string nuevoTipo);
    void modificarID(string nuevoID);
};
#endif