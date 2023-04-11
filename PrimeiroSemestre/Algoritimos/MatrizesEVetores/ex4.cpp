#include <iostream>
using namespace std;

int main () {
    int vetor[5];
    
    for (int i = 0; i<5; i++){
        do {
            cout<<endl<<"Digite o "<<i+1<<"° valor inteiro positivo do vetor: ";
            cin>>vetor[i];
        }
        while (vetor[i]<=0);
        
    }
    
    for (int i = 0; i<5; i++){
        cout<<"Vetor ["<<i+1<<"] = "<<vetor[i]<<endl;
    }

    return 0;
}