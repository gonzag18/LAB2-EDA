/*
	Estructuras de Datos y Algoritmos - Obligatorio 1 2017 TISJ
	Integrantes:
		- Mariano Burguete
		- Gonzalo Gutierrez
*/

#ifndef TEXTO_H
#define TEXTO_H

#include "Var_globales.h"
#include "Constantes.h"
#include "Funciones_auxiliares.h"

// Operaciones relativas a las lineas:                               
TipoRetorno InsertarLinea();                                                                             
TipoRetorno InsertarLineaEnPosicion(Posicion posicionLinea);                                               
TipoRetorno BorrarLinea(Posicion posicionLinea);                                                          
TipoRetorno BorrarTodo();                                                                               
TipoRetorno BorrarOcurrenciasPalabraEnTexto(Cadena palabraABorrar);											
TipoRetorno ImprimirTexto();                                                                                
TipoRetorno ComprimirTexto();                                                                             

// Operaciones relativas a las palabras:
TipoRetorno InsertarPalabra(Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar);      
TipoRetorno BorrarPalabra(Posicion posicionLinea, Posicion posicionPalabra);                                 
TipoRetorno BorrarOcurrenciasPalabraEnLinea(Posicion posicionLinea, Cadena palabraABorrar);                 
TipoRetorno ImprimirLinea(Posicion posicionLinea);                                                          

#endif
