#include <iostream>
#include <vector>

using namespace std;

int main() {
    int qtdAlunos;
    cout << "Digite a quantidade de alunos: ";
    cin >> qtdAlunos;

    vector<double> notas(qtdAlunos);
    double soma = 0;
    int aprovados = 0, abaixo = 0;

    // 1. Entrada e armazenamento das notas
    for (int i = 0; i < qtdAlunos; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i]; // Acumula para a média
    }

    // 2. Cálculo da média
    double media = soma / qtdAlunos;

    // 3. Verificação de aprovados e abaixo da média
    for (int i = 0; i < qtdAlunos; i++) {
        if (notas[i] >= 6.0) {
            aprovados++;
        } else {
            abaixo++;
        }
    }

    // 4. Exibição dos resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "Notas cadastradas: ";
    for (int i = 0; i < qtdAlunos; i++) {
        cout << notas[i] << " ";
    }
    
    cout << "\nMedia da turma: " << media << endl;
    cout << "Quantidade de aprovados (>= 6,0): " << aprovados << endl;
    cout << "Quantidade abaixo da media: " << abaixo << endl;

    return 0;
}
