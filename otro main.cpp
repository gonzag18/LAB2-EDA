/*
	Estructuras de Datos y Algoritmos - Obligatorio 1 2017 TISJ
	Integrantes:
		- Mariano Burguete
		- Gonzalo Gutierrez
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define MAX_ARGUMENTO 30

#include "Constantes.h"
#include "Funciones_auxiliares.h"
#include "Texto.h"
#include "Var_globales.h"



void imprimirResultado(int retorno){

     switch(retorno){
        case 0:
             printf("Resultado: %s\n\n", "OK");
             break;
        case 1:
             printf("Resultado: %s\n\n", "ERROR");
             break;
        case 2:
             printf("Resultado: %s\n\n", "NO_IMPLEMENTADA");
             break;
     }
}



int main(int argc, char *argv[])
{
    int numOper = 0;
    bool salir = false;
    TipoRetorno retorno = NO_IMPLEMENTADA;
    Posicion posicionLinea = 0;
    Posicion posicionPalabra = 0;
    char opcion = 'n';
    Cadena palabraAux = NULL;

    do {


    printf("Estructuras de Datos y Algoritmos - Obligatorio 2\n");
    printf("### PROCESADOR DE TEXTOS ###\n\n");

    printf("Lista de operaciones disponibles:\n");
    printf("1)  InsertarLinea\n");
    printf("2)  InsertarLineaEnPosicion\n");
    printf("3)  BorrarLinea\n");
    printf("4)  BorrarTodo\n");
    printf("5)  BorrarOcurrenciasPalabraEnTexto\n");
    printf("6)  ImprimirTexto\n");
    printf("7)  ComprimirTexto\n");
    printf("8)  InsertarPalabra\n");
    printf("9)  BorrarPalabra\n");
    printf("10) BorrarOcurrenciasPalabraEnLinea\n");
    printf("11) ImprimirLinea\n");
    printf("12) IngresarPalabraDiccionario\n");
    printf("13) BorrarPalabraDiccionario\n");
    printf("14) ImprimirDiccionario\n");
    printf("15) ImprimirTextoIncorrecto\n");
    printf("16) ImprimirUltimasPalabras\n");
    printf("17) Salir\n\n");

    printf("Ingrese el numero de la operacion a realizar: ");
    fflush(stdin);
    scanf("%d", &numOper);

    switch (numOper){
           case 1:
                  retorno = InsertarLinea();
                  imprimirResultado(retorno);
                  break;
           case 2:
                  printf("Ingrese la posicion de la nueva linea (debe ser >= 1 y <= cant lineas + 1): ");
                  cin >> posicionLinea;
                  retorno = InsertarLineaEnPosicion(posicionLinea);
                  imprimirResultado(retorno);
                  break;
           case 3:
                  printf("Ingrese la posicion de la linea a borrar (debe ser >= 1 y <= cant lineas): ");
                  cin >> posicionLinea;
                  retorno = BorrarLinea(posicionLinea);
                  imprimirResultado(retorno);
                  break;
           case 4:
                  printf("Esta seguro de que desea borrar todas las lineas del texto (s/n)?: ");
                  cin >> opcion;
                  if (opcion == 's' || opcion == 'S'){
                     retorno = BorrarTodo();
                     imprimirResultado(retorno);
                  }
                  break;
           case 5:
                  printf("Ingrese la palabra que desea borrar: ");
                  palabraAux = new char [MAX_LARGO_PALABRA];
                  cin >> palabraAux;
                  retorno = BorrarOcurrenciasPalabraEnTexto(palabraAux);
                  imprimirResultado(retorno);
                  break;
           case 6:
                  retorno =  ImprimirTexto();
                  imprimirResultado(retorno);
                  break;
           case 7:
                  retorno = ComprimirTexto();
                  imprimirResultado(retorno);
                  break;
           case 8:
                  printf("Ingrese la palabra que desea agregar: ");
                  palabraAux = new char [MAX_LARGO_PALABRA];
                  cin >> palabraAux;
                  printf("Ingrese la posicion de la linea donde la va a agregar (debe ser >= 1 y <= cant lineas): ");
                  cin >> posicionLinea;
                  printf("Ingrese la posicion que debe tener la palabra dentro de las palabras de la linea (debe ser >= 1 y <= cant palabaras en la linea + 1): ");
                  cin >> posicionPalabra;
                  retorno = InsertarPalabra(posicionLinea,posicionPalabra,palabraAux);
                  imprimirResultado(retorno);
                  break;
           case 9:
                  printf("Ingrese la posicion de la linea donde se encuentra la palabra a borrar (debe ser >= 1 y <= cant lineas): ");
                  cin >> posicionLinea;
                  printf("Ingrese la posicion de la palabra a borrar (debe ser >= 1 y <= cant palabaras en la linea): ");
                  cin >> posicionPalabra;
                  retorno = BorrarPalabra(posicionLinea,posicionPalabra);
                  imprimirResultado(retorno);
                  break;
           case 10:
                  printf("Ingrese la palabra que desea borrar: ");
                  palabraAux = new char [MAX_LARGO_PALABRA];
                  cin >> palabraAux;
                  printf("Ingrese la posicion de la linea donde se debe borrar la palabra (debe ser >= 1 y <= cant lineas): ");
                  cin >> posicionLinea;
                  retorno =  BorrarOcurrenciasPalabraEnLinea(posicionLinea,palabraAux);
                  imprimirResultado(retorno);
                  break;
           case 11:
                  printf("Ingrese la posicion de la linea que desea imprimir (debe ser >= 1 y <= cant lineas): ");
                  cin >> posicionLinea;
                  retorno =  ImprimirLinea(posicionLinea);
                  imprimirResultado(retorno);
                  break;
          case 12:
                 printf("Ingrese la palabra que desea agregar al diccionario: ");
                 palabraAux = new char [MAX_LARGO_PALABRA];
                 cin >> palabraAux;
                 retorno = IngresarPalabraDiccionario(D,palabraAux);
                 imprimirResultado(retorno);
                 break;
          case 13:
                 printf("Ingrese la palabra que desea borrar del diccionario: ");
                 palabraAux = new char [MAX_LARGO_PALABRA];
                 cin >> palabraAux;
                 retorno = BorrarPalabraDiccionario(D, palabraAux);
                 imprimirResultado(retorno);
                 break;
          case 14:
                 retorno =  ImprimirDiccionario(D);
                 imprimirResultado(retorno);
                 break;
          case 15:
                 retorno =  ImprimirTextoIncorrecto(texto, D);
                 imprimirResultado(retorno);
                 break;
          case 16:
                 retorno =  ImprimirUltimasPalabras(texto);
                 imprimirResultado(retorno);
                 break;
          case 17:
                 printf("Esta seguro de que desea salir (s/n)?: ");
                 cin >> opcion;
                 if (opcion == 's' || opcion == 'S'){
                    printf("Saliendo...\n");
                    salir = true;
                 }
                 break;
           default:
                   printf("No ingreso una opcion valida, vuelva a intentarlo...\n");
           }

    printf("\n");
    system("PAUSE");

    system("cls");

    } while (!salir);

    return EXIT_SUCCESS;
}
