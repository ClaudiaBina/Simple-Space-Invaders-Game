#include <iostream>
#include "punto.h"
#include "elemento.h"

// Constuctor con parametros
Elemento :: Elemento (int a, int b, int vel) : Punto(a, b)
{
    v = vel;
}


// Consulta de la velocidad el elemento
int Elemento :: GetV(void)
{
    return v;
}

