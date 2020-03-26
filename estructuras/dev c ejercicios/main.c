#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int *pi,i,val;
	i=100;
	pi=&i;
	val=*pi;
	printf("%d",val);
	return 0;
}


