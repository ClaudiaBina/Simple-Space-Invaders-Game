#include <iostream>
#include "punto.h"

using namespace std;

// Constructor con parametros
Punto::Punto(int a, int b){
    x = a;
    y = b;
}


// Da un nuevo valor a la posicion 'x' del punto
void Punto::SetX(int a)
{
    x = a;    
}


// Da un nuevo valor a la posicion 'y' del punto
void Punto::SetY(int b)
{
    y = b;
}


// Consulta de la posicion 'x' del punto
int Punto::GetX(void)
{
    return x;
}


// Consulta de la posicion 'y' del punto
int Punto::GetY(void)
{
    return y;
}


//el operador comparacion para poder comparar puntos
bool operator == (Punto p1, Punto p2){
    if ( (p1.x == p2.x) && (p1.y == p2.y) )
        return true;
    else
        return false;
    
}
