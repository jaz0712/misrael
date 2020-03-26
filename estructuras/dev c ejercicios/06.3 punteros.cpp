#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
//namespace std;
struct libreria	/* Comienzo de definición del "patrón". */
{
char titulo[100]; 
char autor[75];
unsigned long precio;
};	/* Fin de definición del "patrón. */

int main()	/* Inicio de la función main() */
{
/* Declara la variable libros[NumElementos] de "tipo" librería */
struct libreria libros[10]; 
int *n,nn, *i,ii;
 nn=0;
	ii=0;
 n=&nn;
	i=&ii;
/* Se captura la información de n libros */ 
printf ("Cuantos libros: \n");
scanf ("%d", n);
	fflush(stdin);
//for (i=0; i<n; i++)
for (*i=ii;*i<=*n;(*i)++)
{
 
printf ("\n\t\tLibro %d:\n", *i+1); 
puts("Titulo : ");
gets (libros[*i].titulo);
	fflush(stdin);
	 puts("Autor : ");
gets (libros[*i].autor);	
fflush(stdin); puts("Precio : ");
scanf ("%ul", &libros[*i].precio);
	fflush(stdin);
} /* del for */
return 1;
}	/* Fin de la funcion main() y del programa */

