//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)

#include <iostream>

using namespace std;

int tam_R(char cad[], int i){
    int tam=0;
    if(cad[i]=='\0')
        return tam;
    else 
        return tam + tam_R(cad, ++i) + 1;
}

int tam_I(char cad[]){
    int tam=0, i=0;
    while(cad[i]!='\0'){
        tam++;
        i++;
    }
    return tam;
}

int main(){
    char a[]="Laboratorio B", n=0;
    cout<<"Tamaño de cadena de forma Iterativa: "<<tam_I(a)<<endl;
    cout<<"Tamaño de cadena de forma Recursiva: "<<tam_R(a,n)<<endl;
}