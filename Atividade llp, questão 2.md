#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    const int TAM = 5;
    string produtos[TAM];
    int quantidades[TAM];

    // ENTRADA e Armazenamento nos vetores
    cout << "--- CADASTRO DE ESTOQUE ---" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Nome do produto " << (i + 1) << ": ";
        cin >> produtos[i];
        cout << "Quantidade em estoque de " << produtos[i] << ": ";
        cin >> quantidades[i];
    }

    // SAÍDA - Relação completa
    cout << "\n--- RELACAO COMPLETA DOS PRODUTOS ---" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Produto: " << produtos[i] << " | Quantidade: " << quantidades[i] << endl;
    }

    // PROCESSAMENTO E SAÍDA - Estoque baixo (< 5)
    cout << "\n--- PRODUTOS COM ESTOQUE BAIXO (PRECISAM DE REPOSICAO) ---" << endl;
    for (int i = 0; i < TAM; i++) {
        if (quantidades[i] < 5) {
            cout << "Produto: " << produtos[i] << " | Quantidade: " << quantidades[i] << endl;
        }
    }

    return 0;
}
