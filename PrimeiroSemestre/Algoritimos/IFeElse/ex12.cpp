#include <iostream>

using namespace std;

int main() {

    int lado, valorLado;

    cout<<"Digite a quantidade de lados: ";
    cin>>lado;
    cout<<"Digite o valor do lado: ";
    cin>>valorLado;

    if(lado==3){
        cout<<"Triangulo com area de "<<lado*lado/2;

    }else if(lado==4){
        cout<<"Quadrado com area de "<<lado*lado;

    }else if(lado==5){
        cout<<"pentagono";

    }else if(lado<3){
        cout<<"nao e poligono";

    }else if(lado>5){
        cout<<"poligono nao identificado";
    }
}