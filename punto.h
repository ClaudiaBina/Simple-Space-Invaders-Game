/****** punto.h *************************************************/
/**
* @file punto.h
*
* @brief Prácticas de Programación
*
* Fichero de cabecera de la clase Punto
*
* @version 1.0
**/
/***************************************************************/
#ifndef __punto_h
#define __punto_h

class Punto
{
    public:
        // Constructor con parametros
        Punto(int, // Valor x del elemento
              int); // Valor y del elemento

        // Da un nuevo valor a la posicion 'x' del punto
        void SetX(int);

        // Da un nuevo valor a la posicion 'y' del punto
        void SetY(int);

        // Consulta de la posicion 'x' del punto
        int GetX(void);

        // Consulta de la posicion 'y' del punto
        int GetY(void);

        // Sobrecarga del operador comparacion para poder comparar puntos
        friend bool operator == (Punto, Punto);
        
    private:
        int x; ///< Valor x del elemento
        int y; ///< Valor y del elemento
};

#endif

