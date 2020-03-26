/* 
Creado por Juan Carlos Lanuza L. 
                ATLAS Laboratories
                UNICIT Universidad Iberoamericana de Ciencia y Tecnología
Managua Nicaragua 2017

OPEN SOURCE CODE - Libre modificación y distribución

*/

#include <stdio.h>
#include <stdlib.h>

int **matrix = NULL; // se asgina el NULL en caso de valores erráticos

int main(void)
{
	int col,fil; // almacenan las cantidades de columnas y filas
	int x,y; // para el movimiento entre los arreglos

	fprintf(stdout,"Ingresa Columnas: ");
	scanf("%d",&col);
	fprintf(stdout,"Ingresa Filas: ");
	scanf("%d",&fil);
	
	matrix = (int **)malloc(fil*sizeof(int*)); // se asigna memoria para las filas
	if(matrix == NULL) { perror(""); } // se comprueba si no hay errores
	
	for (int i = 1;i <= fil;i++) // se inicia un movimiento en el arreglo para asignar memoria para las columnas 
	{
		matrix[i] = (int*)malloc(col*sizeof(int)); // se asigna memoria mientras se mueve por el arreglo
		if(matrix[i] == NULL) perror("Error: "); // se comprueba que no hay errores
	}
	
	for(y = 0;y < fil;y++) // esto nos movera por las filas
	{
		for(x = 0;x < col;x++) // esto nos movera por las columnas
		{
			fprintf(stdout,"Valor [%d][%d] : ",y,x); // nos imprimira por que columna y fila (coordenada) estamos
			scanf("%d",&matrix[y][x]); // se asigna el valor a la matrix
		}
	}
	puts("Matriz Actual");
	puts("-------------");
	for(y = 0;y < fil;y++)
	{
		for(x = 0;x < col;x++)
		{
			fprintf(stdout,"%d\t",matrix[y][x]); // se imprime los resultados para la visualización previa
		}
	//	puts(\n);// salto de linea 
	printf("\n"); 
	}	
	free(matrix); // se libera la memoria asignada a la matriz si asi se requiere
	matrix = NULL; // se asigna NULL por metodos de seguridad 
	return 0;
}
