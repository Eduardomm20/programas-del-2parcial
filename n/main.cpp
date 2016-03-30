#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int numero[5];
int generarpar();
{
    srand(time(0));
    int numero=0;

    do{
       num>=50 + rand()%(150-50);

}while(num%2=0);
}
void rellenar(int numero[])
{
    int i;
    for(i=0;i<5;i++)
    {
        numero[i]=generarpar();
    }
}
void mayor_menor(int numero[],int &mayor,int &menor)

{
   int i;
   for(i=0;i<5;i++)
   {
       if(numero[i]>mayor){
        mayor=numero[i];
       }
   }
   menor=numero[0];
   for(o=0;o<5;o++){
        if(numero[i]<mayor){
        menor=numero[i];

   }
   }
   }
   void presentar()
   {int i;
       for(i=0;i<5;i++)
       {
           cout<<numero[i]<<"\n";
       }
   }
int main()
{
  presen(numero);
  cout<<"\n";
  cout<<"mayor es:"<<mayor<<"\n";
  cout<<"menor es:"<<menor<<"\n";
  return 0;
}
