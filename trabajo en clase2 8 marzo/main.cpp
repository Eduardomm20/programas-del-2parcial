#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int lin=3;
const int col=4;
int num[lin][col];

void ingreso(int num[lin][col])
{ srand(time(0));
    for(int l=0;l<lin;l++)
    {

        for (int c=0;c<col;c++)
        {
            num[l][c]=50+rand()%(100-50);
        }
    }
}

void promedio(int num[][col])
{
    int ult=lin-1;
    for (int c=0;c<col;c++)
    {
        int par=0;
        int suma=0;
        for (int l=0;l<lin-1;l++)
        {
            if(num[l][c]%2==0){
                par++;
                suma+=num[l][c];
            }
        }num[ult][c]=suma/par;
    }
}
void presentar(int num[lin][col])
{
for (int l=0;l<lin;l++)
    {
        for(int c=0;c<col;c++)
            cout<<num[l][c]<<"  ";
        {
        }cout<<"\n";
    }
}
int main()
{
    ingreso(num);
    promedio(num);
    presentar(num);
    return 0;
}
