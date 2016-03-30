#include <iostream>

using namespace std;
int numero[4];
void ingreso (int numero[]){
int i;
for (i=0;i<5;i++)
    cout<<"ingreso numero:";
    cin>>numero[i];
for (i=0;i<5;i++);
{
int cont = i+1;
cout<<"numero"<<cont<<":"<<numero[i]<<"\n";}
}int mayor(int numero[])
{
int i;
int mayores=0;
for(i=0;i<5;i++){
    if (numero[i]>100){
        mayores++;
    }return mayores;
}
int pares (int numero[]){

int par=0;
int i;
for(i=0;i<5;i++){
    if (numero[i]%2==0){
        par++}
    }return par;
}
int impares (int numero[]){
int impar=0;
int i;
for(i=0;i<=4;i++){
    if (numero[i]%2!=0){
        impar++;}
    }return impar;}
}
int main()
{cout<<"impares:"<<impares(numero)<<"\n";
cout<<"pares:"<<pares(numero)<<"\n";
cout<<"mayores a 100:"<<mayor(numero)<<"\n";
return 0;
}


