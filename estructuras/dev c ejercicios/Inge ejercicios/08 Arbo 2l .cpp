#include <iostream>
#include <stdlib.h>
int	raiz=0,tamVector=10,vacio=0,opcion=1,ant;
int	contador=0,elemento,aqui=0,vizq,vder,remp,antremp,p;
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

void buscaLugar()
{

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
		
	//	printf("Buscando aqui=%d   raiz=%d \n",aqui,raiz);
	}
		
	//	printf("Buscando ultima =%d   raiz=%d \n",aqui,raiz);
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
			
			buscaLugar();//lugar  aqui
			
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
void izder()
{
	remp=aqui;
	antremp=aqui;
	p=arbol[aqui].izq;
	printf("Antes del while a la izq--> anteremp=%d   remp=%d  p=%d\n",antremp,remp,p);

	while(p!=0)
	{
		antremp=remp;
		remp=p;
		p=arbol[p].der;
		printf("while a la derecha--> anteremp=%d   remp=%d  p=%d\n",antremp,remp,p);
	}
}
void sacar()
{

	izder();

	if (arbol[aqui].izq==remp)
	{
		if (arbol[remp].der=0)
		{
			arbol[aqui].izq=arbol[remp].izq;
			antremp=0;
			remp=0;
		}		
	}

	if(aqui==remp)
		{
			arbol[ant].der=arbol[aqui].der;
			antremp=0;
			remp=0;
		}

	arbol[antremp].der=arbol[remp].izq;
	arbol[aqui].dato=arbol[remp].dato;
	arbol[remp].dato=0;
	arbol[remp].der=0;
	arbol[remp].izq=0;
}
void Busca()
{
	p=raiz;
	aqui=raiz;
	ant=raiz;
	while (p!=0 && arbol[p].dato!=elemento)
	{
		ant=aqui;
		aqui=p;
		
		if (elemento>arbol[p].dato)
		{
			p=arbol[p].der;
		}
		else
		{
			p=arbol[p].izq;
		}
	}
	if (elemento==arbol[p].dato)
		{
			ant=aqui;
			aqui=p;
		}
	
}
void bajas()
{
	Busca();
	if (elemento==arbol[aqui].dato)
	{
		sacar();
	}
	else
	{
		printf("Elemento no encontrado\n");
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
void PostOrden(int p)
{
     if(p!=0)
     {
         	
		PreOrden(arbol[p].izq);
		PreOrden(arbol[p].der);
         	printf(	"%d",arbol[p].dato);
     }
}
	void mvec()
	{
		printf("ALMACENAMIENTO\n");
		for (int i=0;i<tamVector;i++){
				printf("Arbol[%d].izq=|%d|   Arbol[%d].dato=|%d|   Arbol[%d}.der=|%d|\n",i,arbol[i].izq,i,arbol[i].dato,i,arbol[i].der);	
		}
	
	}
	void menu()
{
	printf("MENU \n");
	printf("1. Adicionar elemento \n");
	printf("2. Eliminar Elemento \n");
//	printf("3. Modificar Elemento \n");	
//	printf("4. Mostrar Almacenamiento \n");
	printf("5. Mostrar InOrden \n");
		printf("6. Mostrar PreOrden \n");
			printf("7. Mostrar PostOrden \n");
			//	printf("5. Mostrar Lista \n");
	printf("0. Salir \n");
}	
int leer(char mss[100])
{ int elem;
		printf(mss);
		scanf("%d",&elem);
		return elem;
}
	int main() {
	    inicializa();
		menu();
		do{
			leeopcion();
			switch(opcion)
			{
				case 1: altas();break;
				case 2: elemento=leer("Introducir Elemento a eliminar: "); bajas();break;
			//	case 3: elemento=leer("Introducir Elemento a modificar: "); bajas();altas(); break;				
				case 5: InOrden(arbol[p].dato);break;	
				case 6: PreOrden(arbol[p].dato);break;
					case 7: PostOrden(arbol[p].dato);break;	
					}
		}while (opcion !=0);
		printf("Hasta LUego");
	return 0;
}
