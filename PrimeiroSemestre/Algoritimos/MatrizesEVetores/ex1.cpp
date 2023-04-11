#include <iostream>
using namespace std;

int main() {
    float vetor[10];
    
    for (int i = 0; i<10; i++){
        cout<<endl<<"Digite o "<<i+1<<"° valor do vetor: ";
        cin>>vetor[i];
    }
    
    for (int i = 0; i<10; i++){
        cout<<"Vetor ["<<i+1<<"] = "<<vetor[i]<<endl;
    }

    return 0;
}
