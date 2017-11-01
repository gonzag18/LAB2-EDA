/*
	Estructuras de Datos y Algoritmos - Obligatorio 1 2017 TISJ
	Integrantes:
		- Mariano Burguete
		- Gonzalo Gutierrez
*/

#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#include "Constantes.h"

struct palabra{
	int numPalabra;
	bool palCorrecta;
	Cadena info;
	palabra* sig;
};
typedef palabra* Palabra;

struct _texto{
	int numLinea;
	Palabra pal;
	_texto* sig;
};
typedef _texto* Texto;

struct _diccionario{
	Cadena pal;
	_diccionario* sigHer;
	_diccionario* hijo;
};
typedef _diccionario* Diccionario;

struct _historial{
	Cadena pal;
	_historial* sig;
};
typedef _historial* Historial;

#endif
