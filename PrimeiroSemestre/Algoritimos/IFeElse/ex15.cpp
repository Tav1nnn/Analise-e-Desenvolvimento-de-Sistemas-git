#include <iostream>

using namespace std;

int main () {
    int qtdLaranjas;

    cout<<"Digite a quantidade de laranjas";
    cin>>qtdLaranjas;

    if(qtdLaranjas<12){
        cout<<"Valor: "<<qtdLaranjas*0.4;
    }else{
        cout<<"Valor: "<<qtdLaranjas*0.28;
    }
}