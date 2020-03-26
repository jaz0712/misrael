#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
#define PILASIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct pila{
	int top;
	int items[PILASIZE];
};

int mainn(void) {
	
	
int op=0;
do{
system("cls");
printf(":::MENU::: \n");
printf("1. Vaciar cola \n");
printf("2. Altas \n");
printf("3. Bajas \n");
printf("4. Mostrar pila \n");
printf("5. Mostrar cola \n");
printf("0. Salir \n");
printf("Opcion:  \n");
scanf("%d",&op);
switch(op){
case 1:
		system("cls");
		break;
case 2:
		system("cls");
		struct pila *pp;
		int elemento;
			if(pp->top==PILASIZE-1){
		printf("subdesbordamiento");
		exit(1);
		}
		else
		pp->items[++(pp->top)]=elemento;
			printf("se agrego el elemento %d \n",elemento);

			getch();
		break;
case 3:
		system("cls");
		struct pila *pp;
		if(empty(pp)){
		printf("subdesbordamiento");
		exit(1);
		
	}
	return (pp->items[pp->top--]);
			getch();
		break;
		case 4:
		system("cls");
		 for (i =tope-1; i >= 0; i--)
            {
               
                	printf("se agrego el elemento %d \n",pila[i]);
            }
			getch();
		break;
		case 5:
		system("cls");
	 for (i = 0; i < 9; i++)
            {
              
                	printf("se agrego el elemento %d \n",pila[i]);
            }
			getch();
		break;
default:
		system("cls");
		printf("error");
		getch();
		break;
			}	
}while(op!=0);
}
//return 0;

//Prototipo de funciones
bool empty(struct pila *pp);
int pop(struct pila *pp);
void push (struct pila *pp,int);

int main(){
	int resultado;
	struct pila p;
	p.top =-1;//definiendo que la pila esta vacia

push(&p,10);
push(&p,20);
push(&p,30);
push(&p,40);
push(&p,50);
push(&p,60);

int res=pop(&p);
printf("Se elimino el elemento %d",res);
return 0;
}
bool empty (struct pila *pp)
{
	if(pp->top==-1){
	
	return true;
	}else
	{
	return false;
}
}
//insertar push
	void push(struct pila *pp,int elemento){
		if(pp->top==PILASIZE-1){
		printf("subdesbordamiento");
		exit(1);
		}
		else
		pp->items[++(pp->top)]=elemento;
			printf("se agrego el elemento %d \n",elemento);
	
	}
	//eliminar pop
int pop(struct pila*pp){
	if(empty(pp)){
		printf("subdesbordamiento");
		exit(1);
		
	}
	return (pp->items[pp->top--]);
	}
