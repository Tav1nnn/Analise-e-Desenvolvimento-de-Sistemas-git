#include <iostream>

using namespace std;

int main () {

    int soma = 0;

    for (int i = 3; i<10; i++){
        soma += i;
    }

    cout<<"Soma: "<<soma;
    return 0;
}