/* Programa en C para implementar listas doblemente enlazadas: provee inserción, eliminación y búsqueda y actualización de nodos*/ 

#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
    struct node *prev; 
    int n; 
    struct node *next; 
}*h,*temp,*temp1,*temp2,*temp4; 

void insert1(); 
void traverseend(int); 
void update(); 
void deletee(); 
void mostrar();
int count = 0; 

int main(void) 
{ 
    int ch; 

    h = NULL; 
    temp = temp1 = NULL; 
    printf("n 1 - Insertar \n");    
    printf("n 2 - Eliminar en la posicion i \n"); 
    printf("n 3 - Modificar  \n"); 
    printf("n 4 - Mostrar lista \n"); 
    printf("n 5 - Salir \n"); 

    while (1) 
    { 
        printf("\n Ingrese opción : "); 
        scanf("%d", &ch); 
        switch (ch) 
        { 
        case 1: 
            insert1(); 
            break; 
        case 2: 
           deletee(); 
            break; 
        case 3: 
         mostrar();
            break; 
        case 4: 
           temp2 = h; 
            if (temp2 == NULL) 
                printf("n Error : Lista a mostrar vacia "); 
            else 
            { 
                printf("n El orden  de la lista enlazada es : "); 
                traverseend(temp2->n); 
            }  

            break; 
        case 5: 
             exit(0); 
            break;          
        default: 
            printf("n Elección errónea"); 
            break; 
        } 
    } 
    return 0; 
} 

/* Para crear un nodo vacio*/ 
void create() 
{ 
    int data; 

    temp =(struct node *)malloc(1*sizeof(struct node)); 
    temp->prev = NULL; 
    temp->next = NULL; 
    printf("n Ingrese el valor al nodo: "); 
    scanf("%d", &data); 
    temp->n = data; 
    count++; 
} 

/*  Para insertar al comienzo*/ 
void insert1() 
{ 
    if (h == NULL) 
    { 
        create(); 
        h = temp; 
        temp1 = h; 
    } 
    else 
    { 
        create(); 
        temp->next = h; 
        h->prev = temp; 
        h = temp; 
    } 
} 
/* Para eliminar un elemento */ 
void deletee() 
{ 
    int i = 1, pos; 

    printf("n Ingrese la posición del nodo a ser eliminado: "); 
    scanf("%d", &pos); 
    temp2 = h; 

    if ((pos < 1) || (pos >= count + 1)) 
    { 
        printf("n Error : Posición a eliminar fuera de rango"); 
        return; 
    } 
    if (h == NULL) 
    { 
        printf("n Error : Lista vacia, no hay elementos que eliminar"); 
        return; 
    } 
    else 
    { 
        while (i < pos) 
        { 
            temp2 = temp2->next; 
            i++; 
        } 
        if (i == 1) 
        { 
            if (temp2->next == NULL) 
            { 
                printf("Nodo eliminado de la lista"); 
                free(temp2); 
                temp2 = h = NULL; 
                return; 
            } 
        } 
        if (temp2->next == NULL) 
        { 
            temp2->prev->next = NULL; 
            free(temp2); 
            printf("Nodo eliminado de la lista"); 
            return; 
        } 
        temp2->next->prev = temp2->prev; 
        if (i != 1) 
            temp2->prev->next = temp2->next;    /* Esto no será necesario si vale i == 1  */ 
        if (i == 1) 
            h = temp2->next; 
        printf("n Nodo eliminado"); 
        free(temp2); 
    } 
    count--; 
} 

/* To traverse from end recursively */ 
void traverseend(int i) 
{ 
    if (temp2 != NULL) 
    { 
        i = temp2->n; 
        temp2 = temp2->next; 
        traverseend(i); 
        printf(" %d ", i); 
    } 
} 
void mostrar(){

	int i;
	if (temp2 != NULL) 
    { 
        i = temp2->n; 
        temp2 = temp2->next; 
       // traverseend(i); 
       mostrar();
        printf(" %d ", i); 
        //printf("[%d]<--Anterior   DATO=%d en lista[%d]     Siguiente-->[%d] \n ",temp2->prev,temp2->n,i,temp2->next);
		
    } 	
}

/* Para actualizar el valor de un nodo en la lista*/ 
void update() 
{ 
    int data, data1; 

    printf("n Ingrese el nodo a ser actualizado: "); 
    scanf("%d", &data); 
    printf("n Ingrese el nuevo dato : "); 
    scanf("%d", &data1); 
    temp2 = h; 
    if (temp2 == NULL) 
    { 
        printf("n Error : Lista vacia, no hay nodo que actualizar"); 
        return; 
    } 
    while (temp2 != NULL) 
    { 
        if (temp2->n == data) 
        { 

            temp2->n = data1; 
           
            traverseend(temp2->n);
            return; 
        } 
        else 
            temp2 = temp2->next; 
    } 

    printf("n Error : %d no fue encontado en la lista para actualizarlo", data); 
} 


