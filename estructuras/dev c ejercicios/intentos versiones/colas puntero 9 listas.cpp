#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

struct nodo{

int corre;

char nom[80];

char tel[9];

char email[50];

struct nodo *sig;

};

typedef struct nodo *Lista;

Lista p, cabeza;

Lista getnodo();

void insafter(Lista p, char nom[80], char tel[9], char email[50], int i);

void eliminar (Lista p, int k);

void imprimir(Lista p);

main()

{

char nom[80], tel[9], email[50];

int k, opc=8, i=0;

//clrscr();

p=getnodo();

cabeza=p;

while(opc!=4)

{

printf("\t\t\nMENU PRINCIPAL\n\n\n");

printf("\t\t1. Registrar Nuevos Datos\n");

printf("\t\t2. Imprime todos los registros\n");

printf("\t\t3. Eliminar Datos\n");

printf("\t\t4.Salir\n");

scanf("%d", &opc);

switch(opc)

{

case 1: printf("Ingrese el Nombre:");

scanf("%s", &nom);

printf("Telefono:");

scanf("%s", &tel);

printf("e-mail:");

scanf("%s", email);

i++;

insafter(&p, nom, tel, email, i);

break;

case 2: printf("Listado de todos los registros\n\n");

imprimir(&p);

break;

case 3: printf("¨A quien desea eliminar?(ingrese el correlativo)\n");

scanf("%d", &k);

eliminar(&p, k);

break;

}

clrscr();

}

return 0;

}

Lista getnodo()

{

Lista p;

p=(Lista)malloc(sizeof(struct nodo));

if(p==NULL)

printf("Memoria Insuficiente\a\n");

return p;

}

void insafter(Lista p, char nom[80], char tel[9], char email[50], int i)

{

Lista q;

if(p==NULL)

printf("ERROR, lista vac¡a\n\a");

else

{

q=getnodo();

strcpy(q->nom, nom);

strcpy(q->tel, tel);

strcpy(q->email, email);

q->corre=i;

q->sig=p->sig;

p->sig=q;

p=p->sig;

}

}

void imprimir(Lista p)

{

Lista dir;

p=p->sig;

for(dir=p; dir!=NULL; dir=dir->sig)

{

printf("\n\t***********************************\n");

printf("\t correlativo: %d\n", dir->corre);

printf("\t Nombre %s\n", dir->nom);

printf("\t Telefono: %s\n", dir->tel);

printf("\t e-mail: %s\n", dir->email);

printf("\n\t***********************************\n");

getch();

}

}

void eliminar(Lista p, int k)

{

Lista indice;

cabeza=p;

for(indice=cabeza; indice!=NULL; indice=indice->sig)

{

 

if(indice->corre==k)

{

cabeza=cabeza->sig;

printf("%s est  hiciendo eliminado\n", indice->nom);

getch();

if(p==NULL || p->sig==NULL)

printf("ERROR, ya no hay m s datos\n");

else

{

cabeza->sig=indice->sig;

free(indice);

}

}

}

}
