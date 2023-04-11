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
    
    for (int i = tamanho-1; i>=0; i--){
        cout<<"Vetor ["<<i+1<<"] = "<<vetor[i]<<endl;
    }

    return 0;
}
