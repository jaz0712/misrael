#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef struct nodo
{
   int cedula;
   struct nodo*siguiente;
}tiponodo;

typedef tiponodo *pnodo;
typedef tiponodo *cola;

cola cola_n=NULL;
cola cola_vip=NULL;
int solic;

void insertar (cola *cola_n)
{
   cola aux, creado;

   creado=(pnodo)malloc(sizeof(tiponodo));

   cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
   cout<<"   ||||||||||||||||||||METROPOLI banco universal||||||||||||||||||||"<<endl;
   cout<<"   |||||||||||||||||||||||Le da la bienvenida|||||||||||||||||||||||"<<endl;
   cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
   cout<<"   Estimado cliente: Introduzca su numero de cedula"<<endl;
   cin>>     creado->cedula;
   cout<<"   Pronto sera atendido"<<endl;


   if ((*cola_n)==NULL)
   {
      creado->siguiente=*cola_n;
      *cola_n=creado;
   }
   else
   {
      aux=*cola_n;

      while(aux!=NULL)
      {
         if(aux->siguiente==NULL)
         {
            creado->siguiente=aux->siguiente;
            aux->siguiente=creado;
            aux=aux->siguiente;
         }
         aux=aux->siguiente;
      }
   }
}

void mostrar_cola (cola cola_n)
{
   cola aux;
   aux=cola_n;
   if(aux==NULL)
   {
      cout<<"No hay clientes en cola"<<endl;
   }
   else
   {
      while(aux!=NULL)
      {
         cout<<"Cedula: "<<aux->cedula<<endl;
         cout<<""<<endl;
         aux=aux->siguiente;
         cout<<"* Clientes ordenados por orden de llegada((((((SIMCOLAS))))))"<<endl;
      }
   }
}
//modificado hasta acá... falta de orden por parte del creador
void insertar_vip (cola *cola_vip){
     cola aux_2, creado_vip;
     creado_vip=(pnodo)malloc(sizeof(tiponodo));
     cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;//62
     cout<<"   ||||||||||||||||||||METROPOLI banco universal||||||||||||||||||||"<<endl;
     cout<<"   |||||||||||||||||||||||Le da la bienvenida|||||||||||||||||||||||"<<endl;
     cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
     cout<<"   Estimado cliente: Introduzca su numero de cedula"<<endl;
     cin>>     creado_vip->cedula;
     cout<<"   Pronto sera atendido"<<endl;
     if ((*cola_vip)==NULL){
         creado_vip->siguiente=*cola_vip;
         *cola_vip=creado_vip;
     }else{
         aux_2=*cola_vip;
         while(aux_2!=NULL){
             if(aux_2->siguiente==NULL){
                creado_vip->siguiente=aux_2->siguiente;
                aux_2->siguiente=creado_vip;
                aux_2=aux_2->siguiente;
             }                                                  
             aux_2=aux_2->siguiente;
         }
     }                                                                                           
}

void mostrar_cola_vip (cola cola_vip){
    cola aux_2;
    aux_2=cola_vip;
    if(aux_2==NULL){
       cout<<"No hay clientes V.I.P en cola"<<endl;
    }else{
       while(aux_2!=NULL){
           cout<<"Cedula: "<<aux_2->cedula<<endl;
           cout<<""<<endl;
           cout<<"* Clientes ordenados por orden de llegada((((((SIMCOLAS))))))"<<endl;
           aux_2=aux_2->siguiente;
       }
    }
}
                                                                                                                        
void pop (cola *cola_n){
     
     if((*cola_n)==NULL){
         cout<<"No hay clientes en cola ((((((SIMCOLAS))))))"<<endl;
         cout<<""<<endl;
     }
                     
     if((*cola_n)!=NULL){
         cout<<"Cliente: "<<(*cola_n)->cedula;
         cout<<" es su turno"<<endl;
         *cola_n=(*cola_n)->siguiente;
         free(cola_n);
         system("PAUSE");
         cout<<""<<endl;
      }
                          
      if((*cola_n)==NULL){
          cout<<"No hay clientes en cola ((((((SIMCOLAS))))))"<<endl;
          cout<<""<<endl;
      }else{
                                 
          cout<<"Cliente: "<<(*cola_n)->cedula;
          cout<<" es su turno"<<endl;
          *cola_n=(*cola_n)->siguiente;
          free(cola_n);
          system("PAUSE");
          cout<<""<<endl;
       }
}
                                
void pop_vip(cola *cola_vip){
                                     
     if(cola_vip!=NULL){
         cout<<"Cliente: "<<(*cola_vip)->cedula;
         cout<<" es su turno"<<endl;                          
         *cola_vip=(*cola_vip)->siguiente;
         free(cola_vip);
      }else{
          cout<<"No hay usuarios V.I.P en cola ((((((SIMCOLAS))))))"<<endl;
      }
}
                                                         
                                                         
                          
