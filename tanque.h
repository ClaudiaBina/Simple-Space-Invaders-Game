/****** tanque.h *************************************************/
/**
* @file tanque.h
*
* @brief Pr�cticas de Programaci�n
*
* Fichero de cabecera de la clase Tanque
*
* @version 1.0
**/
/***************************************************************/

#ifndef __tanque_h
#define __tanque_h

#include "elemento.h"

const char TANQUE = 'A'; ///< Car�cter que representa al tanque

class Tanque : public Elemento
{
    public:
        // Constructor con par�metros
        Tanque(int, // Posicion x del tanque
               int, // Posicion y del tanque
               int); // Velocidad del tanque

        // Consulta el car�cter que representa al tanque
        char GetS(void);

        // Metodo que mueve el tanque en direcci�n indicada por el entero
        void Mover(int);
    private:
        char c; ///< Caracter que representa al tanque
};

#endif

