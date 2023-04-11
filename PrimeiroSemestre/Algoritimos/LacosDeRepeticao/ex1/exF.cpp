#include <iostream>

using namespace std;

int main () {

    int soma = 0;

    for (int i = 4; i<=20; i++){
        if(i%2==0){
            soma += i;
        }
    }

    cout<<"Soma: "<<soma;
    return 0;
}