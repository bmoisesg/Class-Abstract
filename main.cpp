#include <QCoreApplication>
#include "instruccion.h"
#include "declaracion.h"
#include "iostream"
using namespace  std;
int main()
{   
    instruccion *comando= new declaracion();
    comando->ejecutar();
    comando->ejecutar();
    return 0;
}
