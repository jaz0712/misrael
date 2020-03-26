// ConsoleApplication3.cpp: define el punto de entrada de la aplicaci?n de consola.
//

//#include <stdafx.h>
#include "windows.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <String.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct fer
{
	char dato; 
	int sgte;  
} lista[10];
char elemento,lee[20];
int j=0,opcion=1,x,tamvec=5,inicio=-1,a,b,p,contador,vacio,ult;
void inicializa()
{
	inicio=-1;
	for(p=0;p<tamvec;p++)
	{
		lista[p].dato =NULL;
		lista[p].sgte =-1;
	}
}
void menu()
{
	printf("MENU \n");
	printf("1. Adicionar elemento \n");
	printf("2. Eliminar Elemento \n");
	printf("3. Modificar Elemento \n");	
	printf("4. Mostrar Lista \n");
	printf("5. Mostrar Almacenamiento \n");
	printf("0. Salir \n");
}	
void leeopcion()
{
	printf("Opcion-> ");
	scanf("%d",&opcion);
}
void buscar()
{
	b=inicio;
	while((b!=-1) && (lista[b].dato!= elemento))
	{
		a=b;
		b=lista[b].sgte;
	};
}
void buscarUH()
{
	j=0;	
	p=inicio;
	while(p!=(-1))
	{
		j=p;
		p=lista[p].sgte;
	};
}
void buscaLugar()
{
	j=0;	
	p=inicio;
	while(p!=(-1) && lista[p].dato<elemento)
	{
		j=p;
		p=lista[p].sgte;
	};
}
void buscavacio()
{
	vacio=0;
	while(lista[vacio].dato!=NULL)
	{
		vacio++;
	}
}
void altas()
{
	if(contador<tamvec)
	{
		//buscarUH();
		buscavacio();
		printf("Introduce el nuevo dato:");
		scanf("%c",&elemento);
		printf("es %s",elemento);
		//gets_s(lee);
		//elemento=lee[1];
		printf("string %s %s",lee,elemento);
		lista[vacio].dato=elemento;
		if (contador==0 ) 
		{
			inicio=0;
			lista[vacio].sgte=-1;
		}
		else
		{
			buscaLugar();//lugar entre j y p
			if (j==p) {inicio=vacio;lista[vacio].sgte=p;}
			else
			{
			lista[j].sgte=vacio;
			lista[vacio].sgte=p;
			}
			
		}
		contador++;
	}
	else
	{
		printf("lista llena\n");
	}
	}
void bajas()
{
	printf("Introducir el elemento a eliminar:");
	elemento=getchar();elemento=getchar();
	buscar();
	if(b==-1)
	{
		printf("ELEMENTO NO ENCONTRADO");
	}
	else
	{
		if(b==inicio)
		{
			inicio=lista[b].sgte;
		}
		else
		{
			lista[a].sgte=lista[b].sgte;
		}
		contador--;
		lista[b].dato=NULL;
		lista[b].sgte=-1;
	}
}

void modificar()
{
	printf("Introducir el elemento a modificar:");
	elemento=getchar();
	buscar();
	if(b==-1)
	{
		printf("ELEMENTO NO ENCONTRADO");
	}
	else
	{
		printf("Introduce el nuevo dato (modificado):");
		lista[b].dato=getchar();
	}
}
void mostrar_alma()
{ int y;
	for(y=0;y<tamvec;y++)
	{
		printf("Lista[%d].dato=%s, Lista[%d].sgte=%d \n ",y,lista[y].dato,y,lista[y].sgte);	
	}
}
void mostrar_lista()
{
	p=inicio;
	while(p!=(-1))
	{
		printf(" Posicion=Lista[%d] DATO=%s   Siguiente-->Lista[%d] \n",p,lista[p].dato,lista[p].sgte);
		p=lista[p].sgte;
	};
}
int _tmain()
{
	    inicializa();
		menu();
		do{
			leeopcion();
			switch(opcion)
			{
				case 1: printf("ADICIONA EN LA LISTA\n");altas();break;
				case 2: printf("ELIMINA EN LA LISTA\n");bajas();break;
				case 3: printf("MODIFICA EN LA LISTA\n"); modificar();break;
				case 4: printf("LISTADO\n"); mostrar_lista();break;
				case 5: printf("ALMACENAMIENTO\n"); mostrar_alma();break;
					}
		}while (opcion !=0);
		printf("Hasta LUego");
	return 0;

}


