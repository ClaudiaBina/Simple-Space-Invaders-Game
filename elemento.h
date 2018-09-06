/****** elemento.h **********************************************/
/**
* @file elemento.h
*
* @brief Pr�cticas de Programaci�n
*
* Fichero de cabecera de la clase Elemento
*
* @version 1.0
**/
/***************************************************************/

#ifndef __elemento_h
#define __elemento_h

#include "punto.h"

class Elemento : public Punto
{
    public:
        // Constuctor con parametros
        Elemento(int, // Posici�n x del elemento
                 int, // Posici�n y del elemento
                 int); // Velocidad de movimiento del elemento

        // Consulta de la velocidad el elemento
        int GetV(void);
    private:
        int v; ///< Velocidad del elemento
};

#endif

