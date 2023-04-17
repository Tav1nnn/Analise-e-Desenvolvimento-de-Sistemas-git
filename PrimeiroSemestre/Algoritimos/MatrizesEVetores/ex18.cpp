#include <iostream>

using namespace std;

int main () {
    int linha, coluna;

    cout<<"Digite o tamanho da linha e coluna da matriz";
    cin>>linha>>coluna;

    int matriz[linha][coluna];
    for (int i = 0; i<linha; i++) {
        for (int j = 0; j<coluna; j++){
            cout<<endl<<"Digite a posicao "<<i<<" "<<j<<" ";
            cin>>matriz[i][j];
        }
    }

    cout<<"media geral"<<endl;
    int media = 0;
    for (int i = 0; i<linha; i++) {
        for (int j = 0; j<coluna; j++){
            media += matriz[i][j];
        }
    }

    cout<<"media: "<<media/(linha*coluna);

    cout<<endl<<"media linha"<<endl;
    media = 0;
    for (int i = 0; i<linha; i++) {
        for (int j = 0; j<coluna; j++){
            media += matriz[i][j];
        }
        cout<<"media linha "<<i<<" "<<media/coluna<<endl;
        media = 0;
    }

    cout<<endl<<"media coluna"<<endl;
    media = 0;
    for (int i = 0; i<coluna; i++) {
        for (int j = 0; j<linha; j++){
            media += matriz[j][i];
        }
        cout<<"media coluna "<<i<<" "<<media/linha<<endl;
        media = 0;
    }

    cout<<endl<<"media linha"<<endl;
    int menor = matriz[0][0];
    int pLinha = 0;
    int pColuna = 0;
    for (int i = 0; i<linha; i++) {
        for (int j = 0; j<coluna; j++){
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
                pLinha = i;
                pColuna = j;
            }
        }
    }

    cout<<"Menor valor "<<endl;
    cout<<"posicao: "<<pLinha<<" "<<pColuna<<endl;
    cout<<"menor "<<menor<<endl;

    cout<<endl<<"soma diagonal 1"<<endl;
    int soma = 0;
    for (int i = 0; i<linha; i++) {
        for (int j = 0; j<coluna; j++){
           if(i==j){
            soma += matriz[i][j];
           }
        }
    }
    cout<<"Soma: "<<soma;

    cout<<endl<<"soma diagonal 2"<<endl;
    soma = 0;
    for (int i = 0; i<linha; i++) {
        for (int j = 0; j<coluna; j++){
           if(i==0 && j == coluna-1 || i == linha-1 && j == 0){
                soma+=matriz[i][j];

           }else if(i != 0 && i!=linha && i == j){
            soma+= matriz[i][j];
           }
        }
    }
    cout<<"Soma: "<<soma;
    
    return 0;
}