/*
	Estructuras de Datos y Algoritmos - Obligatorio 1 2017 TISJ
	Integrantes:
		- Mariano Burguete
		- Gonzalo Gutierrez
*/

#include "Texto.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

TipoRetorno InsertarLinea(){
	Texto aux=L;
	while(aux->sig != NULL) // Avanza hasta el final de la lista
		aux=aux->sig;
	Texto nodo= new _texto;
	nodo->pal= inicializarPalabras();
	int num= cantidadLineas();
	nodo->numLinea= num+1;
	nodo->sig=NULL;
	aux->sig=nodo;
	infoRetorno= " Operacion realizada con exito";
	return OK;
}

TipoRetorno InsertarLineaEnPosicion(Posicion posicionLinea){
	if(posicionLinea > cantidadLineas()+1 && posicionLinea>0){
		infoRetorno= " ERROR, posicion invalida";
		return ERROR;
	}
	Texto aux=L;
	Texto nodo= new _texto;
	nodo->numLinea= posicionLinea;
	nodo->pal= inicializarPalabras();
	if(posicionLinea == cantidadLineas()+1){
		while(aux->sig!=NULL)
			aux=aux->sig;
		nodo->sig=NULL;
		aux->sig=nodo;
		infoRetorno= " Operacion realizada con exito";
		return OK;		
	}
	else{
		int cont=0;
		while(cont < posicionLinea-1){
			aux=aux->sig;
			cont++;
		}
		Texto aux2=aux;
		nodo->sig=aux->sig;
		aux2->sig=nodo;
		aumentarNumSigLineas(nodo->sig);
		infoRetorno= " Operacion realizada con exito";
		return OK;	
	}	
}

TipoRetorno BorrarLinea(Posicion posicionLinea){
	if(posicionLinea > cantidadLineas()+1 && posicionLinea>0){
		infoRetorno= " ERROR, posicion invalida";
		return ERROR;
	}
	Texto aux= L;
	if(posicionLinea == cantidadLineas()+1){
		while(aux->sig!=NULL)
			aux=aux->sig;
		borrarPalLinea(aux->sig);
		delete aux->sig;
		aux->sig=NULL;
		disminuirNumSigLineas(aux->sig);
		infoRetorno= " Operacion realizada con exito";
		return OK;		
	}
	else{
		int cont=0;
		while(cont < posicionLinea-1){
			aux=aux->sig;
			cont++;
		}
		Texto borrar= aux->sig;
		aux->sig=aux->sig->sig;
		borrarPalLinea(borrar);
		delete borrar;
		disminuirNumSigLineas(aux->sig);
		infoRetorno= " Operacion realizada con exito";
		return OK;	
	}
}

TipoRetorno BorrarTodo(){
	while(L->sig!=NULL){
		Texto borrar= L->sig;
		L->sig=borrar->sig;
		borrarPalLinea(borrar);
		delete borrar;
	}
	infoRetorno= " Operacion realizada con exito";
	return OK;	
}

TipoRetorno BorrarOcurrenciasPalabraEnTexto(Cadena palabraABorrar){
	Texto aux=L;
	int pos=1;
	while(aux->sig!=NULL){
		BorrarOcurrenciasPalabraEnLinea(pos, palabraABorrar);
		pos++;
		aux=aux->sig;
	}
	infoRetorno= " Operacion realizada con exito";
	return OK;
}

TipoRetorno ImprimirTexto(){
	if(L->sig==NULL){
		cout << " Texto vacio" << endl;
		infoRetorno= " Operacion realizada con exito";
		return OK;
	}
	else{
		Texto aux=L;
		while(aux->sig!=NULL){
			cout << " " << aux->sig->numLinea << ": ";
			imprimirPalabras(aux->sig);
			aux=aux->sig;
		}
		infoRetorno= " Operacion realizada con exito";
		return OK;
	}
}

TipoRetorno ComprimirTexto(){
	bool termino=false;
	Texto buscarL;
	int cont;
	Palabra ins;
	Posicion pos;
	Texto aux=L;
	InsertarLinea();
	while(aux->sig!=NULL && !termino){
		while(!isFull(aux->sig) && !termino){ 
			Texto actual=aux->sig;
			if(!hayMasPalabras(actual->sig)){
				termino=true;
				break;
			}
			buscarL= actual->sig;
			while(buscarL!=NULL && isEmpty(buscarL))
				buscarL=buscarL->sig;
			if(buscarL==NULL)
				termino=true;
			else{
				ins= aux->sig->pal;
				pos= aux->sig->numLinea;
				cont= 1;
				while(ins->sig!=NULL){
					cont++;
					ins=ins->sig;
				}
				InsertarPalabra(pos,cont,buscarL->pal->sig->info);
				BorrarPalabra(buscarL->numLinea,1);
			}
		}
		aux=aux->sig;
	}
	borrarLineasVacias();
	infoRetorno= " Operacion realizada con exito";
	return OK;
}

