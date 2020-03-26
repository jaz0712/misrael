//#include <condefs.h>
#include 
#include <conio.h>
/*
ListaLineal con ordenacion de entradas
*/

struct tR
{
char sDatos[22];
struct tR *pSiguiente;
};

void insertar ( tR **pLista , char sDatos[] );
void ListarLista( tR *pCabecera );

void main ()
{
struct tR *pLista;
pLista = NULL;
char sNombre[22];

for (;; )
{
printf("Dame un nombre, * para salir: ");
scanf ("\n%s", &sNombre );

if( strcmpi( sNombre , "*" ) != 0 )
insertar ( &pLista, sNombre );
else
break;
}


ListarLista(pLista);
getch();
}

void insertar( tR **pLista , char sDatos[] )
{
struct tR *pActual;
struct tR *pAnterior;
struct tR *pNueva;


pNueva = (struct tR *) malloc( sizeof (struct tR )); // se crea la caja de la nueva entrada
strcpy( pNueva->sDatos,sDatos); // se le añande el campo nombre

pAnterior = pActual = *pLista;
while ( pActual != NULL && strcmp( pActual->sDatos,sDatos) < 0 ) // recorremos las cajas buscando el sitio
{
pAnterior = pActual;
pActual = pActual->pSiguiente;
}


if ( pAnterior == NULL || pAnterior == pActual)// si cumple va antes q la ultima caja comprovada
{
    pNueva->pSiguiente = pAnterior;
    *pLista = pNueva;               //si se situa antes se cambia la cabecera para no perder la anterior
}

else      // si no cumple va en medio de la ultima y la anterior, o detras d la ultima
{
    pNueva->pSiguiente = pActual;
    pAnterior->pSiguiente = pNueva;
}
}
void ListarLista( struct tR *pCabecera )
{
struct tR *pActual;
int iFila = 5;

pActual = pCabecera;
clrscr();
gotoxy( 2,5);
printf("LISTADO DE NOMBRES");

while( pActual )
{
gotoxy( 5, ++iFila );
if( iFila > 23 )
iFila = 5;
printf(" : %s ",pActual->sDatos );
pActual= pActual->pSiguiente;
}
gotoxy( iFila+2,24 );
printf( "Pulse una tecla para salir...." );
}
