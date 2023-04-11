#include <iostream>

using namespace std;

int main () {

    int num;

    cout<<"Digite um numero natural: ";
    cin>>num;

    while(num%2!=0 && num<=0){
        cout<<"Este numero nao e natural. Digite novamente: ";
        cin>>num;
    }

    for(int i = 0; i <=10; i++) {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }

    return 0;
}