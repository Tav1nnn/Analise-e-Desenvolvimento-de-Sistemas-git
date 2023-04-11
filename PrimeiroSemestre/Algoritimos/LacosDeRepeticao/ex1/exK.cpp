#include <iostream>

using namespace std;

int main () {

    float soma = 0;
    float media;
    int divisor = 0;

    for (int i = 10; i<=50; i++){
        if(i%2!=0){
            soma += i;
            divisor ++;
        }
        
    }

    media = soma/divisor;

    cout<<"media: "<<media;
    return 0;
}