#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
//namespace std;
struct nodo /* Comienzo de definición del "patrón". */
{
int dato; 
int *sgt;
};
int main(int argc, char *argv[]) {

	int op=1,x,i=0,j;
		struct nodo lista[10];
	do{
        printf("Menu \n");
        printf("1.Adicionar \n");
        printf("2.Mostrar \n");
        printf("0. Salir \n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: 
			
			  j = i++;
			   printf("Introducir dato->");
                    scanf("%d",&lista[i].dato );
                    lista[i].sgt=NULL;
                     if (i!=0)
                {
                  lista[j].sgt=&lista[i].dato;
                                                    
                }
			break;
            case 2:
			        for ( i = 0; i < 5; i++)
            {
			 printf("Nodo Numero:%d sgte:%d \n"  ,  lista[j].dato,lista[i].sgt);
       }
		    break;
            case 0: printf("bye");
			break;
            default: printf("Opcion inexistente");
		}
}    while(op!=0);
    printf("Gracias por utilizar este programa");
	return 0;
}
