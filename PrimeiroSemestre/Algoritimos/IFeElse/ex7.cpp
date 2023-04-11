#include <iostream>

using namespace std;

int main () {

    int num1, num2, num3, aux;

    cout<<"Digite tres valores em sequencia: "<<endl;
    cin>>num1>>num2>>num3;

    //Entrada
    //3,2,1
    if(num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;

    //2,3,1
    }if(num2 > num3){
        aux = num2;
        num2 = num3;
        num3 = aux;
        cout<<num2;

    //2,1,3
    }if(num1 > num2){
        aux = num2;
        num2 = num1;
        num1 = aux;       
    }
    //3,2,1

    //OBS: todos são IF porque precisa verificar a condição

    cout<<"Crescente: "<<num1<<" "<<num2<<" "<<num3;

    return 0;
}