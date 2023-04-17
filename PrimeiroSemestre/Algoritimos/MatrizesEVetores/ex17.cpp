#include <iostream>
using namespace std;

int main () {
    string aluno[7];
    float media[7];

    for (int i = 0; i<7; i++) {
        cout<<"Digite o nome do "<<i+1<<"° aluno: ";
        cin>>aluno[i];

        cout<<"Digite a media do aluno "<<aluno[i]<<": ";
        cin>>media[i];
    }

    float maior = 0;
    float menor = 0;
    int contMaior = 0;
    int contMenor = 0;

    for (int i = 0; i<7; i++) {
        if(media[i]>maior){
            maior = media[i];
            contMaior = i;
        }
        if(media[i]<menor){
            menor = media[i];
            contMenor = i;
        }
    }

    cout<<"O aluno "<<aluno[contMaior]<<" tem a maior media ("<<media[contMaior]<<")"<<endl;
    cout<<"O aluno "<<aluno[contMenor]<<" tem a menor media ("<<media[contMenor]<<")"<<endl;

    cout<<"Alunos que passaram: ";

    for (int i = 0; i<7; i++) {
        if(media[i]>6){
            cout<<aluno[i]<<endl;
        }
    }

    return 0;
}