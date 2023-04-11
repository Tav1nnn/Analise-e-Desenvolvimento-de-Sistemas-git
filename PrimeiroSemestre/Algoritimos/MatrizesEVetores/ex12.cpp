#include <iostream>
using namespace std;

int main() {
    int tamanho;
    bool repetido = false;
    
    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanho;
    
    int vetor[tamanho];
    
    for (int i = 0; i<tamanho; i++){
        cout<<endl<<"Digite o "<<i+1<<"° valor do vetor: ";
        cin>>vetor[i];
    }
    cout<<"Numeros que estão repetidos no vetor: "<<endl;
    int numRepetido;
    
    for (int i = 0; i<tamanho; i++){
        for(int j = i+1; j<tamanho; j++){
            if(vetor[i]==vetor[j]){
                numRepetido = vetor[i];
                cout<<"=> "<<numRepetido<<endl;
                repetido = true;
                break;


            }
        }
        numRepetido = 0;
    }
    
    if(!repetido) cout<<"Não tem nenhum numero repetido.";
    
    return 0;
}
