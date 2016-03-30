#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int multi =0;
    char respuesta;
    int num=0,i;
    do{
       do{
        cout<<"ingresar un numero entre 5 y 10:";
        cin>>num;

       }while(!(num>=5 and num<=10));
       for (i=1;i<=10;i++)
       {
           multi=i*num;
           cout<<num<<" x "<< i <<" = "<<multi<<"\n";
       }_flushall();
       do
    {



        cout<<"desea continuar?";
        cin.get(respuesta);
        _flushall();
    }while((toupper(respuesta)!='S')and (toupper(respuesta)!='N'));
    }while ((toupper(respuesta)=='s'));
    return 0;

}
