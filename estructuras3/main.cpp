#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



using namespace std;
struct empleado
{
    char nombre[30];
    int ventas;
    char obs[15];
};
empleado empleados[5];
void ingreso(empleado & empleados[])
{ int i,k;
for(i=0i<5;i++)
{


    cout<<"nombre del empleado:";
    cin.getline(empleados.nombre,30);
    for (k=0;k<3;k++)
    {
        cout<<"ingrese ventas"<<k<<"....:";
    cin>>empleados.ventas;

}_flushall();}}
int main()
{ingreso(empleados);
    return 0;
}

