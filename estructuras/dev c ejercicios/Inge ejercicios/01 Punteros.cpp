#include<stdio.h>
int main(){
	int *pi,i,val;
	i=100;
	pi=&i;
	val=*pi;
	printf("%d",val);
	return 0;
}
// ejemplo PUNTEROS en C -> muestra 100
