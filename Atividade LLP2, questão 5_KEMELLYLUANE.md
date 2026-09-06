#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> pedidos;
    int opcao;

    do {
        cout << "\nMENU DA LANCHONETE" << endl;
        cout << "1 - Adicionar pedido" << endl;
        cout << "2 - Mostrar pedidos" << endl;
        cout << "3 - Mostrar quantidade de pedidos" << endl;
        cout << "0 - Encerrar" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                string nomeProduto;
                cout << "Digite o nome do produto: ";
                cin.ignore(); 
                getline(cin, nomeProduto);
                pedidos.push_back(nomeProduto);
                cout << "Pedido adicionado com sucesso!" << endl;
                break;
            }
            case 2:
               
                cout << "\nLISTA DE PEDIDOS" << endl;
                if (pedidos.empty()) {
                    cout << "Nenhum pedido cadastrado." << endl;
                } else {
                    int i = 1;
                    for (list<string>::iterator it = pedidos.begin(); it != pedidos.end(); ++it) {
                        cout << i++ << ". " << *it << endl;
                    }
                }
                break;

            case 3:
                cout << "Quantidade total de pedidos: " << pedidos.size() << endl;
                break;

            case 0:
                cout << "Encerrando o programa..." << endl;
                break;

            default:
                cout << "Opcao invalida! Tente novamente." << endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}
