#include <iostream>

using namespace std;

int main () {

    int num1, num2, num3;

    cout<<"Digite tres valores em sequencia: "<<endl;
    cin>>num1>>num2>>num3;


    if(num1 > num2){
        swap(num1,num2);

    }if(num2 > num3){
        swap(num2,num3);
        
    }if(num1 > num2){
        swap(num1,num2);      
    }
   

    cout<<"Crescente: "<<num1<<" "<<num2<<" "<<num3;

    return 0;
}