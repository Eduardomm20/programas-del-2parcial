#include <iostream>

using namespace std;

int main()
{
  int c=0;
  int num = 0;
  int mayor =0;
  int prim=0;
  int seg=0;
  int ter=0;
  while (c<10){
    cout<<"ingrese un numero:";
    cin>>num;
        if((num>=1)&&(num<=50)){
            prim++;
            if(num>mayor)
                mayor=num;



  }
  else if ((num>=51)&&(num<=80)){
    seg++;
    if (num>mayor)
        mayor=num;

  }
  else {
    ter++;
  if(num>mayor){
    mayor=num;
  }

}
c++;}
cout<<"total:"<<prim<<"entre 1 y 50.\n";
cout<<"total:"<<seg<<"entre 51 y 80.\n";
cout<<"total:"<<ter<<"mayores que 80.\n";
cout<<"numero mayor:"<<mayor;
}

