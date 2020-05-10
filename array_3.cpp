//Implementar una función que ordene los elementos de un arreglo: ascendente.

#include <iostream>

using namespace std;

int ascendete(int array[], int t){
    int aux;
    for(int i=0; i<t; i++){         //Método Burbuja
        for(int j=i+1; j<t; j++){   
            if(array[i]>array[j]){
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
        }

    }
    return array[t];

}

int main(){
    int arr[]={5,3,4,9,1,7,6,8,2}, n=9;
    arr[9]=ascendete(arr,n);
    cout<<"Arreglo ordenado: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}