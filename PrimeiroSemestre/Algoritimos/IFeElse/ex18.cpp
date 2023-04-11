#include <iostream>

using namespace std;

int main () {

    int ano;
    int const anoAtual = 2023;

    cout<<"Digite o ano que voce nasceu: ";
    cin>>ano;

    if((anoAtual-ano)>=16){
        cout<<"Valido para votar";
    }else{
        cout<<"invalido";
    }

    return 0;
}