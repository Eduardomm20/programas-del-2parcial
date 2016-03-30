#include <iostream>

using namespace std;
int int_array[10];



   void arreglo (int int_array[])
    {for (int i=1; i<=10;i++){
        cout<<"ingrese un numero:";
        cin>>int_array[i];

    }for (int i=0; i<10;i++){
    cout<<"numero:"<<i<<":"<<int_array[i]<<"\n";
    }}
    int main()
{
    arreglo(int_array);
    return 0;
}
