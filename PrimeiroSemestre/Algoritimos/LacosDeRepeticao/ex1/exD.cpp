#include <iostream>

using namespace std;

int main () {

    for (int i = 20; i>=0; i--){
        if(i!=0){
            cout<<i<<" - ";
        }else{
            cout<<i;
        }
    }

    return 0;
}