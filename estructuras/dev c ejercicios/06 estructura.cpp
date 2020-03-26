      #include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
struct autor //declara glovalmente autor//
        {
        	char nomb[25];
        	char area[35];
		};
		struct tema	/* Declara GLOBALMENTE tema */{ 
		char modulo[4];
		char area[20];
};
struct libros{
char nom_lib[70]; 
struct autor aut; 
struct tema tem;
};

int main(int argc, char *argv[]) {
/*struct cuenta {
            char apellidos[35];
             char nombres[25];
             char direccion[40];
             char telefono[7];
            float saldo;
            float debe;
        };*/
        
/* Estructura "libros" que anida las estructuras "autor"y "tema".
La declaración es también GLOBAL. */ 

struct libros li;	/* Declara li del tipo libros */
//clrscr();		/* Borra la pantalla */ 
puts("Titulo del libro");	/* Imprime en pantalla */ 
gets(li.nom_lib);	/* Lee datos del teclado */ 
puts("Apellidos del autor");
gets(li.aut.ape); puts("Nombre del autor");
gets(li.aut.nomb); puts("Modulo:");
 gets(li.tem.modulo);
puts("Area de conocimiento"); 
gets(li.tem.area);
return 1;
}


