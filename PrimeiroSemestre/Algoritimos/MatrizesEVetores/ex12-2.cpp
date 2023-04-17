#include <iostream>

using namespace std;

int main () {
    int vetor[5] = {3,1,2,1,3};

    for (int i = 0; i<5; i++) {
        for (int j = i+1; j<5; j++) {
            if (vetor[i]==vetor[j]){
                cout<<"=> "<<vetor[i]<<endl;
            }
        }
    }
    return 0;
}