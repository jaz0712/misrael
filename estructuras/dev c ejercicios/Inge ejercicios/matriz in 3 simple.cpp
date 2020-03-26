
#include <stdio.h>
#include <stdlib.h>
//int **matrix = NULL; // se asgina el NULL en caso de valores erráticos
	int col,fil; // almacenan las cantidades de columnas y filas
	int x,y; // para el movimiento entre los arreglos
int matrix[NULL][NULL];

void inici()
{	// le da un valor 0 atoda la matriz nxm
	printf("Ingresa Columnas: ");
	scanf("%d",&col);
	printf("Ingresa Filas: ");
	scanf("%d",&fil);


	for(y = 0;y < fil;y++) // esto nos movera por las filas
	{
		for(x = 0;x < col;x++) // esto nos movera por las columnas
		{	
		matrix[y][x]=0;
		}
	}

}
void altas()
{	

	for(y = 0;y < fil;y++) // esto nos movera por las filas
	{
		for(x = 0;x < col;x++) // esto nos movera por las columnas
		{	printf("entaaa: ");
			printf("Valor [%d][%d] : ",y,x); // nos imprimira por que columna y fila (coordenada) estamos
			scanf("%d",&matrix[y][x]); // se asigna el valor a la matrix
		}
	}
	
}

void inserArista()
{	
int arista,valor;
y=0;
for(x = 0;x < col;x++) // esto nos movera por las columnas
		{	
			printf("Valor [%d][%d] : ",y,x); // nos imprimira por que columna y fila (coordenada) estamos
			scanf("%d",&matrix[y][x]); // se asigna el valor a la matrix
		}
	


}
void inserVertice()
{
x=0;	for(y = 0;y < fil;y++) // esto nos movera por las filas
	{
	
			printf("Valor [%d][%d] : ",y,x); // nos imprimira por que columna y fila (coordenada) estamos
			scanf("%d",&matrix[y][x]); // se asigna el valor a la matrix
		
	}
}

void mostrar()
{	printf("mostrar %d",fil);
	printf("mostrar %d \n",col);
	for(y = 0;y < col;y++)
	{
		for(x = 0;x < fil;x++)
		{
				printf("%d\t",matrix[y][x]);
			//printf("%d ",& matrix[y][x]); // se imprime los resultados para la visualización previa
		}
	//	puts(\n);// salto de linea 
	printf("\n"); 
	}	
}
void borrarVertice()
{int ver,valor;

	printf("Ingresa posicion de la arista[%d]: ",ver);
		scanf("%d",&ver); // se asigna el valor a la matriz
for (y=0;y<col;y++){
matrix[0][ver]=0;
}
	printf("Se borro el  valor de la arista[%d]: ",ver);
		

}
void borrarArista()
{int ar;

	printf("Ingresa posicion de la arista[%d]: ",ar);
		scanf("%d",&ar); // se asigna el valor a la matriz
for (y=0;y<fil;y++){
matrix[0][ar]=0;
}

	printf("Se borro el valor de la arista[%d]: ",ar);
	


}

void modArista()
{	
int arista,valor;

	printf("Ingresa posicion de la arista[%d]: ",arista);
		scanf("%d",&arista); // se asigna el valor a la matriz

	printf("Ingresa valor de la arista[%d]: ",arista);
		scanf("%d",&valor); // se asigna el valor a la matriz
matrix[arista][0]=valor;


}
void modVertice()
{int ver,valor;

	printf("Ingresa posicion de la arista[%d]: ",ver);
		scanf("%d",&ver); // se asigna el valor a la matriz

	printf("Ingresa valor de la arista[%d]: ",ver);
		scanf("%d",&valor); // se asigna el valor a la matriz
matrix[0][ver]=valor;

}
//void operacion(){
//	
//}
int main() {
 int op=0;
	
inici();
	do{
        printf("Menu Grafos Matriz de incidencia\n");

        printf("1.Adicionar arista \n");
        printf("2.Adicionar vertice  \n");
        printf("3.Mostrar Lista \n");
        printf("4.Borrar arista \n");
        printf("5.Borrar vertice \n");
        printf("6.Modificar arista \n");
        printf("7.Modificar vertice \n");
        printf("0. Salir \n");
        scanf("%d",&op);
        switch(op)
        {
           
			case 1:
			inserArista();
					break;
	        case 2: 
		inserVertice();			     
					break;
			case 3: 
			mostrar();
			    	break;
			case 4: borrarArista();
			    	break;
			case 5: borrarVertice();
			    	break;
			case 6: modArista();
			    	break;
			case 7: modVertice();
			    	break;
            case 0: printf("bye");
			break;
            default: printf("Opcion inexistente");
		}
}    while(op!=0);

    printf("Gracias por utilizar este programa");
	return 0;
}

