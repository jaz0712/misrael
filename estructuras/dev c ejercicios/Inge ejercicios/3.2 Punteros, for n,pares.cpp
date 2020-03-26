#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int *pi,* n,*i,ii,x,nn;
	x=0;
	nn=0;
	ii=1;
	pi=&x;
	n=&nn;
	i=&ii;
	//gets("N",n)
		printf("introduzca el limite: ");
	scanf("%d",n);
	for (*i=ii;*i<=*n;(*i)++)  {
		*pi=*pi + 2;	
		printf("%d \n",*pi);

}

}
//más PUNTEROS, for n,pares->2,4,6,8...
