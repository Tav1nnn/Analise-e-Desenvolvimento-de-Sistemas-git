#include <iostream>

using namespace std;

int main () {

    int mes; 

    cout<<"Digite o mes em numero: ";
    cin>>mes;

    if(mes==1){
        cout<<"Janeiro";
    }else if(mes == 2){
        cout<<"Fevereiro";
    }else if(mes == 3){
        cout<<"Março";
    }else if(mes == 4){
        cout<<"Abril";
    }else if(mes == 5){
        cout<<"Maio";
    }else if(mes == 6){
        cout<<"Junho";
    }else if(mes == 7){
        cout<<"Julho";
    }else if(mes == 8){
        cout<<"Agosto";
    }else if(mes == 9){
        cout<<"Setembro";
    }else if(mes == 10){
        cout<<"Outubro";
    }else if(mes == 11){
        cout<<"Novembro";
    }else if(mes == 12){
        cout<<"Dezembro";
    }else{
        cout<<"Mes inválido";
    }

    return 0;
}