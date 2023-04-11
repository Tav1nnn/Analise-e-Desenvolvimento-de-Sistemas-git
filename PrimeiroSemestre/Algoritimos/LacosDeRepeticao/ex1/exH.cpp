#include <iostream>

using namespace std;

int main () {

    int mult = 1;

    for (int i = 2; i<=5; i++){
        mult = mult*i;
        
    }

    cout<<"mult: "<<mult;
    return 0;
}