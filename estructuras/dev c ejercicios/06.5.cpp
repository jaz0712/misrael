#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
//namespace std;
struct j /* Comienzo de definición del "patrón". */
{
int num; 
struct j *sgt;
};	/* Fin de definición del "patrón. */

int main()	/* Inicio de la función main() */
{
/* Declara la variable libros[NumElementos] de "tipo" librería */
struct j nodo1,nodo2,nodo3;

//int nodo1,nodo2,nodo3;

printf ("Int nodo 1: ");
scanf ("%d", &nodo1);
nodo1.sgt=&nodo2;
printf ("Int nodo 2: ");
scanf ("%d", &nodo2);
nodo2.sgt=&nodo3;
printf ("Int nodo 3: ");
scanf ("%d", &nodo3);
nodo3.sgt=NULL;


printf ("Nodo Numero:%d sgte:%d \n",nodo1.num,nodo1.sgt);
printf ("Nodo Numero:%d sgte:%d \n",nodo2.num,nodo2.sgt);
printf ("Nodo Numero:%d sgte:%d \n",nodo3.num,nodo3.sgt);
return 0;
}	

