#include <iostream>
using namespace std;

int main () {
    int tamanho;
    bool decrescente = false;

    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanho;

    while (tamanho <= 0) {
        cout<<"O tamanho nao pode ser negativo"<<endl;
        cout<<"Digite novamente o tamanho do vetor: ";
        cin>>tamanho;
    }
    
    int vetor[tamanho];

    for (int i = 0; i<tamanho; i++) {
        cout<<"Digite o valor ["<<i+1<<"] do vetor: ";
        cin>>vetor[i];
    }

    int i = 0;
    
    while (vetor[i]>vetor[i+1]){
        if(i==(tamanho-2)){
            decrescente = true;
            break;
        }
        i++;
    }

    if (decrescente){
        cout<<"o vetor esta decrescente";
    }else{
        cout<<"o vetor nao esta decrescente";
    }

    return 0;
}