#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main () {
    //vector não precisa ser declarado tamanho
    vector<int> v1;
    vector<int> v2;
    
    int tamanho1, tamanho2;
    
    cout<<"Digite o tamano do vetor 1: ";
    cin>>tamanho1;
    cout<<endl;
    
    for (int i = 0; i<tamanho1; i++) {
        int aux = 0;
        cout<<"Digite o "<<i+1<<"° valor do vetor: ";
        cin>>aux;
        
        v1.push_back(aux);
    }
    cout<<endl;
    
    cout<<"Digite o tamano do vetor 2: ";
    cin>>tamanho2;
    cout<<endl;
    
    for (int i = 0; i<tamanho2; i++) {
        int aux = 0;
        cout<<"Digite o "<<i+1<<"° valor do vetor: ";
        cin>>aux;
        
        v2.push_back(aux);
    }
    
    //o set ele ordena um vector e tira o seus elementos repetidos
    set<int> s1(v1.begin(), v1.end());//begin inicio do vector end o final
    set<int> s2(v2.begin(), v2.end());
    
    vector<int> v3;
    
    //esse for ele percorre o set e salva o valor dele na variavel i ou j
    for(auto i : s1){
        for(auto j: s2){
            if(i==j){
                //se eles forem iguais salva no vector de intersecção
                v3.push_back(i);
            }
        }
    }
    
    cout<<"intersecção do Vetor 1 com Vetor 2"<<endl;
    for(auto i : v3){
        cout<<i<<" ";
    }
    
    return 0;
}
