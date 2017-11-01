/*
	Estructuras de Datos y Algoritmos - Obligatorio 1 2017 TISJ
	Integrantes:
		- Mariano Burguete
		- Gonzalo Gutierrez
*/

#ifndef FUNCIONES_AUXILIARES_H
#define FUNCIONES_AUXILIARES_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#include "Constantes.h"
#include "Var_globales.h"
#include "Texto.h"

void gotoxy(int x,int y);
void imprimirMenu();
void intro();
Texto inicalizar();
Palabra inicializarPalabras();
Diccionario inicializarDic();
Historial incializarHistorial();
void insertarLetraDic(Cadena c);
bool chequearLetra(Cadena c);
int cantidadLineas();
int cantidadPalabras(Texto l);
void aumentarNumSigLineas(Texto l);
void disminuirNumSigLineas(Texto l);
void aumentarNumSigPalabras(Palabra l);
void disminuirNumSigPalabras(Palabra l);
void imprimirPalabras(Texto l);
void borrarPalLinea(Texto L);
void insertarPalPrimerEspacioDisponible(Palabra nodo);
bool isFull(Texto l);
bool isEmpty(Texto l);
void insertarPalPos(int pos, Cadena palabra, Texto l);
void borrarUltPal(Texto L);
void borrarLineasVacias();
bool hayMasPalabras(Texto L);
void imprimirLetras(Diccionario D);
void insertarHistorial(Cadena p);
void moverHaciaDelante(Historial h);

#endif
