#include <iostream>

using namespace std;

int main () {

    int num;

    cout<<"Digite um valor: ";
    cin>>num;

    if((num%2)==0 && (num%10)==0){
        cout<<"Numero par e divisivel por 10";
    }else{
        cout<<"numero nao e par e divisivel por 10";
    }

    return 0;
}