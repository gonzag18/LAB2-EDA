/*
	Estructuras de Datos y Algoritmos - Obligatorio 1 2017 TISJ
	Integrantes:
		- Mariano Burguete
		- Gonzalo Gutierrez
*/

#include "Funciones_auxiliares.h"
#include <Windows.h>
#define espera 20

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}

void imprimirMenu(){
	printf("%c",201);
	for(int i=0; i<51; i++)
		printf("%c", 205);
	printf("%c\n",187);
	printf("%c Obligatorio 2 - Estructuras de datos y algoritmos %c\n",186,186);
	printf("%c",204);
	for(int i=0; i<51; i++)
		printf("%c", 205);
	printf("%c\n",185);
	printf("%c  Ingrese opcion:                                  %c\n", 186, 186);
	printf("%c                                                   %c\n", 186, 186);
	printf("%c        1- Insertar linea                          %c\n", 186, 186);
	printf("%c        2- Insertar linea en posicion              %c\n", 186, 186);
	printf("%c        3- Borrar linea                            %c\n", 186, 186);
	printf("%c        4- Borrar todo                             %c\n", 186, 186);
	printf("%c        5- Borrar ocurrencias palabra en texto     %c\n", 186, 186);
	printf("%c        6- Imprimir texto                          %c\n", 186, 186);
	printf("%c        7- Comprimir texto                         %c\n", 186, 186);
	printf("%c        8- Insertar palabra                        %c\n", 186, 186);
	printf("%c        9- Borrar palabra                          %c\n", 186, 186);
	printf("%c       10- Borrar ocurrencias palabra en linea     %c\n", 186, 186);
	printf("%c       11- Imprimir linea                          %c\n", 186, 186);
	printf("%c       12- Ingresar palabra al diccionario         %c\n", 186, 186);
	printf("%c       13- Borrar palabra del diccionario          %c\n", 186, 186);
	printf("%c       14- Imprimir diccionario                    %c\n", 186, 186);
	printf("%c       15- Imprimir texto incorrecto               %c\n", 186, 186);
	printf("%c       16- Imprimir ultimas palabras               %c\n", 186, 186);
	printf("%c                                                   %c\n", 186, 186);
	printf("%c  Opcion:                                          %c\n", 186, 186);
	printf("%c",200);
	for(int i=0; i<51; i++)
		printf("%c", 205);
	printf("%c\n",188);
}

