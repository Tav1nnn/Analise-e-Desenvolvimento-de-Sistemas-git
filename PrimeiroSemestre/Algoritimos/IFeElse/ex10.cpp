#include <iostream>

using namespace std;

int main () {

    int senha;
    int const senhaV = 5479;

    cout<<"Digite sua senha: ";
    cin>>senha;

    if(senha==senhaV){
        cout<<"acesso permitido";
    }else{
        cout<<"acesso negado";
    }

    return 0;
}