#include <iostream>

using namespace std;

int main (){

    float p1,p2, t1, t2, t3, t4,media;

    cout<<"Digite as notas das Provas 1 e 2"<<endl;
    cin>>p1>>p2;
    cout<<"Digite as notas dos Trabalhos 1, 2, 3 e 4"<<endl;
    cin>>t1>>t2>>t3>>t4;

    media = (((p1+p2)/2)+((t1+t2+t3+t4)/4))/2;

    if(media>=7.0)cout<<"Aprovado";

    else if(media>=4 && media<=6.99)cout<<"Recuperação";

    else if(media<4)cout<<"Reprovado";

    return 0;
}