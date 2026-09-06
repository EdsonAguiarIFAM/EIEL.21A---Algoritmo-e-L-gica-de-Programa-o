#include <iostream>
#include <list>

using namespace std;

int main() {
    int qtdPassageiros;
    list<int> idades;

    // ENTRADA: Quantidade de passageiros
    cout << "Digite a quantidade de passageiros: ";
    cin >> qtdPassageiros;

    // ENTRADA e Armazenamento na lista
    for (int i = 0; i < qtdPassageiros; i++) {
        int idade;
        cout << "Digite a idade do passageiro " << (i + 1) << ": ";
        cin >> idade;
        idades.push_back(idade);
    }

    // PROCESSAMENTO: Contagem por faixa etária
    int menores18 = 0;
    int idosos60 = 0;

    for (list<int>::iterator it = idades.begin(); it != idades.end(); ++it) {
        if (*it < 18) {
            menores18++;
        }
        if (*it >= 60) {
            idosos60++;
        }
    }

    // SAÍDA: Apresentação dos dados
    cout << "\nRESUMO DE PASSAGEIROS" << endl;
    cout << "Todas as idades cadastradas: ";
    for (list<int>::iterator it = idades.begin(); it != idades.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Quantidade total de passageiros: " << idades.size() << endl;
    cout << "Passageiros menores de 18 anos: " << menores18 << endl;
    cout << "Passageiros com 60 anos ou mais: " << idosos60 << endl;

    return 0;
}
