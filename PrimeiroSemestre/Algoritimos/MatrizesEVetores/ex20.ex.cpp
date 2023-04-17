#include <iostream>

using namespace std;

int main () {

    string matriz[3][3];
    int linhaX = 0;
    int colunaX = 0;
    int diagonal1X = 0;
    int diagonal2X = 0;
    int linhaO = 0;
    int colunaO = 0;
    int diagonal1O = 0;
    int diagonal2O = 0;

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            cout<<endl<<"Digite X ou O "<<i<<"-"<<j<<": ";
            cin>>matriz[i][j];
        } 
    }
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            if(matriz[i][j]=="X"){
                linhaX++;
            }
            else if(matriz[i][j]=="O"){
                linhaO++;
            }
        }
        if(linhaX==3){
            cout<<"Sequencia de X na linha "<<i<<endl;
        }
        linhaX = 0;
        if(linhaO==3){
            cout<<"Sequencia de O na linha "<<i<<endl;
        }
        linhaO = 0;
    }

    for (int j = 0; j<3; j++) {
        for (int i = 0; i<3; i++) {
            if(matriz[i][j]=="X"){
                colunaX++;
            }
            else if(matriz[i][j]=="O"){
                colunaO++;
            }
        }
        if(colunaX==3){
            cout<<"Sequencia de X na coluna "<<j<<endl;
        }
        colunaX = 0;
        if(colunaO==3){
            cout<<"Sequencia de O na coluna "<<j<<endl;
        }
        colunaO = 0;
    }


    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            if(i == j && matriz[i][j]=="X"){
                diagonal1X++;
            }
            else if(i == j && matriz[i][j]=="O"){
                diagonal1O++;
            }
        }
        
    }
    if(diagonal1X==3){
            cout<<"Sequencia de X na diagonal 1 "<<endl;
    }else if(diagonal1O==3){
            cout<<"Sequencia de O na diagonal 1 "<<endl;
    }

    diagonal1X = 0;
    diagonal1O = 0;

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            if(i != 0 && j != 0 && i == j && matriz[i][j]=="X") {
                diagonal2X++;

            }else if(i != 0 && j != 0 && i == j && matriz[i][j]=="O") {
                diagonal2O++;

            }else if(i == 0 && j == 2 && matriz[i][j]=="X") {
                diagonal2X++;

            }else if (i == 2 && i == 0 && matriz[i][j]=="X") {
                diagonal2X++;

            }else if(i == 0 && j == 2 && matriz[i][j]=="O") {
                diagonal2O++;

            }else if (i == 2 && i == 0 && matriz[i][j]=="O") {
                diagonal2O++;
            }
        }
        
    }
    if(diagonal2X==3){
            cout<<"Sequencia de X na diagonal 2 "<<endl;
    }else if(diagonal2O==3){
        cout<<"Sequencia de O na diagonal 2 "<<endl;
    }

    diagonal2X = 0;
    diagonal2O = 0;
    
    return 0;
}