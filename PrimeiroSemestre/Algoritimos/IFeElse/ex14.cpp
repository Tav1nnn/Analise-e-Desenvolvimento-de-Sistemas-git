#include <iostream>

using namespace std;

int main () {

    int dia, mes, ano;

    cout<<"Digite o dia, mes e ano";
    cin>>dia>>mes>>ano;

    if((dia<1 || dia>31) || (mes<1 || mes>12) || (ano<1) || (mes==2 && dia>27)){
        cout<<"Data invalida";
    }else{
        cout<<"Data valida";
    }
    return 0;
}