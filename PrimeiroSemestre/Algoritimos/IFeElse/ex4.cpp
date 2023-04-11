#include <iostream>

using namespace std;

int main () {
    float peso, altura, formula;
    string name;

    cout<<"digite seu nome: ";
    cin>>name;

    cout<<"digite sua altura: ";
    cin>>altura;

    cout<<"digite seu peso";
    cin>>peso;

    formula = peso/(altura*altura);

    if(formula<17) cout<<"muio abaixo do peso";
    else if(formula>=17 && formula<=18.49) cout<<name<<": abaixo do peso";
    else if(formula>=18.5 && formula<=24.99) cout<<name<<": peso normal";
    else if(formula>=25 && formula<=25.99) cout<<name<<": acima peso";
    else if(formula>=30 && formula<=34.99) cout<<name<<": obesidade I";
    else if(formula>=35 && formula<=39.99) cout<<name<<": obesidade II";
    else if(formula >=40) cout<<name<<": obesidade III";

    return 0;
}