#include "Diccionario.h"

TipoRetorno IngresarPalabraDiccionario(Cadena palabraAIngresar){
	return NO_IMPLEMENTADA;
}

TipoRetorno BorrarPalabraDiccionario(Cadena palabraABorrar){
	return NO_IMPLEMENTADA;
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