void intro(){
	for(int i=0; i<53; i++)
		printf("%c", 205);
	printf("\n");
	printf("\n        %c%c%c%c%c  %c%c%c%c   %c  %c%c%c%c%c  %c%c%c%c%c  %c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("        %c      %c   %c  %c    %c    %c   %c  %c   %c\n",219,219,219,219,219,219,219,219,219);
	printf("        %c%c%c%c%c  %c   %c  %c    %c    %c   %c  %c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("        %c      %c   %c  %c    %c    %c   %c  %c %c\n",219,219,219,219,219,219,219,219,219);
	printf("        %c%c%c%c%c  %c%c%c%c   %c    %c    %c%c%c%c%c  %c  %c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("\n                    %c%c%c%c   %c%c%c%c%c\n",219,219,219,219,219,219,219,219,219);
	printf("                    %c   %c  %c\n",219,219,219);
	printf("                    %c   %c  %c%c%c%c%c\n",219,219,219,219,219,219,219);
	printf("                    %c   %c  %c\n",219,219,219);
	printf("                    %c%c%c%c   %c%c%c%c%c\n",219,219,219,219,219,219,219,219,219);
	printf("\n         %c%c%c%c%c  %c%c%c%c%c  %c   %c  %c%c%c%c%c  %c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("           %c    %c       %c %c     %c    %c   %c\n",219,219,219,219,219,219,219);
	printf("           %c    %c%c%c%c%c    %c      %c    %c   %c\n",219,219,219,219,219,219,219,219,219,219);
	printf("           %c    %c       %c %c     %c    %c   %c\n",219,219,219,219,219,219,219);
	printf("           %c    %c%c%c%c%c  %c   %c    %c    %c%c%c%c%c\n\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
	for(int i=0; i<53; i++)
		printf("%c", 196);
	printf("\n  O");
	Sleep(espera);
	printf("b");
	Sleep(espera);
	printf("l");
	Sleep(espera);
	printf("i");
	Sleep(espera);
	printf("g");
	Sleep(espera);
	printf("a");
	Sleep(espera);
	printf("t");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("i");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf(" 1");
	Sleep(espera);
	printf(" -");
	Sleep(espera);
	printf(" E");
	Sleep(espera);
	printf("s");
	Sleep(espera);
	printf("t");
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("u");
	Sleep(espera);
	printf("c");
	Sleep(espera);
	printf("t");
	Sleep(espera);
	printf("u");
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("a");
	Sleep(espera);
	printf("s");
	Sleep(espera);
	printf(" d");
	Sleep(espera);
	printf("e");
	Sleep(espera);
	printf(" d");
	Sleep(espera);
	printf("a");
	Sleep(espera);
	printf("t");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf("s");
	Sleep(espera);
	printf(" y");
	Sleep(espera);
	printf(" a");
	Sleep(espera);
	printf("l");
	Sleep(espera);
	printf("g");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("i");
	Sleep(espera);
	printf("t");
	Sleep(espera);
	printf("m");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf("s\n");
	Sleep(espera);
	printf("       B");
	Sleep(espera);
	printf("y");
	Sleep(espera);
	printf(" M");
	Sleep(espera);
	printf("a");
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("i");
	Sleep(espera);
	printf("a");
	Sleep(espera);
	printf("n");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf(" B");
	Sleep(espera);
	printf("u");
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("g");
	Sleep(espera);
	printf("u");
	Sleep(espera);
	printf("e");
	Sleep(espera);
	printf("t");
	Sleep(espera);
	printf("e,");
	Sleep(espera);
	printf(" G");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf("n");
	Sleep(espera);
	printf("z");
	Sleep(espera);
	printf("a");
	Sleep(espera);
	printf("l");
	Sleep(espera);
	printf("o");
	Sleep(espera);
	printf(" G");
	Sleep(espera);
	printf("u");
	Sleep(espera);
	printf("t");
	Sleep(espera);
	printf("i");
	Sleep(espera);
	printf("%c", 130);
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("r");
	Sleep(espera);
	printf("e");
	Sleep(espera);
	printf("z.\n");
	Sleep(espera);
	for(int i=0; i<53; i++)
		printf("%c", 205);
	printf("\n       ");
	system("pause");
	system("cls");
}

Texto inicalizar(){
	Texto l= new _texto;
	l->sig=NULL;
	return l;
}

Palabra inicializarPalabras(){
	Palabra p= new palabra;
	p->sig=NULL;
	return p;
}

Diccionario inicializarDic(){
	d= new _diccionario;
	d->sigHer=NULL;
	d->hijo=NULL;
	return d;
}

Historial incializarHistorial(){
	h=new _historial;
	h->sig=NULL;
	return h;
}

void insertarLetraDic(Cadena c){
	Diccionario aux=d;
	while(aux->hijo != NULL && aux->hijo->pal < c)
		aux=aux->hijo;
	Diccionario nodo= new _diccionario;
	nodo->pal=c;
	nodo->sigHer=NULL;
	nodo->hijo=aux->hijo;
	aux->hijo=nodo;
}

bool chequearLetra(Cadena c){
	Diccionario aux=d;
	while(aux->hijo != NULL){
		if(aux->hijo->pal == c)
			return true;
		aux=aux->hijo;
	}
	return false;
}

int cantidadLineas(){
	int cont=0;
	Texto aux=L;
	while(aux->sig!=NULL){
		cont++;
		aux=aux->sig;
	}
	return cont;
}

int cantidadPalabras(Texto l){
	int cont=0;
	Palabra aux=l->pal;
	while(aux->sig!=NULL){
		cont++;
		aux=aux->sig;
	}
	return cont;
}

void aumentarNumSigLineas(Texto l){
	if(l!=NULL){
		l->numLinea++;
		aumentarNumSigLineas(l->sig);
	}
}

void disminuirNumSigLineas(Texto l){
	if(l!=NULL){
		l->numLinea--;
		disminuirNumSigLineas(l->sig);
	}
}

void aumentarNumSigPalabras(Palabra l){
	if(l!=NULL){
		l->numPalabra++;
		aumentarNumSigPalabras(l->sig);
	}
}

void disminuirNumSigPalabras(Palabra l){
	if(l!=NULL){
		l->numPalabra--;
		disminuirNumSigPalabras(l->sig);
	}
}

void imprimirPalabras(Texto l){
	Palabra aux= l->pal;
	while(aux->sig!=NULL){
		cout << aux->sig->info << " ";
		aux=aux->sig;
	}
	cout << endl;
}

void imprimirPalabrasIncorrectas(Texto l){
	Palabra aux= l->pal;
	while(aux->sig!=NULL){
		if(!aux->sig->palCorrecta)
			cout << aux->sig->info << " ";
		aux=aux->sig;
	}
	cout << endl;
}

void borrarPalLinea(Texto L){
	while(L->pal->sig != NULL){
		Palabra borrar= L->pal->sig;
		L->pal->sig=borrar->sig;
		delete borrar;
	}
}

bool isFull(Texto l){
	return(cantidadPalabras(l) >= MAX_CANT_PALABRAS_X_LINEA);
}

bool isEmpty(Texto l){
	return(l->pal->sig==NULL);
}

void insertarPalPos(int pos, Cadena palabraInsertar, Texto l){
	Palabra nodo= new palabra;
	nodo->info=palabraInsertar;
	nodo->numPalabra=pos;
	nodo->palCorrecta=false;
	if (pos >= MAX_CANT_PALABRAS_X_LINEA){
		Palabra auxp=l->pal;
		while(auxp->sig!=NULL)
			auxp=auxp->sig;
		auxp->sig=nodo;
		nodo->sig=NULL;
	}
	else{
		int cont=0;
		Palabra pal=l->pal;
		while(cont < pos-1){
			pal=pal->sig;
			cont++;
		}
		Palabra aux= pal;
		nodo->sig=pal->sig;
		aux->sig=nodo;
		aumentarNumSigPalabras(aux->sig->sig);
	}
}

void borrarUltPal(Texto L){
	Palabra aux=L->pal;
	while(aux->sig->sig!=NULL)
		aux=aux->sig;
	Palabra borrar=aux->sig;
	aux->sig=NULL;
	delete borrar;
}

void borrarLineasVacias(){
	Texto aux=L;
	while(aux->sig!=NULL && !isEmpty(aux->sig))
		aux=aux->sig;
	while(aux->sig!=NULL/* && isEmpty(aux->sig) */)
		BorrarLinea(aux->sig->numLinea);
}

bool hayMasPalabras(Texto L){
	Texto aux=L;
	while(aux!=NULL){
		if(aux->pal->sig!=NULL)
			return true;
		aux=aux->sig;
	}
	return false;
}

void imprimirLetras(Diccionario D){
	Diccionario aux= D;
	while(aux->hijo!=NULL){
		cout << "Letra: " << aux->hijo->pal << endl;
		aux=aux->hijo;
	}
	cout << "Fin de letras" << endl;
}

void insertarHistorial(Cadena p){
	Historial check=h;
	int cont=0;
	while(check->sig!=NULL){
		cont++;
		check=check->sig;
	}
	Historial nodo= new _historial;
	nodo->pal=p;
	nodo->sig=h->sig;
	h->sig=nodo;
	if(cont >= MAX_CANT_ULTIMAS_PALABRAS){
		h->sig->pal=p;
		Historial borrar=h;
		while(borrar->sig->sig!=NULL)
			borrar=borrar->sig;
		delete borrar->sig;
		borrar->sig=NULL;
	}
}

void moverHaciaDelante(Historial h){
	if(h!=NULL && h->sig!=NULL){
		moverHaciaDelante(h->sig);
		h->pal=h->sig->pal;
	}
}

bool buscarPalabraEnDiccionario(Cadena pal){
	Cadena respPal= pal;
	char letra;
	letra=respPal[0];
	Diccionario aux=d;
	char letraDic;
	bool encontroLetra=false;
	while(aux->hijo!=NULL){ // Busca si existe la primera letra en el diccionario (hijos)
		letraDic= aux->hijo->pal[0];
		if(letraDic == letra){
			encontroLetra=true;
			break;
		}
		aux=aux->hijo;
	}
	if(!encontroLetra) // Si no lo encontro, ya se sabe que da false
		return false;
	Diccionario encontrar= aux->hijo;
	while(encontrar->sigHer!=NULL){ // Busca en el diccionario la palabra
	//	if(encontrar->sigHer->pal == pal)
		if(! strcmp(encontrar->sigHer->pal,pal) )
			return true;
		encontrar=encontrar->sigHer;
	}
	return false;
}

void chiquearPalabrasCorrectas(){
	Texto t=L;
	Palabra aux;
	while(t->sig!=NULL){ // Recorre lineas
		aux=t->sig->pal;
		while(aux->sig!=NULL){ // Recorre las palabras de la linea
			aux->sig->palCorrecta= buscarPalabraEnDiccionario(aux->sig->info);
			aux=aux->sig;
		}
		t=t->sig;
	}
}
