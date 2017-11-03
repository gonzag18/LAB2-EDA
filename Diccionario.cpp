#include "Diccionario.h"

TipoRetorno IngresarPalabraDiccionario(Cadena palabraAIngresar){
	Diccionario D= aux;
	Cadena pal= new char[30];
	pal=palabraAIngresar;
	Cadena pal2;
	pal2[0]=pal[0];
	pal2[1]='\0';
	while(aux->hijo != NULL && aux->hijo->letra < pal2[0])
		aux=aux->hijo;
	if(aux->hijo == NULL)
		return ERROR;
	while(aux->sigHer != NULL && aux->sigHer->pal < palabraAIngresar)
		aux=aux->sigHer;
	if(aux->sigHer == NULL){
		Diccionario nuevo;
		nuevo->pal= palabraAIngresar;
		nuevo->sigHer=NULL;
		nuevo->hijo=NULL;
		aux->sigHer = nuevo;
		return OK;
	}
	else if(aux->sigHer->pal > palabraAIngresar){
		Diccionario nuevo;
		nuevo->pal=palabraAIngresar;
		nuevo->sigHer=aux->sigHer;
		nuevo->hijo=NULL;
		aux->sigHer=nuevo;
		return OK;
	}
	else if(aux->sigHer->pal == palabraAIngresar)
		return ERROR;
}

TipoRetorno BorrarPalabraDiccionario(Cadena palabraABorrar){
	Diccionario D= aux;
	Cadena pal= new char[30];
	pal=palabraABorrar;
	Cadena pal2;
	pal2[0]=pal[0];
	pal2[1]='\0';
	while(aux->hijo != NULL && aux->hijo->letra < pal2[0])
		aux=aux->hijo;
	if(aux->hijo == NULL)
		return ERROR;
	while(aux->sigHer != NULL && aux->sigHer->pal != palabraABorrar)
		D=D->sigHer;
	if(aux->sigher->pal == palabraABorrar){
		Diccionario borrar = aux->sigHer;
		if(aux->sigHer!=NULL){
			aux->sigHer=borrar->sigHer;
			delete borrar;
			borrar=NULL;
			return OK;
		}
		else{
			aux->sigHer=NULL;
			delete borrar;
			borrar=NULL;
			return OK;
		}
	}
	if(aux->sigHer==NULL)
		return ERROR;
}

TipoRetorno ImprimirDiccionario(){
	Diccionario aux=d;
	Diccionario aux2;
	while(aux->hijo!=NULL){
		aux2=aux->hijo;
		while(aux2->sigHer!=NULL){
			cout << aux2->sigHer->pal << endl;
			aux2=aux2->sigHer;
		}
		aux=aux->hijo;
	}
	infoRetorno= " Operacion realizada con exito";
	return OK;
}

TipoRetorno ImprimirTextoIncorrecto(){
	if(L->sig==NULL){
		cout << " Texto vacio" << endl;
		infoRetorno= " Operacion realizada con exito";
		return OK;
	}
	else{
		Texto aux=L;
		while(aux->sig!=NULL){
			cout << " " << aux->sig->numLinea << ": ";
			imprimirPalabrasIncorrectas(aux->sig);
			aux=aux->sig;
		}
		infoRetorno= " Operacion realizada con exito";
		return OK;
	}
}

TipoRetorno ImprimirUltimasPalabras(){
	char barra= 186;
	if(h->sig==NULL)
		cout << barra << "    No se ingresaron palabras                      " << barra << endl;
	else{
		Historial aux=h;
		int y=4;
		while(aux->sig!=NULL){
			cout << barra << "    " << aux->sig->pal;
			gotoxy(52,y);
			cout << barra;
			cout << endl;
			y++;
			aux=aux->sig;
		}
	}	
	printf("%c",200);
	for(int i=0; i<51; i++)
		printf("%c", 205);
	printf("%c\n",188);
	infoRetorno= " Operacion realizada con exito";
	return OK;
}
