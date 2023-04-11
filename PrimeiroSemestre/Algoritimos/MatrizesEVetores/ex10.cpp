#include <iostream>
using namespace std;

int main() {
    int tamanho;
    
    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanho;
    
    int vetor[tamanho];
    
    for (int i = 0; i<tamanho; i++){
        cout<<endl<<"Digite o "<<i+1<<"° valor do vetor: ";
        cin>>vetor[i];
    }
    
    int maior = vetor[0];
    int posicao = 0;
    
    for (int i = 1; i<tamanho; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
            posicao = i;
        }
    }

    cout<<"posicao do maior numero do vetor: "<<posicao+1<<endl;
    cout<<"maior numero do vetor: "<<maior;

    return 0;
}
