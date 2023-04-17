#include <iostream>
#include <string>


using namespace std;

const int DAA_quantidadeMaximaDeProdutos = 3;
int DAA_seletorMenu; // opção selecionada no menu
int DAA_controleQuantidadeCadastrados = 0; //variavel para controlar quantos produtos foram cadastrados


string DAA_nomeProduto[DAA_quantidadeMaximaDeProdutos]; // vetor de nomes de produtos
float DAA_precoProduto[DAA_quantidadeMaximaDeProdutos]; // vetor de preço de produtos
float DAA_quantidadeProdutoEstoque[DAA_quantidadeMaximaDeProdutos]; // vetor de quantidade de produtos em estoque
string DAA_unidadeMedidaProduto[DAA_quantidadeMaximaDeProdutos]; //tipos Unidade e Mililitros

void DAA_menu(); // declaração da função que apresenta o MENU
void DAA_cadastrarProdutos(); // declaração da função que cadastro os produtos
void DAA_listarProdutos(); // declaração da função que lista os produtos
void DAA_compraDeProdutos(); // declaração da função que compra os produtos
void DAA_vendaDeProdutos();  // declaração da função que vende os produtos
void DAA_editarProdutos(); // declaração da função que edita os produtos
void DAA_excluiProdutos(); // declaração da função que excluir os produtos
int OT_informar_o_codigo();

//---------------------------------------------------------------------------------------------------
string DAA_voltaMenu; //variável auxiliar para esperar o usuário pressionar enter para voltar ao menu

void DAA_operacaoSucesso(){ //função para informar que a operação foi realizada com sucesso
    cout<<"Operação Realizada com Sucesso\n\n";
}

void DAA_limparTela(){ //função para limpar o console
    system("clear");
}

void DAA_limpaTelaTeclando(){ //função para limpar o console assim que o usuario teclar ENTER
    cout << "pressione enter para voltar ao MENU...";
    getline(cin,DAA_voltaMenu); // getline permite ler mais de uma palavra na mesma variável
    getline(cin,DAA_voltaMenu); // 2x getline para contornar o problema de passar pela variável sem digital nada
    DAA_limparTela(); //chamando a função de limpar o console
}

//---------------------------------------------------------------------------------------------------

void DAA_compraDeProdutos(){
    int DAA_codigoProdutoComprado;
    float DAA_quantidadeProdutoComprado;
    cout<<"Informe o codigo do Produto: ";
    cin>>DAA_codigoProdutoComprado;
    
    while(DAA_codigoProdutoComprado < 0 || DAA_codigoProdutoComprado > DAA_controleQuantidadeCadastrados){
        cout<<"Codigo inexistente, informe um codigo valido";
        cout<<"Informe o codigo do Produto: ";
        cin>>DAA_codigoProdutoComprado;
    }
    
    cout<<"Qual a quantidade que quer comprar do Produto "<<DAA_nomeProduto[DAA_codigoProdutoComprado]<<": ";
    cin>>DAA_quantidadeProdutoComprado;
    DAA_quantidadeProdutoEstoque[DAA_codigoProdutoComprado] = DAA_quantidadeProdutoEstoque[DAA_codigoProdutoComprado] + DAA_quantidadeProdutoComprado;
    
    cout<<"O produto "<<DAA_nomeProduto[DAA_codigoProdutoComprado]<<" agora tem "<<DAA_quantidadeProdutoEstoque[DAA_codigoProdutoComprado]
        <<DAA_unidadeMedidaProduto[DAA_codigoProdutoComprado]<<" em estoque\n\n";
    
    DAA_limpaTelaTeclando();
    
}

//---------------------------------------------------------------------------------------------------

