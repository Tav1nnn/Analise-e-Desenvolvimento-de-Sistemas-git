#include <iostream>

using namespace std;

int main () {

    int ang1,ang2, ang3;

    cout<<"Digite os valores dos tres angulos: ";
    cin>>ang1>>ang2>>ang3;

    if(ang1 == 90 || ang2 == 90 || ang3 == 90){
        cout<<"Triangulo Retangulo";
    }else if(ang1 >  90 || ang2 >  90 || ang3 > 90){
        cout<<"Triangulo obtusangulo";
    }else if(ang1 <  90 || ang2 <  90 || ang3 < 90){
        cout<<"Triangulo ancutangulo";
    }

    return 0;
}