#include <iostream>

using namespace std;

int main () {

    int soma = 0;

    for (int i = 10; i<=15; i++){
        if(i%2!=0){
            soma += i;
        }
    }

    cout<<"Soma: "<<soma;
    return 0;
}