#include <iostream>

using namespace std;

int main () {

    int soma = 0;
    float media;

    for (int i = 10; i<=15; i++){
        soma += i;
    
    }

    media = soma/(15-10);

    cout<<"Media: "<<media;
    return 0;
}