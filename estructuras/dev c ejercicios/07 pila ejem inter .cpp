//////////////////////////////////////////////////

//Listas circulares Estáticas Cola

//////////////////////////////////////////////////

#include <iostream>

#include <stdio.h>

#include <stdlib.h>

using namespace std;

int vector [4];

unsigned int s=0;

unsigned int m=0;

void iniciar ()

{

unsigned int i;

for (i=0; i<4; i++)

{

vector[i]=0;

}

s=0;

m=0;

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

void Push (int dato)

{

if ((m>3)&&(vector[0]!=0))

{

cout<<"lista llena"<<endl;

}

else

{

if (m>3)

{

m=0;

}

else

{

vector[m]=dato;

cout<<"\t#dato insertado ["<<vector[m]<<"]"<<endl;

m++;

}

}

}

void Pop ()

{

if ((s==m)&&(vector[0]==0))

{

cout<<"cola vacia \n";

iniciar();

}

else

{

if(vector[s]!=0)

{

cout<<"sacando datos["<<vector[s]<<"]"<<endl;

vector[s]=0;

s++;

}

else

{

cout<<"casilla vacia"<<endl;

}

}

}

int main()

{

iniciar();

Pop();

Push(7);

Push(9);

Push(4);

Push(6);

Push(3);

mostrar ();

Pop();

Pop();

Pop();

Pop();

Pop();

Pop();

iniciar ();

Push(9);

Push(10);

Push(11);

Push(12);

mostrar ();

Pop();

Pop();

Pop();

Pop();

Pop();

return 0;

}


