#include <iostream>
using namespace std;

int main() {
    int periodos;

    cout << "Quantidade de periodos: ";
    cin >> periodos;

    // Verifica se a quantidade é válida
    if (periodos <= 0) {
        cout << "Erro: a quantidade de periodos deve ser maior que zero." << endl;
        return 0;
    }
     int anterior = 0;
    int atual = 1;
    int proximo;

    cout << "\nCrescimento previsto:\n";

    for (int i = 1; i <= periodos; i++) {
        cout << "Periodo " << i << ": " << anterior 
             << " dispositivos" << endl;

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return 0;
}
