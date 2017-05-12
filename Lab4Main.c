#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char const *argv[])
{
	nodo *raiz=NULL;
	nodo *temp;
	int datos[]={4,2,3,1,6,7,5},i,numB,peso;
	for (i=0;i<7;i++){
		raiz=insertar(raiz,datos[i]);
	}
	printf("\nRecorrido pre-orden");
	preOrden(raiz);
	printf("\n");
	printf("\nRecorrido in-orden");
	inOrden(raiz);	
	printf("\n");
	printf("\nRecorrido pos-orden");
	posOrden(raiz);
	printf("\nIngrese un elemento para buscarlo en el arbol: ");
	scanf("%d",&numB);
	temp=buscar(raiz,numB);
	if(temp==NULL){
		printf("\nEl elemento ingresado no se encontro en el arbol");
	}
	else{
		printf("\nEl elemento ingresado si se encontro en el arbol");
	}
	int altura=alturaAB(raiz);
	printf("\n\nLa altura del arbol es: %d",altura);
	int hojas=contarHojas(raiz);
	printf("\n\nLas hojas del arbol son: %d",hojas);
	peso=calcularPeso(raiz);
	printf("\n\nEl peso del arbol es: %d",peso);
	int sumaN=Suma_nodos(raiz);
	printf("\n\nLa suma de todos los nodos es: %d",sumaN);
	int profu=Profundidad(raiz);
	printf("\n\nLa profundidad del arbol es: %d",profu);


	return 0;
}