#include <iostream>

using namespace std;

int main () {
    int vetor[5] = {4, -1, -10, 10, 9};

    int menor = vetor[0];

    for (int i = 0; i<5; i++) {
        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }

    cout<<"Menor numero do vetor: "<<menor;
    return 0;
}