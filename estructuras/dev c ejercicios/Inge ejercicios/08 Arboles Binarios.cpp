#include <iostream>
#include <stdlib.h>
int	raiz=0,tamVector=10,vacio=0,opcion=1;
int	contador=0,elemento,aqui=0,vizq,vder;
int rem,antrem,p;
struct nodo {
int dato; 
int der;
int izq;
} arbol[10];
void leeopcion()
{
	printf(" Opcion-> ");
	scanf("%d",&opcion);
}
void inicializa(){
	raiz=0;
	contador=0;
	for(int i=0;i<tamVector;i++){
		arbol[i].dato=0;
		arbol[i].izq=0;
		arbol[i].der=0;
	}

}
void buscavacio()
{
	vacio=1;
	while (arbol[vacio].dato!=0){
		vacio++;
	}
}
void izqder(){
	rem=aqui;
	antrem=aqui;
	p=arbol[aqui].izq;
	while(p!=0){
		antrem=rem;
		rem=p;
		p=arbol[p].der;
	}
}
void buscaLugar()
{
	printf("Busca inicio aqui=%d   raiz=%d \n",aqui,raiz);
	int p=raiz;
	aqui=raiz;
	while(p!=0)
	{
		aqui=p;
		if(elemento>arbol[p].dato)
		{
			p=arbol[p].der;
		}
		else{
			p=arbol[p].izq;
		}
		
		printf("Buscando aqui=%d   raiz=%d \n",aqui,raiz);
	}
		
		printf("Buscando ultima =%d   raiz=%d \n",aqui,raiz);
}
void altas()
{
if(contador<tamVector)
	{
	
		buscavacio();
		printf("Introduce el nuevo datos: \n");
		scanf("%d",&elemento);
		arbol[vacio].dato=elemento;
		if (contador==0 )
		{
			
				raiz=vacio;
			arbol[0].dato=raiz;
		}
 		else
		{
			printf("Entro aqui=%d   vacio=%d \n",aqui,vacio);
			buscaLugar();//lugar  aqui
			printf("aqui=%d   vacio=%d \n",aqui,vacio);
			if (elemento>arbol[aqui].dato) {
			arbol[aqui].der=vacio;
			}
			else
			{
				arbol[aqui].izq=vacio;
			}
			
		}
	
	 	contador++;
	}
	else
	{
		printf("memoria llena\n");
	}
}
	void mvec()
	{
		printf("ALMACENAMIENTO\n");
		for (int i=0;i<tamVector;i++){
				printf("Arbol[%d].izq=|%d|   Arbol[%d].dato=|%d|   Arbol[%d}.der=|%d|\n",i,arbol[i].izq,i,arbol[i].dato,i,arbol[i].der);	
		}
	
	}
void busca(){
	rem=aqui;
	antrem=aqui;
	p=arbol[aqui].izq;
while(p!=0){
	antrem=rem;
	rem=p;
	p=arbol[p].der;
}
}
void sacar(){
	contador--;
	izqder();
	if(arbol[aqui].izq==rem){
		if(arbol[rem].der==0){
		arbol[aqui].izq=arbol[rem].izq;
		antrem=0;
		rem=0;
		}
		if(aqui=rem){
			arbol[antrem].der=arbol[aqui].der;
			antrem=0;
			rem=0;
		}
		
	}
}
void bajas(){
	printf(" elemento-> ");
	scanf("%d",&elemento);
	busca();
		while(elemento==arbol[aqui].dato){
		if	(elemento==arbol[aqui].dato){
			sacar();
		}
		else{
			printf(" elemento no encontrado ");	
		}
	}
}
void InOrden(int p){
	if(p!=0){
		InOrden(arbol[p].izq);
	printf(	"%d",arbol[p].dato);
		InOrden(arbol[p].der);
	}
}
void PreOrden(int p){
	if(p!=0){
		printf(	"%d",arbol[p].dato);
		PreOrden(arbol[p].izq);
		PreOrden(arbol[p].der);
	}
}
	void menu()
{
	printf("MENU \n");
	printf("1. Adicionar elemento \n");
printf("2. Eliminar Elemento \n");
//	printf("3. Modificar Elemento \n");	
//	printf("4. Mostrar Almacenamiento \n");
	printf("5. Mostrar Lista \n");
	printf("0. Salir \n");
}	
	int main() {
	    inicializa();
		menu();
		do{
			leeopcion();
			switch(opcion)
			{
				case 1: altas();break;
				//case 2: verArbol(arbol, 0);break;
				case 5: mvec();break;
					}
		}while (opcion !=0);
		printf("Hasta LUego");
	return 0;
}
