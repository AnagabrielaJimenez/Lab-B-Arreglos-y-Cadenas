//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).

#include <iostream>

using namespace std;

int tam_C(char cad[]){
    int tam=0, i=0;
    while(cad[i]!='\0'){
        tam++;
        i++;
    }
    return tam;
}

void concatenar_C(char cad1[], char cad2[]){
    int j=0;
    for (int i=tam_C(cad2); i<23; i++){
        cad2[i]=cad1[j];
        j++;
    }
}

int main(){
    char a[]="Laboratorio B";
    char b[22]="Curso De ";
    concatenar_C(a,b);
    cout<<b<<endl;
    cout<<tam_C(b)<<endl;
}