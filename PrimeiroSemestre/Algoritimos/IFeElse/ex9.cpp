#include <iostream>

using namespace std;

int main () {

    int ano;

    cout<<"digite um ano: ";
    cin>>ano;

    if(((ano%400)==0)||(((ano%4)==0)&&((ano%100)!=0))){
        cout<<"O ano e bissexto";

    }else{
        cout<<"O ano nao e bissexto";
    }

    return 0;
}