TipoRetorno InsertarPalabra(Posicion posicionLinea, Posicion posicionPalabra, Cadena palabraAIngresar){
	if(posicionLinea > 0 && posicionLinea <= cantidadLineas()){
		if(posicionPalabra > 0 && posicionPalabra <= MAX_CANT_PALABRAS_X_LINEA){
			// Update del historial
			insertarHistorial(palabraAIngresar);
			
			Texto aux= L;
			int cont=0;
			while(cont < posicionLinea){
				aux=aux->sig;
				cont++;
			}
			if(posicionPalabra <= cantidadPalabras(aux)+1){
				if(!isFull(aux)) // Si la linea no esta llena de palabras
					insertarPalPos(posicionPalabra, palabraAIngresar, aux);
				else{  // Si la linea esta llena insertar y desplazar siguientes pal
					Palabra desplazar=aux->pal;
					while(desplazar->sig!=NULL)
						desplazar=desplazar->sig;
					if(aux->sig==NULL)
						InsertarLinea();
					insertarPalPos(1,desplazar->info, aux->sig);
					BorrarPalabra(posicionLinea, MAX_CANT_PALABRAS_X_LINEA);
					insertarPalPos(posicionPalabra, palabraAIngresar, aux);
					if(isFull(aux->sig)){
						while(aux->sig!=NULL && isFull(aux->sig)){
							Palabra desp=aux->sig->pal;
							while(desp->sig!=NULL)
								desp=desp->sig;
							if(aux->sig->sig==NULL)
								InsertarLinea();
							insertarPalPos(1, desp->info, aux->sig->sig);
							borrarUltPal(aux->sig);
							aux=aux->sig;
						}
					}
				}
				infoRetorno= " Operacion realizada con exito";
				return OK;
			}
			else{
				infoRetorno= " ERROR, posicion de palabra invalida";
				return ERROR;
			}
		}
		else{
			infoRetorno= " ERROR, posicion de palabra invalida";
			return ERROR;
		}
	}
	else{
		infoRetorno= " ERROR, posicion de linea invalida";
		return ERROR;
	}
}

TipoRetorno BorrarPalabra(Posicion posicionLinea, Posicion posicionPalabra){
	if(posicionLinea > 0 && posicionLinea <= cantidadLineas()){
		if(posicionPalabra > 0 && posicionPalabra <= MAX_CANT_PALABRAS_X_LINEA){
			Texto aux=L;
			int cont=0;
			while(cont < posicionLinea){
				aux=aux->sig;
				cont++;
			}
			if(posicionPalabra <= cantidadPalabras(aux)){
				Palabra b=aux->pal;
				int cont2=0;
				while(cont2 < posicionPalabra-1){
					b=b->sig;
					cont2++;
				}
				Palabra borrar=b->sig;
				b->sig=borrar->sig;
				delete borrar;
				disminuirNumSigPalabras(b->sig);
				infoRetorno= " Operacion realizada con exito";
				return OK;
			}
			else{
				infoRetorno= " ERROR, posicion de palabra invalida";
				return ERROR;
			}
		}
		else{
			infoRetorno= " ERROR, posicion de palabra invalida";
			return ERROR;
		}
	}
	else{
		infoRetorno= " ERROR, posicion de linea invalida";
		return ERROR;
	}
}

TipoRetorno BorrarOcurrenciasPalabraEnLinea(Posicion posicionLinea, Cadena palabraABorrar){
	if(posicionLinea > 0 && posicionLinea <= cantidadLineas()){
		Texto aux= L;
		int cont=0;
		while(cont < posicionLinea){
			aux=aux->sig;
			cont++;
		}
		Palabra p= aux->pal;
		while(p->sig!=NULL){
			if(!strcmp(p->sig->info, palabraABorrar))
				BorrarPalabra(posicionLinea, p->sig->numPalabra);
			else
				p=p->sig;
		}
		infoRetorno= " Operacion realizada con exito";
		return OK;
	}
	else{
		infoRetorno= " ERROR, posicion de linea invalida";
		return ERROR;
	}
}

TipoRetorno ImprimirLinea(Posicion posicionLinea){
	if(posicionLinea > cantidadLineas()){
		infoRetorno= " ERROR, posicion invalida";
		return ERROR;
	}
	Texto aux=L;
	int cont=0;
	while(cont < posicionLinea){
		aux=aux->sig;
		cont++;
	}
	cout << " " << aux->numLinea << ": ";
	imprimirPalabras(aux);
	infoRetorno= " Operacion realizada con exito";
	return OK;
}
