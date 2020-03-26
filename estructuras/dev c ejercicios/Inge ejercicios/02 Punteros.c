#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int *pi,i,val;
	i=100;
	pi=&i;
	*pi=*pi / 2;
	val=*pi;

	printf("%d \n",val);

		*pi=*pi / 2;
		printf("%d \n",*pi);

			*pi=*pi / 2;
		printf("%d \n",*pi);	
			
	return 0;
}
// PUNTEROS 02-> muestra la mitad la cuarta y octava parte de 100->50 25 12
