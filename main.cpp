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

#define MAX_ARGUMENTO 100

#include "Constantes.h"
#include "Funciones_auxiliares.h"
#include "Texto.h"
#include "Diccionario.h"
#include "Var_globales.h"

/* HOW TO SACAR PRIMERA LETRA
	Cadena arg= new char[10];
	cin>>arg;
	Cadena arg2;
	arg2[0]= arg[0];
	arg2[1]= '\0';
	cout << "arg1 es" << arg << " y arg2 es " << arg2 << endl;
	system("pause");
*/


main(){
//	intro();
	Cadena comando = new char(10);
	while(true){
		system("cls");
		imprimirMenu();
		gotoxy(11,22);
		cin >> comando;
		if (!strcmp(comando, "1")){
		 	InsertarLinea();
		 	cout << endl;
		 	cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
		 	continue;
		}
		if (!strcmp(comando, "2")){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c           Insertar linea en posicion              %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion:                                     %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
		 	Posicion pos;
		 	gotoxy(16,4);
		 	cin >> pos;
		 	InsertarLineaEnPosicion(pos);
		 	cout << endl;
		 	cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
		 	continue;
		}
		if (!strcmp(comando, "3")){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c                   Borrar linea                    %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion:                                     %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
		 	Posicion pos;
		 	gotoxy(16,4);
		 	cin >> pos;
		 	BorrarLinea(pos);
		 	cout << endl;
		 	cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
		 	continue;
		}
		if (!strcmp(comando, "4")){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c                    Borrar todo                    %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c       %cEst%c seguro de que quiere borrar todo      %c\n", 186, 168, 160, 186);
			printf("%c                   el texto? (s/n)                 %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 196);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Opcion:                                       %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			string arg;
			do{
				gotoxy(0,7);
				printf("%c     Opcion:                                       %c\n", 186, 186);
				gotoxy(14,7);
				arg = new char[MAX_ARGUMENTO];
				cin >> arg;
			}while(arg!= "s" && arg!= "S" && arg!= "n" && arg!= "N");
			if(arg == "s" || arg == "S"){
				BorrarTodo();
			 	cout << endl;
			 	cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
				system("pause");
			}
		 	continue;
		}
		if (!strcmp(comando, "5")){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c        Borrar ocurrencias palabra en texto        %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Palabra:                                      %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			Cadena arg = new char[MAX_ARGUMENTO];
			gotoxy(16,4);
		 	cin >> arg;
			BorrarOcurrenciasPalabraEnTexto(arg);
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if (!strcmp(comando, "6")){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c                  Imprimir texto                   %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			cout << endl;
			ImprimirTexto();
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if (!strcmp(comando, "7") ){
			ComprimirTexto();
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if (!strcmp(comando, "8") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c                 Insertar palabra                  %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Palabra:                                      %c\n", 186, 186);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion linea:                               %c\n", 186, 186);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion palabra:                             %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			Posicion arg1, arg2;
			Cadena arg3 = new char[MAX_ARGUMENTO];
			gotoxy(15,4); // 22 pos linea - 24 pos palabra - 15 palabra
			cin >> arg3;
			gotoxy(22,6);
			cin >> arg1;
			gotoxy(24,8);
			cin >> arg2;
			if(strlen(arg3) <= MAX_LARGO_PALABRA)
				InsertarPalabra(arg1, arg2, arg3);
			else
				infoRetorno= "ERROR, limite de largo de palabra excedido";
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if (!strcmp(comando, "9") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c                  Borrar palabra                   %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion linea:                               %c\n", 186, 186);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion palabra:                             %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			Posicion arg1, arg2;
			gotoxy(22,4);
			cin >> arg1;
			gotoxy(24,6);
			cin >> arg2;
			BorrarPalabra(arg1, arg2);
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if (!strcmp(comando, "10") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c        Borrar ocurrencias palabra en linea        %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Palabra:                                      %c\n", 186, 186);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion linea:                               %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			Posicion arg1;
			Cadena arg2 = new char[MAX_ARGUMENTO];
			gotoxy(15,4);
			cin >> arg2;
			gotoxy(22,6);
			cin >> arg1;
			BorrarOcurrenciasPalabraEnLinea(arg1, arg2);
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if (!strcmp(comando, "11") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c                  Imprimir linea                   %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Posicion:                                     %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			Posicion arg;
			gotoxy(16,4);
			cin >> arg;
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c                  Imprimir linea                   %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			ImprimirLinea(arg);
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;	
		}
		if(!strcmp(comando, "12") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c          Ingresar palabra al diccionario          %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Palabra:                                      %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			Cadena arg = new char[MAX_ARGUMENTO];
			gotoxy(15,4);
			cin >> arg;
			IngresarPalabraDiccionario(arg);
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if(!strcmp(comando, "13") ){
				system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c          Borrar palabra del diccionario           %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			printf("%c     Palabra:                                      %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			Cadena arg = new char[MAX_ARGUMENTO];
			gotoxy(15,4);
			cin >> arg;
			BorrarPalabraDiccionario(arg);
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if(!strcmp(comando, "14") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c               Imprimir diccionario                %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			cout << endl;
			ImprimirDiccionario();
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if(!strcmp(comando, "15") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c             Imprimir texto incorrecto             %c\n", 186, 186);
			printf("%c",200);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",188);
			cout << endl;
			chiquearPalabrasCorrectas();
			ImprimirTextoIncorrecto();
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if(!strcmp(comando, "16") ){
			system("cls");
			printf("%c",201);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",187);
			printf("%c             Imprimir ultimas palabras             %c\n", 186, 186);
			printf("%c",204);
			for(int i=0; i<51; i++)
				printf("%c", 205);
			printf("%c\n",185);
			printf("%c                                                   %c\n", 186, 186);
			ImprimirUltimasPalabras();
			cout << endl;
			cout << infoRetorno << endl << "-----------------------------------------------------\n       ";
			system("pause");
			continue;
		}
		if(!strcmp(comando, "17") )
			break;
		else{
			cout << "ERROR, COMANDO INVALIDO" << endl;
			system("pause");
		}
	}
}