void menu(); 
void Insertar();
void insertar_vip();
void mostrar_cola();
void mostrar_colavip();
void solicitar_numero();
void salir();

 
struct perly{
char uxer[];
}data;

struct perly *p = &data;


int main(int argc, char *argv[])
{
    
    system("color 0a");
    
    cout<<"                         *                *                   *     "<<endl;
    cout<<"             *                                     *                "<<endl;
    cout<<"     *              |           *             *        *         *  "<<endl;
    cout<<"          *        -+-                 *                            "<<endl;
    cout<<"       __           |      *             *          *        *      "<<endl;
    cout<<"   ___|  |   *     _|_              *    ____    ____               "<<endl;
    cout<<"   [_]|°°|__      _| |_        *    |   |....|  |....|    *     *   "<<endl;     
    cout<<"      |     |   _|[] []|_    ___    |   |....|  | ___|__            "<<endl;
    cout<<"   [_]|  °° |__|_  ______|  |   |  |_|  |....|  || -- - |   *     * "<<endl;
    cout<<"      |________  |__     |  |# #|  |_|  |....|  || - -- |  _____    "<<endl;
    cout<<"   [_]| _____ |     |__[]|  |   |  |_|  |....|__|| -- - | |* * *|   "<<endl;
    cout<<"      | [___] |        |__  |# #|  |_|  |....|__|| -- -_|_|* * *|   "<<endl;
    cout<<"   [_]|       | °°        | |   |__| |__|....|  || ___|* *|* * *|   "<<endl;
    cout<<"      | _____ |           |__  #|_______|....|  | |* *|* *|* * *|   "<<endl;    
    cout<<"   [_]| [___] |       °°     |__|_______|__  |  | |* *|* *|* * *|   "<<endl;
    cout<<"      |       |            __|_____________|__    |* *|* *|* * *|   "<<endl;
    cout<<"   [_]| _____ |  °°      _|___________________|_  |* *|* *|* * *|   "<<endl;
    cout<<"      | [___] |         |_______________________|  ______________   "<<endl;
    cout<<"    __|_______|_________|_______________________| _________________ "<<endl;
    cout<<"   |_______________________________________________________________|"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;//62
    cout<<"   ||||||||||||||||||||METROPOLI banco universal||||||||||||||||||||"<<endl;
    cout<<"   ||||||||||||Sistema Integral para el Manejo de COLAS|||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||SIMCOLAS||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||Creado por: Javier Rodriguez Caracas-Venezuela||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   Login: ";
    char usuario[6] = "jas";
    cin.getline(p->uxer,6);
    
    if (strcmp(p->uxer,usuario) == 0) {
                                cout<<"Bienvenid@ al sistema "<<endl; menu();
                                cout<<""<<endl;
                                }else{
                                      cout<<"Acceso Denegado. Consulte al Admisnistrador "<<endl;
                                      }                                                                         

    system("PAUSE");
    return EXIT_SUCCESS;
}
void menu() {
     short a;
     do { 

         cout<<""<<endl;
         cout<< "0 - Agregar Cliente"<<endl;
         cout<< "1 - Agregar Cliente V.I.P"<<endl;
         cout<< "2 - Solicitar Numero"<<endl;
         cout<< "3 - Mostrar Cola"<<endl;
         cout<< "4 - Mostrar Cola V.I.P"<<endl;
         cout<< "5 - Salir del Sistema"<<endl;
         cout<<""<<endl;      

         fflush(stdout);

         cout<<"Opcion #:";
         cin>>a;
         cout<<""<<endl;
         
         if (a == 5)
             exit(1);
         
         switch(a){
         case 0 :
             Insertar();
             break;
                              
         case 1 :
             insertar_vip();
             break;

         case 2 :
             solicitar_numero(); 
             break;
                                  
         case 3 :
             mostrar_cola();
             break;

         case 4 :
             mostrar_colavip();                    
             break;

         case 5 :
             salir();
             break;
                                                 
         default :
             puts("Usted no ha seleccionado nada, porfavor seleccione algo\n");
             break;
         };
     } while (1);
}                                                         

void Insertar(){
     insertar(&cola_n);
     }
void insertar_vip(){
     insertar(&cola_vip);
}
          
void mostrar_cola(){
      mostrar_cola(cola_n);            
}
               
void mostrar_colavip(){
      mostrar_cola_vip(cola_vip);
}
                    
void solicitar_numero(){
      pop(&cola_n);
                         
      if(cola_vip!=NULL){
           pop_vip(&cola_vip);
      }else{
           cout<<"No hay cliente V.I.P en cola ((((((SIMCOLAS))))))"<<endl;
      }
                         
}
                         
void salir(){
}
