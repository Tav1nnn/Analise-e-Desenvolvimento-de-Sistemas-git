#include <iostream>

using namespace std;

int main () {

    int num1, num2, num3;

    cout<<"Digite tres valores em sequencia: "<<endl;
    cin>>num1>>num2>>num3;

    /*
        num1, num2, num3
        num3, num2, num1
        num1, num3, num2
        num2, num3, num1
        num3, num1, num2
        num2, num1, num3
    */

    if(num1<num2 && num2<num3){
        cout<<"Crescente: "<<num1<<" "<<num2<<" "<<num3;

    }else if(num1>num2 && num2>num3){
        cout<<"Crescente: "<<num3<<" "<<num2<<" "<<num1;

    }else if(num1<num3 && num3<num2){
        cout<<"Crescente: "<<num1<<" "<<num3<<" "<<num2;

    }else if(num2<num3 && num3<num1){
        cout<<"Crescente: "<<num2<<" "<<num3<<" "<<num1;

    }else if(num3<num1 && num1<num2){
        cout<<"Crescente: "<<num3<<" "<<num1<<" "<<num2;

    }else if(num2<num1 && num1<num3){
        cout<<"Crescente: "<<num2<<" "<<num1<<" "<<num3;

    }

    return 0;
}