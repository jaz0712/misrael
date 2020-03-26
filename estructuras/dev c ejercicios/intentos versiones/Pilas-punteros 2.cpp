#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
// Con estos dos #define y el siguiente typedef se crea un tipo l?gico (booleano).
#define V 1
#define F 0
 
typedef char logico;
 
// Se define al mismo tiempo un tipo nodo que es una estructura.
typedef struct nodo{
    int elem;
    struct nodo *p_sig;
}NODO;
 
typedef NODO *PILA;	// Se define un tipo pila que no es m?s que del tipoo nodo definido anteriormente.
 
 
 
void inicializar_pila (PILA *p)
{
    *p = NULL;
}
 
 
 
logico es_pila_vacia (PILA *p)
{
    /* Eval?a si el puntero p tuiene un valor NULL y devuelve el resultado (0 ? 1) que 
       equivaldr?a a V o F por eso el tipo l?gico definido anteriormente es un char. */
 
    return (*p == NULL);	
}
 
 
 
void apilar (PILA *p,int dato)
{
    NODO *aux;
 
    aux = (NODO *) malloc(sizeof(NODO));	// Reserva de memoria.
    aux->elem = dato;
    aux->p_sig = *p;		// Apunta a la cima de la pila
    *p = aux;			// Apunta al nuevo nodo que es ahora la cima de la pila
 
}
 
 
 
int desapilar (PILA *p)
{
    NODO *aux;
    int dato;
 
    aux = *p;		// El nodo apunta a la cima de la pila
    (*p)->p_sig = *p;	// El segundo nodo de la pila pasa a ser la cima
    dato = aux->elem;
    free(aux);		// Borra el nodo.
    return(dato);
}
