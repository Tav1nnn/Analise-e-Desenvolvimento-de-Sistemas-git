#include <iostream>

using namespace std;

int main () {

    int vetor[5] = {3, 2, 3, 1, 2};
    int frequencia = 1;
    int aux;

    for(int i = 0; i<5; i++) {
        for (int j = 0; j<5; j++){
            if(vetor[i]<vetor[j]){
                 aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    int cont= 1;
    for (int i = 0; i<5; i++) {

        if(vetor[i]==vetor[i+1] && i<5){
            cont++;
        }else{
            cout<<"Numero "<<vetor[i]<<": "<<cont<<endl;
            cont = 1;
        }
    }

}