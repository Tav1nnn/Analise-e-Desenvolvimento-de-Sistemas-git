#include <iostream>

using namespace std;

int main () {
    
    float salario;

    cout<<"Digite o seu salario: ";
    cin>>salario;

    if(salario<=1320){
        salario = (salario*0.11)+salario;
    }else if(salario>1320 && salario<=3000){
        salario = (salario*0.09)+salario;
    }else if(salario>3000 && salario<=7000){
        salario = (salario*0.06)+salario;
    }else{
        salario = (salario*0.01)+salario;
    }

    cout<<"Salario com aumento: "<<salario;

    return 0;
}