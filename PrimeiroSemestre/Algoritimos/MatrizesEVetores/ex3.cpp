#include <iostream>
using namespace std;

int main() {
    int tamanho;
    
    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanho;
    
    string vetor[tamanho];
    
    for (int i = 0; i<tamanho; i++){
        cout<<endl<<"Digite a "<<i+1<<"° palavra do vetor: ";
        cin>>vetor[i];
    }
    
    for (int i = 0; i<tamanho; i++){
        cout<<"Vetor ["<<i+1<<"] = "<<vetor[i]<<endl;
    }

    return 0;
}
