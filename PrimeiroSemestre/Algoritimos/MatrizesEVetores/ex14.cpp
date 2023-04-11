#include <iostream>

using namespace std;

int main() {
    int tamanho;

    
    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanho;
    
    int vetor[tamanho];

    int aux = 0;
    
     for (int i = 0; i<tamanho; i++){
        cout<<endl<<"Digite o "<<i+1<<"° valor do vetor: ";
        cin>>vetor[i];
    }

    
    for (int i = 0; i<tamanho; i++){
        for (int j = 0; j<tamanho; j++){
            if (vetor[i]<vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    
    int cont= 1;
    cout<<"Frequencia: ";
    for (int i = 0; i<tamanho; i++) {
        if(vetor[i]==vetor[i+1] && i<tamanho){
            cont++;
        }else{
            cout<<"Numero "<<vetor[i]<<": "<<cont<<endl;
            cont = 1;
        }
    }
    return 0;
}
