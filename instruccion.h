#ifndef INSTRUCCION_H
#define INSTRUCCION_H
#include "iostream"
using namespace std;

class instruccion
{
public:
    virtual void ejecutar()=0;
};

#endif // INSTRUCCION_H
