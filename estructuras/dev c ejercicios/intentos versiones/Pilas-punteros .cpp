#include <stdio.h>
#include <stdlib.h>
 
typedef struct tipopila  // TYPEDEF  sirve para definir un tipo de dato durante el programa
{
int pdato;
struct tipopila *psig;
}tipopila;
 
tipopila *ptope;
/*Declaraci�n de funciones*/
tipopila *NuevoElem();
void push(int dato); // altas y envia un elemento como parametro
int pop(void);
void imprimir(tipopila *);
/*Fin de las declaraciones*/
 
 
/*******************************FUNCION MAIN*****************************/
 
main()
{
  char m;
  int k;
  puts("Anadir un elemento [A], borrar el ultimo elemento [B], listar todo [L] o salir [S]: "); // puts despleiga una cadena
  while(1){ //dar vueltas por siempre
  	printf("[A], [B], [L] o [S]: ");
  	m=getchar(); // getchar sirve para leer unn caracter
  	getchar();
 
  	switch(m){
  		case 'A': printf("Introduzca un elemento (n�mero): "); scanf("%d", &k); getchar(); push(k); break; // altas
  		case 'B': pop(); break; // bajas
  		case 'L': imprimir(ptope); break; //muestra la pila
  		case 'S': exit(0); // exit sirve para concluir un ciclo y termminarlo 
  		default: puts("\nSaliendo del programa...");
  
  		return 0;
  	}
  }
}
 
/**************************************************************************/
 
void push(int dato) /*A�ade un nuevo elemento a la pila*/
{ tipopila *q = NuevoElem(); // solicita un nuevo elemento que se obtendra de l a memoria con la forma de tipopila
q->psig = ptope;
q->pdato= dato;
ptope = q;
}
 
int pop(void) /*Esta funci�n "desecha" el �ltimo elemento introducido*/
{ tipopila *q; int x;
  if (ptope==NULL) { puts("Lista vac�a"); return EOF; }
  else{
  x = ptope->pdato;
  q = ptope;
  ptope = ptope->psig;
  printf("Se elimino ->%d \n",x);
  free(q); // devuelve a la memmoria el puntero eliminado
 
  return x;
}}
 
tipopila *NuevoElem() /*Crea un nuevo elemento. Atento: retorna un puntero*/
{ tipopila *q = (tipopila *)malloc(sizeof(tipopila)); // entrega un espacio de maemoria como puntero
  if (q==NULL) { printf("Falta memoria"); exit(0);}
  return q;
}
 
void imprimir(tipopila *ptope) /*Imprime todos los datos albergados en la pila hasta el momento*/
{
 printf("La pila es: \n");
 while(ptope!=NULL)
 {
 printf("%d \n", ptope->pdato);
 ptope = ptope->psig;
 }
 printf("\n");
}
