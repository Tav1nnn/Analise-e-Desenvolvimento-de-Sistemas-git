#include <iostream>
using namespace std;

    int main () {
    int vetor[10];
    
    for (int i = 0; i<10; i++){
        cout<<endl<<"Digite o "<<i+1<<"° valor inteiro positivo do vetor: ";
        cin>>vetor[i];
    }
    
    int cont = 0;
    for (int i = 0; i<10; i++){
        if(vetor[i]>100 && vetor[i]<500){
            cont++;
        }
    }
    
    cout<<"Entre 100 e 500: "<<cont;

    return 0;
}
