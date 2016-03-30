#include <iostream>

using namespace std;

double ventas,pcomis,comis;
char nombre[30];
int turno;
void ingresodelosdatos(char nombre[],double&ventas,int turno)
{
    cout<<"nombre:";
    cin.getline(nombre,45);
    cout<<"ventas:";
    cin>>ventas;
    do{
        cout<<"ingrese turno:";
        cin>>turno;

    }while(!(turno>=1 && turno<=3) );

}
double porcomis(int turno){
if (turno==1)
    {return 0.05;}

    else if (turno==2)
    {
        return 0.06;}
        else {return 0.04;}
}void calcular(int turno,double ventas,double&pcomis,double&comis)
{
    pcomis=porcomis(turno);
    comis=ventas*pcomis;

}

int main()
{
    ingresodelosdatos(nombre,ventas,turno);
    calcular(turno,ventas,pcomis,comis);
    cout<<"porcentaje de comision:"<<pcomis<<"\n";
    cout<<"comision ganada:"<<comis<<"\n";
    return 0;
}