void DAA_vendaDeProdutos(){
    int OT_codigo = OT_informar_o_codigo();
    float OT_qtdProduto;

    if (DAA_quantidadeProdutoEstoque == 0) {
        cout<<"Este produto não tem em estoque.";
        DAA_menu();
    }

    cout<<"Digite a quantidade de que será vendida do produto "<<DAA_nomeProduto[OT_codigo]<<": ";
    cin>>OT_qtdProduto;

    while (DAA_quantidadeProdutoEstoque[OT_codigo] < OT_qtdProduto) {
        cout<<"Essa quantida está acima do estoque."<<endl;
        cout<<"Digite a quantidade de que será vendida do produto "<<DAA_nomeProduto[OT_codigo]<<"novamente: ";
        cin>>OT_qtdProduto;
    }

    DAA_quantidadeProdutoEstoque[OT_codigo] -= OT_qtdProduto;

    cout<<"Valor total: "<<DAA_precoProduto[OT_codigo]*OT_qtdProduto<<endl;
    cout<<"Venda finalizada"<<endl;
    DAA_limpaTelaTeclando();
}

//---------------------------------------------------------------------------------------------------

void DAA_editarProdutos(){
    cout<<"############## Editar Preço do produto #################\n";
    int OT_codigo = OT_informar_o_codigo();

    cout<<"Digite o novo preço do produto "<<DAA_nomeProduto[OT_codigo]<<": ";
    cin>>DAA_precoProduto[OT_codigo];
    DAA_limpaTelaTeclando();
}

//---------------------------------------------------------------------------------------------------

void DAA_excluiProdutos(){
    cout<<"############## Deletar produto #################\n";

    int OT_codigo  = OT_informar_o_codigo();

    if(OT_codigo == 2){
        DAA_controleQuantidadeCadastrados--;    
    }else{
        DAA_nomeProduto[OT_codigo] = DAA_nomeProduto[OT_codigo+1];
        DAA_precoProduto[OT_codigo] = DAA_precoProduto[OT_codigo+1];
        DAA_quantidadeProdutoEstoque[OT_codigo] = DAA_quantidadeProdutoEstoque[OT_codigo+1]; 
        DAA_unidadeMedidaProduto[OT_codigo] = DAA_unidadeMedidaProduto[OT_codigo+1]; 
        DAA_controleQuantidadeCadastrados--;
    }
    
    DAA_limpaTelaTeclando();
}
//---------------------------------------------------------------------------------------------------

int OT_informar_o_codigo(){
    int OT_codigo = 0;
    cout<<"Digite o código do produto: ";
    cin>>OT_codigo;

    while (OT_codigo>DAA_quantidadeMaximaDeProdutos) {
        cout<<"Não existe produto com esse código."<<endl;
        cout<<"Digite o código do produto: ";
        cin>>OT_codigo;
    }

    DAA_limparTela();
    return OT_codigo;
}

//---------------------------------------------------------------------------------------------------

