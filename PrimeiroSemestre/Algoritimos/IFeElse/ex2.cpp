#include <iostream>

using namespace std;

int main () {

    int num;

    cout<<"Digite um valor: ";
    cin>>num;

    if((num%7)==0 || (num%23)==0){
        cout<<"O numero é divisivel por 7 ou 27";
    }else{
        cout<<"O valor nao e divisivel por 7 e 27";
    }

    return 0;
}