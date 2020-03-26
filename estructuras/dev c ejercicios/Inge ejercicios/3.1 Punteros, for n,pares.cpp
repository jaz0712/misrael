#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int *pi,*n,i,x,nn;
	x=0;
	nn=0;
	pi=&x;
	n=&nn;
	//gets("N",n)
		printf("introduzca el limite: ");
	scanf("%d",n);
	for (i=1;i<=*n;i++)  {	
		*pi=*pi + 2;	
		printf("%d \n",*pi);
}
	return 0;
}
//PUNTEROS, for n,pares->2,4,6,8...
