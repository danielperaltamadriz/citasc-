#include <iostream>
#include<list>
#include "cita.h"

using namespace std;


int main()
{
    list<Cita> citas;
    list<Cita>::iterator it;
    Cita cita;
    Cita cita2;
    cita2.cantidadPreguntas = 5;
    cita.cantidadPreguntas = 3;
    citas.push_back(cita2);
    citas.push_back(cita);
    it = citas.begin();
    cout << it->cantidadPreguntas << endl;
    it++;
    cout << it->cantidadPreguntas << endl;
    return 0;

}
