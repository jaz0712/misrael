#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
struct stack{
int top;
int items[STACKSIZE];
};
struct stack s;

int empty (struct stack *ps)
{
	if(ps->top==-1){
		return(TRUE);}
	else{
		return(FALSE);}

}/*fin de empty*/
int pop(struct stack*ps){
	if(empty(ps)){
		printf("stack underflow");
		exit(1);
		
	}/*fin de if*/
	return (ps->items[ps->top--]);
}/*fin de pop*/
	x=pop(&s);
	if(!empty(&s))	{
	x=pop(&s);}
//	else
	/* realiza acciones correctivas*/
	void push(struct stack*ps,int x){
		if(ps>top==STACKSIZE-1){
		printf("stack underflow");
		exit(1);
		}
		//else
		
		ps->items[++(ps->top)]=x;
		return 0;
	}/*fin de push*/
	push(&s,x);
	return 0;
}
