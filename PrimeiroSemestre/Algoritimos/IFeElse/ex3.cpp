#include <iostream>

using namespace std;

int main () {

    int a,b,c,d,e, maior;
    string posicao;

    cout<<"Digite o valor A: ";
    cin>>a;    
    cout<<"Digite o valor B: ";
    cin>>b;
    cout<<"Digite o valor C: ";
    cin>>c;
    cout<<"Digite o valor D: ";
    cin>>d;
    cout<<"Digite o valor E: ";
    cin>>e;

    maior = a;
    posicao = "primeiro";

    if(b>maior){
        maior = b;
        posicao = "segundo";
    }else if(c>maior){
        maior = c;
        posicao = "terceiro";
    }else if(d>maior){
        maior = d;
        posicao = "quarto";
    }else if(e>maior){
        maior = e;
        posicao = "quinto";
    }

    cout<<"O maior valor foi "<<maior<<" e foi digitado na "<<posicao<<" posicao";

    return 0;
}