//Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b.

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

void copiar_C(char cad1[], char cad2[]){
    for(int i=0; i<tam_C(cad1); i++){
        cad2[i]=cad1[i];
    }
}

int main(){
    char a[]="Cadenas y ArreglosB";
    char b[tam_C(a)];
    copiar_C(a,b);
    cout<<b<<endl;
}