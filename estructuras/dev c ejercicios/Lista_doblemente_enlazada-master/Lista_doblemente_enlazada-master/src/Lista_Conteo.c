
#include <stdlib.h>
#include<stdio.h>
/*Este metodo determina el numero de elemento de la lista 

@param *lista apunta a null  significa que esta vacio. 
@return un entero 0 si la lista esta vacia o caso contrario el componente numeroElementos de la lista retornara el nunero de elementos de la lista.     

@author whugo43                    */ 
 static void Main()
        {
            object Objeto;
            Objeto = new ClaseBasica();
            ClaseBasica a;
            a = (ClaseBasica)Objeto;
            Console.WriteLine(a.i);

            ClaseBasica b = new ClaseBasica();
            Console.WriteLine(b.i);

            Console.ReadLine();
        }
