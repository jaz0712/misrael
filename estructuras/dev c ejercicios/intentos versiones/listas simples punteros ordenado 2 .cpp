#include <iostream>
#include <stdio.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct len
	{
	int dato; 
	int sgte;  
	} 
lista[10];
int i=-1,j=0,opcion=1,x,tamvec=5,elemento,inicio=-1,a,b,p,contador=0,k;
void inicializa()
{
	inicio=-1;
	for(p=0;p<tamvec;p++)
	{
		lista[p].dato =-1;
		lista[p].sgte =-1;
	}
}
void menu()
{
	printf("MENU \n");
	printf("1. Adicionar elemento \n");
	printf("2. Eliminar Elemento \n");
	printf("3. Modificar Elemento \n");	
	printf("4. Mostrar Almacenamiento \n");
	printf("5. Mostrar Lista \n");
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
	while((b!=-1) and (lista[b].dato!= elemento))
	{
		a=b;
		b=lista[b].sgte;
	};
}
void buscarUH()
{
	j=0;	
	p=inicio;
	k=contador;
	while(k>0)
	{
		j=p;
		p=lista[p].sgte; 
		k--;
	};
}
void buscarLugar()
{
	j=0;	
	p=inicio;
	k=contador;
	while(k>0 and lista[i].dato<elemento)
	{
		j=p;
		p=lista[p].sgte; 
		k--;
	};
}
void ordenar() 
{ 
    p = inicio; 

    if (p == -1) 
    { 
        printf("n La lista a mostrar esta vacia "); 
        return; 
    } 
    printf("n Elementos de la lista enlazada desde el comienzo : "); 

    while (lista[p].sgte != -1) 
    { 
        printf(" %d ",  lista[p].dato); 
        p = lista[p].sgte;  
    } 
    printf(" %d ", lista[p].dato);  
} 
void buscavacio()
{
	i=0;
	while(lista[i].dato!=(-1))
	{
		i++;
	};
}
void altas()
{
	if(contador<tamvec)
	{
		//buscarUH();
		buscarLugar();
		buscavacio();
		if (i==j) inicio=i;
		printf("Introduce el nuevo dato:");
		scanf("%d",&lista[i].dato);
		lista[j].sgte=i;
		lista[i].sgte=-1;
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
	scanf("%d",&elemento);
	buscar();
	if(b==-1)
	{
		printf("ELEMENTO NO ENCONTRADO");
	}
	else
	{
		if(b==inicio)
		{
			buscarUH();
			inicio=lista[b].sgte;
			lista[j].sgte=lista[b].sgte;
		}
		else
		{
			lista[a].sgte=lista[b].sgte;
		}
		contador--;
		lista[b].dato=-1;
		lista[b].sgte=-1;
	}
}

void modificar()
{
	printf("Introducir el elemento a modificar:");
	scanf("%d",&elemento);
	buscar();
	if(b==-1)
	{
		printf("ELEMENTO NO ENCONTRADO");
	}
	else
	{
		printf("Introduce el nuevo dato (modificado):");
		scanf("%d",&lista[b].dato);
	}
}
void mostrar_alma()
{ int y;
	for(y=0;y<tamvec;y++)
	{
		printf("Lista[%d].dato=%d, Lista[%d].sgte=%d \n ",y,lista[y].dato,y,lista[y].sgte);	
	}
}
void mostrar_lista()
{
	p=inicio;
	k=contador;
	while(k>0)
	{
		printf(" lista[%d] dato=%d   Sgte->lista[%d] \n",p,lista[p].dato,lista[p].sgte);
		p=lista[p].sgte;
		k--;
	};
}
int main() {
	    inicializa();
		menu();
		do{
			leeopcion();
			switch(opcion)
			{
				case 1: printf("1. ADICIONAR_LISTA\n");altas();break;
				case 2: printf("2. ELIMINAR_LISTA\n");bajas();break;
				case 3: printf("3. MODIFICAR_LISTA\n"); modificar();break;
				case 4: printf("4. MOSTRAR_ALMACENAMIENTO\n"); mostrar_alma();break;
				case 5: printf("5. MOSTRAR_LISTA\n"); ordenar();break;
					}
		}while (opcion !=0);
		printf("Hasta LUego");
	return 0;
}