void DAA_cadastrarProdutos(){
    bool continuarCadastrando = true;
    while(continuarCadastrando == true){
        cout<<"############## Cadastro de Produto #################\n";
        
        if (DAA_controleQuantidadeCadastrados < DAA_quantidadeMaximaDeProdutos){ //verifica se não chegou no nivel maximo de cadastros
            cout << "Nome do produto: ";
            getline(cin,DAA_nomeProduto[DAA_controleQuantidadeCadastrados]);
            getline(cin,DAA_nomeProduto[DAA_controleQuantidadeCadastrados]);
            DAA_quantidadeProdutoEstoque[DAA_controleQuantidadeCadastrados] = 0;
            cout << "Preço do produto "<<DAA_nomeProduto[DAA_controleQuantidadeCadastrados]<<": ";
            cin >> DAA_precoProduto[DAA_controleQuantidadeCadastrados];
            int DAA_auxiliarEscolhaUnidadeMedida=0;
            do{
                cout<<"Qual a unidade de Medida do Produto?\n";
                cout<<"1 - ML ou 2 - Unidade\n";
                cin>>   DAA_auxiliarEscolhaUnidadeMedida;
                     if(DAA_auxiliarEscolhaUnidadeMedida == 1) DAA_unidadeMedidaProduto[DAA_controleQuantidadeCadastrados] = " Mililitros";
                else if(DAA_auxiliarEscolhaUnidadeMedida == 2) DAA_unidadeMedidaProduto[DAA_controleQuantidadeCadastrados] = " Unidades";
                else cout<<"Somente deve ser inserido valores 1 e 2, sendo 1 - ML ou 2 - Unidade\n";
            }while(DAA_auxiliarEscolhaUnidadeMedida < 1 || DAA_auxiliarEscolhaUnidadeMedida > 2);
        
            DAA_controleQuantidadeCadastrados++;
            DAA_operacaoSucesso();
        }else{
            cout << "Quantidade máxima de produtos atingida";
        }

        string simOuNao = "s";
        do{
            cout<<"Deseja Continuar Cadastrando?\n";
            cout<<"s = SIM ou n = Não\n";
            cin>>simOuNao;
            if(simOuNao != "s" && simOuNao != "n" && simOuNao != "S" && simOuNao != "N"){
                cout<<"Responda somente com s ou n\n";
            }else if(simOuNao == "n" || simOuNao == "N") continuarCadastrando = false;
             else{
                DAA_limparTela();   
            }
        }while(simOuNao != "s" && simOuNao != "n" && simOuNao != "S" && simOuNao != "N");
        
    }
    
    DAA_limpaTelaTeclando();
    
}

//---------------------------------------------------------------------------------------------------

void DAA_listarProdutos(){
    cout << "################ Lista de Produtos ################"<< endl;
    for (int i=0; i < DAA_controleQuantidadeCadastrados; i++) {
        cout<< DAA_quantidadeProdutoEstoque[i] << DAA_unidadeMedidaProduto[i] << " do Produto " <<
        DAA_nomeProduto[i] << "\nCom o Valor de " << DAA_precoProduto[i] << "RS em estoque, ";
        cout<<"Codigo: "<<i<<endl;
        cout<<"-------------------------------------------------------------------------\n\n";
    }
    DAA_limpaTelaTeclando();
}

//---------------------------------------------------------------------------------------------------

void DAA_menu(){
    bool fechar = false;
    
    while(fechar == false){
    
        cout << "*************************************************"<< endl;
        cout << "**************** Defensivos NSLO ****************"<< endl;
        cout << "*************************************************"<< endl;
        cout << "1 - Realizar Cadastro de Produtos"                << endl;
        cout << "2 - Realizar a Alteraração de Preço de um Produto"<< endl;
        cout << "3 - Realizar a Deleção de um Produto"             << endl;
        cout << "4 - Realizar a Compra de um Produto"              << endl;
        cout << "5 - Realizar a Venda de um Produto"               << endl;
        cout << "6 - Lista Todos os Produtos"                      << endl;
        cout << "0 - Sair do Sistema"                              << endl;
        cout << "Opção do Menu: ";
        cin >> DAA_seletorMenu;
        if (DAA_seletorMenu == 1){
            DAA_limparTela();
            DAA_cadastrarProdutos();
        }
        else if(DAA_seletorMenu == 2){
            DAA_limparTela();
            DAA_editarProdutos();
        }else if(DAA_seletorMenu == 3){
            DAA_limparTela();
            DAA_excluiProdutos();
        }else if (DAA_seletorMenu == 4){
            DAA_limparTela();
            DAA_compraDeProdutos();
        }else if(DAA_seletorMenu == 5){
            DAA_limparTela();
            DAA_vendaDeProdutos();
        }else if (DAA_seletorMenu == 6){
            DAA_limparTela();
            DAA_listarProdutos();
        }else if(DAA_seletorMenu == 0){
            fechar = true;
        }else{
            system("clear");
            cout << "Opção inválida " << endl;
        }
    }

}

int main()
{
    DAA_menu();
    return 0;
}