///////////////////////////////////////////////////////

///////////////////////////////////////////////

//////////////////////////////////////////////////////

/////////////////////////////////////////////////

//Listas circulares estáticas Pila

////////////////////////////////////////////////

#include <iostream>

#include <stdio.h>

#include <stdlib.h>

using namespace std;

int vector[4];

unsigned int t=3;

unsigned int s=0;

void iniciar ()

{

unsigned int i;

for (i=0; i<4;i++)

{

vector[i]=0;

}

t=3;

s=0;

}
void mostrar()

{

unsigned int j;

cout<<"=====Mostrando datos==========="<<endl;

for (j=0; j<4; j++)

{

cout<<"\t\t"<<vector[j]<<endl;

}

cout<<"==============================="<<endl;

}
void Push(int dato)

{

if ((vector[0]!=0)&&(s>3))

{

cout<<"lista llena"<<endl;

}

else

{

vector[s]=dato;

cout<<"\t\tdato insertado ["<<vector[s]<<"]\n";

s++;

}

}

void Pop()

{

if((t!=s)&&(vector[0]==0))

{

cout<<"Lista vacia"<<endl;

iniciar ();

}

else

{

if (vector[t]==0)

{

cout<<"casilla vacia";

iniciar ();

}

cout<<"====================================="<<endl;

cout<<"sacando dato ["<<vector[t]<<"]"<<endl;

cout<<"====================================="<<endl;

vector[t]=0;

t--;

}

}

int main()

{

cout<<"|*==============================*|\n";

cout<<"|*=Listas circulares estáticas==*|\n";

cout<<"|*==============Pila============*|\n\n";

iniciar ();

Push(7);

Push(4);

Push(9);

Push(5);

Push(14);

Pop();

Pop();

Pop();

Pop();

Pop();

Pop();

Push(1);

Push(6);

Push(9);

Push(15);

mostrar();

return 0;

}
