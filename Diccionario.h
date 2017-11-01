#ifndef DICCIONARIO_H
#define DICCIONARIO_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#include "Constantes.h"
#include "Estructuras.h"
#include "Funciones_auxiliares.h"

TipoRetorno IngresarPalabraDiccionario(Cadena palabraAIngresar);
TipoRetorno BorrarPalabraDiccionario(Cadena palabraABorrar);
TipoRetorno ImprimirDiccionario();
TipoRetorno ImprimirTextoIncorrecto();
TipoRetorno ImprimirUltimasPalabras();

#endif
