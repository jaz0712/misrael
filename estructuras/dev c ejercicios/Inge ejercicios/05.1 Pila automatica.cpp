#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
#define PILASIZE 100
 
struct pila{
	int top;
	int items[PILASIZE];
};

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

//eliminar pop
int pop(struct pila*pp){
	if(empty(pp)){
		printf("subdesbordamiento");
		exit(1);
		
	}
	return (pp->items[pp->top--]);
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
//PILA simple automatica
