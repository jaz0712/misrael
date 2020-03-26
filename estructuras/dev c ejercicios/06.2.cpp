#include <stdio.h> #include <conio.h>
struct autor	/* Declara GLOBALMENTE autor */{ 
+char nomb[25];
char ape[35];
};
struct tema	/* Declara GLOBALMENTE tema */{ 
char modulo[4];
char area[20];
};
/* Estructura "libros" que anida las estructuras "autor"y "tema".
La declaración es también GLOBAL. */ 
struct libros{
char nom_lib[70];
 struct autor aut;
  struct tema tem;
};
int main(){
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
// Estructura....................,lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk}



