//Jasmani Israel Martinez Zamorano
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
//namespace std;
int inicio=-1,elemento;
int tamVector=5,contador=0,*con;
int op=0,vacio=-1,ult=0,p=0,a,s,*ultimo;
struct nodo /* Comienzo de definición del "patrón". */{
int dato; 
int sgt;
int ant;
} lista[5];
void inicializa(){
	inicio=-1;
	contador=0;
	for(p=0;p<tamVector;p++){
		lista[p].dato=-1;
		lista[p].sgt=-1;
		lista[p].ant=-1;
	}

}
void buscar_vacio (){
	//i=0;
	vacio=0;
	while(lista[vacio].dato!=(-1)){
		vacio++;
	}
}
void buscar(){
//j=inicio;
	p=inicio;
	while(p!=-1 and lista[p].dato!=elemento){
	//i=j;
		p=lista[p].sgt;
	}	
}
void buscar_ult(){
//	int *ultimo;
	p=inicio;
	ult=0;
	ultimo=&ult;
	while(p!=(-1)){
		ultimo=&p;
		p=lista[p].sgt;
	}
}

void buscaLugar()
{
	ult=0;	
	p=inicio;
	while(p!=(-1) && lista[p].dato<elemento)
	{
		ult=p;
		p=lista[p].sgt;
	}
}

void MLista(){
	p=inicio;
	while(p!=(-1))
	{
		printf("[%d]<--Anterior   DATO=%d en lista[%d]     Siguiente-->[%d] \n ",lista[p].ant,lista[p].dato,p,lista[p].sgt);
		p=lista[p].sgt;
	}
}
void altas(){
	if(contador<tamVector)
	{
		//buscarUH();
	buscar_vacio();
		printf("Introduce el nuevo datos: \n");
		scanf("%d",&elemento);
		lista[vacio].dato=elemento;
		if (contador==0 ) 
		{
			inicio=0;
			lista[vacio].sgt=-1;
		}
		else
		{
			buscaLugar();//lugar entre j y p
			if (ult==p) {
			inicio=vacio;
			lista[vacio].sgt=p;}
			else
			{
			lista[ult].sgt=vacio;
			lista[vacio].sgt=p;
			}
			
		}
		contador++;
	}
	else
	{
		printf("lista llena\n");
	}
} 
void MLista2(){
//	p=5;
//	printf(" p: %d",p);
p=ult;
	while(p!=(-1))
	{
		printf("[%d]<--Anterior   DATO=%d en lista[%d]     Siguiente-->[%d] \n ",lista[p].ant,lista[p].dato,p,lista[p].sgt);
		p=lista[p].ant;
	}
}
void MAlma(){
	for(p=0;p<tamVector;p++)
	{
		printf("lista[%d]<--Anterior   lista[%d].DATO=%d     Siguiente-->lista[%d] \n ",lista[p].ant,p,lista[p].dato,lista[p].sgt);
	}
}

void bajas_primero(){

	  if (contador>0)
	  {
	  	
	  	printf("Elemento a eliminar:");
	  	scanf("%d",&elemento );
      	buscar();// p es el encontrado si no esta en -1
      	if (p==-1)
      	{
      		printf("Elemento no encontrado \n");
	  	}
	  	else
	  	{
	  		a=lista[p].ant;
	  		s=lista[p].sgt;
	  		lista[a].sgt=lista[p].sgt;
	  		lista[s].ant=lista[p].ant;
	  		lista[p].dato=-1;
	  		contador--;
	  			if(p==inicio){
				inicio=lista[p].sgt;
	 			}
	  }
}
	  else
	  {
	  	printf("Lista Vacia");
	  }

}
void modifica(){
	  if (contador>0)
	  {
	  	
	  	printf("Elemento a modificar:");
	  	scanf("%d",&elemento );
      	buscar();
      	if (p==-1)
      	{
      		printf("Elemento no encontrado \n");
	  	}
	  	else
	  	{
	  		printf("Elemento nuevo:");
	  		scanf("%d",&elemento );
	  		lista[p].dato=elemento;
	 	}
	  }
	  else
	  {	printf("Lista Vacia");
	  }
}
int main() {
 
	inicializa();	
	do{
        printf("Menu \n");
        printf("1.ALTAS \n");
        printf("2.BAJAS \n");
        printf("3.MODIFICACION \n");
        printf("4.LISTADO ASCENDENTE \n");
        printf("5.LISTADO DESCENDENTE \n");
        printf("6.LISTADO DE ALMACENAMIENTO \n");
        printf("0. Salir \n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: altas();
					break;
			case 2: bajas_primero(); 
					break;
	        case 3: modifica();  			     
					break;
			case 4: MLista();
			    	break;
			case 5: MLista2();
			    	break;
			case 6: MAlma();
			    	break;
            case 0: printf("bye");
			break;
            default: printf("Opcion inexistente");
		}
}    while(op!=0);

    printf("Gracias por utilizar este programa");
	return 0;
}

