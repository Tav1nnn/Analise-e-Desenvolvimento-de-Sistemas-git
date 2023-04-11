#include <iostream>

using namespace std;

int main () {

    float soma = 0;
    float media;

    for (int i = 1; i<=10; i++){
        soma += i;
        
    }

    media = soma/10;

    cout<<"media: "<<media;
    return 0;
}