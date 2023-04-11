#include <iostream>

using namespace std;

int main () {

    float p1, p2, t1, t2;

    cout<<"Digite a nota da Prova 1 e 2: "<<endl;
    cin>>p1>>p2;

    cout<<"Digite a nota do Trabalho 1 e 2: "<<endl;
    cin>>t1>>t2;

    float media = (p1+p2+t1+t2)/4;

    if(media>=7.0)cout<<"Aprovado";

    else if(media>=4 && media<=6.99)cout<<"Recuperação";

    else if(media<4)cout<<"Reprovado";

    return 0;
}