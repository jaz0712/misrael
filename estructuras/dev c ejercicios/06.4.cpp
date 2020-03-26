      #include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
//namespace std;
struct j /* Comienzo de definición del "patrón". */
{
int *si,num; 

};	/* Fin de definición del "patrón. */

int main()	/* Inicio de la función main() */
{
/* Declara la variable libros[NumElementos] de "tipo" librería */
struct j nodo; 
int x;

/* Se captura la información de n libros */ 
printf ("Int Numero: ");
scanf ("%d", &x);
nodo.num =x;
nodo.si=&x;
printf ("Nodo Numero:%d sgte:%d",nodo.num,nodo.si);

/*printf ("\n\t\NODO %d:\n", num); 
printf ("\n\t\NODO %d:\n", sig); 
puts("Titulo del libro");	/* Imprime en pantalla */ 
/*/*gets(li.nom_lib);	/* Lee datos del teclado */ 
/*puts("Apellidos del autor");
gets(li.aut.ape); puts("Nombre del autor"); 
gets(li.aut.nomb); puts("Modulo:"); 
gets(li.tem.modulo);
puts("Area de conocimiento"); 
gets(li.tem.area);*/

return 1;
}	/* Fin de la funcion main() y del programa */

