#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
//namespace std;
struct nodo /* Comienzo de definición del "patrón". */
{
int dato; 
int sgt;
};
int main() {

	int op=1,x,i=-1,j;
		struct nodo lista[10];
	do{
        printf("Menu \n");
        printf("1.Adicionar \n");
        printf("2.Eliminar \n");
         printf("3.Modificar \n");
          printf("4.Mostrar Lista \n");
        printf("0. Salir \n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: 
			
			  j = i++;
			   printf("Introducir dato->");
                    scanf("%d",&lista[i].dato );
                    lista[i].sgt=-1;
                     if (i!=0)
                {
                 lista[j].sgt=i;
                                                    
                }
			break;
			     case 2: 
			
			  j = i++;
			   printf("posicion a eliminar->");
                    scanf("%d",&x );
                    lista[x].dato=-1;
                    lista[x].sgt=-1;
                    
			break;
			     case 3: 
			
			 
			break;
            case 4:
			        for (int c = 0; c <=i; c++)
            {
			 printf("Nodo Numero:%d sgte:%d \n"  ,  lista[c].dato,lista[c].sgt);
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
