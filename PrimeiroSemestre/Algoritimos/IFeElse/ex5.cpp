#include <iostream>

using namespace std;

int main () {

    float l1,l2,l3;
    
    cout<<"Digite o valor do lado 1";
    cin>>l1;
    cout<<"Digite o valor do lado 2";    
    cin>>l2;
    cout<<"Digite o valor do lado 3";    
    cin>>l3;

    if(l1==l2==l3){
        cout<<"equilatero";
    }else if(l1 == l2 || l1 == l3 || l3 == l2){
        cout<<"isoceles";
    }else{
        cout<<"escaleno";
    }
    return 0;
}