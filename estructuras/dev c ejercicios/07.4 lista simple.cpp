#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <iostream>
//namespace std;
int inicio=-1,elemento;
int tamVector=5,contador=0;
int op=0,x,i=-1,j=0,p=0;
struct nodo /* Comienzo de definición del "patrón". */{
int dato; 
int sgt;
};
struct nodo lista[5];
void inicializa(){
	inicio=-1;
	for(p=0;p<tamVector;p++){
		lista[p].dato=-1;
		lista[p].sgt=-1;
	}

}
void buscar_vacio (){
	i=0;
	while(lista[i].dato!=(-1)){
		i++;
	}
}
void buscar(){
j=inicio;
while(j!=-1 and lista[j].dato!=elemento){
	i=j;
	j=lista[j].sgt;
}	

}
void buscar_ult(){
	p=inicio;
	j=0;
	while(p!=(-1)){
		j=p;
		p=lista[p].sgt;
	
	}

}
void altas(){
	
	if(contador<tamVector){
		
		buscar_ult();// devuelve en j
		
		buscar_vacio();// devuelve en i
		
		if(i==j) inicio=i;
		printf("Introducir un numero:");
		scanf("%d",&lista[i].dato);
		lista[j].sgt=i;
		lista[i].sgt=-1;
		contador ++;
		
	}
	else{
			printf("Lista llena \n");
	}

}
int MLista(){
	p=inicio;
	while(p!=(-1)){
   printf(":::%i\n",lista[p].dato);	
	printf(":::%i\n",lista[p].sgt);
	p=lista[p].sgt;
	}
	return 0;
}
void MAlma(){
	
	for(int p=0;p<tamVector;p++){
	   printf(":::%i\n",lista[p].dato);	
	printf(":::%i\n",lista[p].sgt);	
	}
}
void bajas(){
	  if (contador<=0)
	  {
	  		printf("Lista Vacia");
	  }
	  else
	  {
	  	printf("Elemento a eliminar:");
	  	scanf("%d",&elemento );
      	buscar();//devuelve en  j el lugar del elemento, i=anterior a j
      	if (j==-1)
      	{
      		printf("Elemento no encontrado \n");
	  	}
	  	else
	  	{
	  		if (j== inicio) { inicio=lista[j].sgt;}
	  		else { lista[i].sgt=lista[j].sgt;	  }
	  		contador --;
	        lista[j].dato=-1;
			lista[j].sgt=-1;     
	  	}
	  }
}
void modifica(){
	  if (contador<=0)
	  {
	  		printf("Lista Vacia");
	  }
	  else
	  {
	  	printf("Elemento a modificar:");
	  	scanf("%d",&elemento );
      	buscar();//devuelve en  j el lugar del elemento, i=anterior a j
      	if (j==-1)
      	{
      		printf("Elemento no encontrado \n");
	  	}
	  	else
	  	{
	  		printf("Elemento nuevo para modificar:");
	  		scanf("%d",&lista[j].dato );
	  	}
	  }
}
int main() {
  printf("Meeeeeeeeeeenu \n");
	inicializa();	
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
            case 1: altas();
					break;
			case 2: bajas(); 
					break;
	        case 3: modifica();  			     
					break;
//            case 4:
//            	      printf("opcion 4 \n");
	MAlma();
//            //	MLista();
////			        for (int c = 0; c <=i; c++)
////            {
////			 printf("Nodo Numero:%d sgte:%d \n"  ,  lista[c].dato,lista[c].sgt);
////       }
//		    break;
            case 0: printf("bye");
			break;
            default: printf("Opcion inexistente");
		}
}    while(op!=0);

    printf("Gracias por utilizar este programa");
	return 0;
}

