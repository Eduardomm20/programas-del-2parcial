#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
struct alumno
{
    char nombre[30];
    int p1,p2,p3,promedio;
    char obs[15];
};
alumno alum;

void ingreso(alumno & alum)
{
    cout<<"nombre del alumno:";
    cin.getline(alum.nombre,30);
    cout<<"parcial 1..";
    cin>>alum.p1;
    cout<<"parcial 2..";
    cin>>alum.p2;
    cout<<"paarcial 3..";
    cin>>alum.p3;
    _flushall();}
void ingresoArreglo(alumno alum[])
{
    int i;
    for(i=0;i<5;i++)
    {
        ingreso (alum[i]);
    }
}

void calcular(alumno &alum){
    alum.promedio=(alum.p1+alum.p2+alum.p3)/3;
    if (alum.promedio>=60){
        strcpy(alum.obs,"aprobado");

    }else{
    strcpy(alum.obs,"reprobado");}
}
void calcularArreglo(alumno alum[])
{
    int i;
    for(i=0;i<5;i++)
    {
        calcular (alum[i]);
    }
}

void presentar(alumno alum)
{
    cout<<"alumno"<<alum.nombre<<"nota:"<<alum.promedio<<"obs:"<<alum.obs<<"\n";

}
void presentarArreglo(alumno alum[])
{
    int i;
    for(i=0;i<5;i++)
    {
        presentar (alum[i]);
    }
}
int main()
{
   ingreso(alum);
   calcular(alum);
   presentar(alum);
   return 0;
}
