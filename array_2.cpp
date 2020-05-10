//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).

#include <iostream>
using namespace std;

void invertirR(int array[], int t){
    if(t>=0){
        cout<<array[t]<<" ";
        invertirR(array, --t);
    }
    
}

int invertirI(int array[], int t){
    int aux[t];
    for(int i=0; i<t/2; i++){
        aux[i]=array[i];
        array[i]=array[t-1-i];
        array[t-1-i]=aux[i];
    }
    return array[t];
}

int main(){
    int n=9, arr[]={1,2,3,4,5,6,7,8,9};
    arr[9]=invertirI(arr,n);
    cout<<"Arreglo invertido iteractivamente:"<<endl;
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
    cout<<"Arreglo invertido recursivamente: "<<endl;
    invertirR(arr, (n-1));
}