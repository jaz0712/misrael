#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};



void MenuColas();
void pushcola(Nodo *&,Nodo *&,int&);
void popcola(Nodo *&,Nodo *&,int &);
bool colaVacixa(Nodo *);
void popcol(Nodo *&,Nodo *&,int&);
void MostrarCola(Nodo *&,Nodo *&);


int main(int argc, char** argv) {
	MenuColas();
	return 0;
}

void MenuColas()
{
    int n,dato;
    printf("\n\n1. Agregar elemento\t2.Mostar\t3. Borrar\t4. Borrar Todo\t");
    printf("Opcion: ");
    scanf("%i",&n);
    switch(n)
    {
    case 1:
        printf("Elemento: ");
        scanf("%i",&dato);
        pushcola(frente,fin,n);
        break;
    case 2:
        MostrarCola(frente,fin);
        break;
    case 3:
        popcol(frente,fin,dato);
        break;
    case 4:
        popcola(frente,fin,dato);
        break;
    
    }

}

bool colaVacia(Nodo *frente)
{
    return (frente==NULL)?true:false;
}

void pushcola(Nodo *&frente,Nodo *&fin,int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo ->dato = n;
    nuevo_nodo -> siguiente=NULL;
    if(colaVacia(frente)){
    frente=nuevo_nodo;
    }else{
    fin -> siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    printf("El dato %d se agrego correctamente a la Cola\n",n );
    MenuColas();
}

void MostrarCola(Nodo *&frente,Nodo *&fin)
{
    Nodo *nuevo_colas=frente;
    if(frente==NULL)
    {
        printf("La cola esta vacia \n");
    }else if(nuevo_colas !=NULL)
    {
        while(nuevo_colas !=NULL)
        {
            printf("->%d\n",nuevo_colas->dato);
            nuevo_colas=nuevo_colas->siguiente;
        }
    }
    MenuColas();

}

void popcol(Nodo *&frente,Nodo *&fin,int &n)
{
    if(frente==NULL)
    {
        printf("La cola esta vacia\n");
    }else
    {
    n=frente->dato;
    Nodo *aux = frente;
    if(frente == fin){
    frente = NULL;
    fin = NULL;
    }else{
    frente = frente -> siguiente;
    }
    printf("dato %d eliminado\n",aux->dato);
    delete aux;
    }
    MenuColas();
}



void popcola(Nodo *&frente,Nodo *&fin,int &n)
{
    while(frente==NULL)
    {
        n=frente->dato;
         Nodo *aux = frente;

         if(frente == fin){
         frente = NULL;
         fin = NULL;
         }else{
         frente = frente -> siguiente;
         }
         printf("Dato %d eliminado...\n",aux->dato);
         delete aux;
    }
    MenuColas();

}
