#ifndef DECLARACION_H
#define DECLARACION_H
#include "instruccion.h"

class declaracion: public  instruccion
{
public:
    declaracion();          //constructor
    void ejecutar();        //obligatorio
};

#endif // DECLARACION_H
