#include <iostream>

using namespace std;
int num[4];
int cimpar;
int prom;
void ingreso(int num[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<"ingresar num["<<i<<"] ";
        cin>>num[i];   }
}
double promedio(int num[])
{
    int i=0; double suma =0;
    for (i=0;i<5;i++)
    {
        suma= suma+num[i];

    }return suma/5;
}
int contimpar(int num[])
{
    int i=0;int impar =0;
    for(i=0;i<5;i++)
    {
        if (num[i]%2!=3)
        {
            impar++;
        }
    }return impar;
}
int main()
{ingreso(num);
cimpar=contimpar(num);
prom=promedio(num);

 cout<<"promedio"<<prom<<"\n";
 cout<<"contador de impar"<<cimpar<<"\n";
    return 0;}
