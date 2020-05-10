//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//(Iterativa y recursiva).

#include <iostream>
using namespace std;

int sumaR(const int array[], int t){
    if(t==1){
        return array[0];
    }
    else
    {
        return array[t-1] + sumaR(array,--t);
    }
    
}

int sumaI(const int array[], const int t){
    int sum=0;
    for(int i=0; i<t; i++){
        sum+=array[i];
    }
    return sum;
}

int main(){
    int n=9, arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"Suma Iteractiva: "<<sumaI(arr, n)<<endl;
    cout<<"Suma Recursiva: "<<sumaR(arr,n)<<endl;
}