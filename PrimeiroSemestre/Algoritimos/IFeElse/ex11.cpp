#include <iostream>

using namespace std;

int main () {

    float valor, taxa;

    cout<<"Digite o valor: ";
    cin>>valor;

    if(valor<=2000){
       taxa = (valor*0.1)+valor;     

    }else if(valor>2000 && valor<=5000){
        taxa = (valor*0.12)+valor;

    }else if(valor>5000){
        taxa = (valor*0.13)+valor;
    }

    cout<<"Taxa de correcao "<<taxa;

    return 0;
}