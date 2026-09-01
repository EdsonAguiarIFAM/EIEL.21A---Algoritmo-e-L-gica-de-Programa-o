#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
//essas são as bibliotecas que usamos:
// iostream para o cin e cout;
//vector para usar o vetor
// iomanip para usar decimais

int main() {
    int quantidade;

    cout << "=== Controle de Notas da Turma ===" << endl;
    cout << "Digite a quantidade de alunos: ";
    cin >> quantidade;
// perguntamos a quantidade de alunos que vão receber notas

    vector<float> notas;
// variavel nota do tipo inteira e decimal

    for (int i = 0; i < quantidade; i++) {
        float nota;
        cout << "Digite a nota do aluno " << (i + 1) << ": ";
        cin >> nota;
// perguntamos qual a nota, vai repetir ate i = quantidade
// no i + 1 ele começa mostrando aluno 1

        while (nota < 0 || nota > 10) {
            cout << "Nota invalida! Digite um valor entre 0 e 10: ";
            cin >> nota;
        }

// aqui ele nao permite digitar numeros menores que 0 e maior de 10
        notas.push_back(nota);
    }

    float soma = 0;
    for (int i = 0; i < notas.size(); i++) {
        soma += notas[i];
    }
    float media = soma / notas.size();
// cria a variavel soma, soma cada nota
// calcula a media dividindo pelo tamanho/quantidade das notas

    int aprovados = 0;
    int abaixoDaMedia = 0;
    for (int i = 0; i < notas.size(); i++) {
        if (notas[i] >= 6.0) {
            aprovados++;
        } else {
            abaixoDaMedia++;
        }
    }
// verifica quem tem nota da media e soma a variavel aprovados
// quem nao passar, fica para o abaixoDaMedia

    cout << fixed << setprecision(2);
    cout << "\n=== Resultado ===" << endl;
// mostra os resultados com decimais de ate duas casas

    cout << "Notas cadastradas: ";
    for (int i = 0; i < notas.size(); i++) {
        cout << notas[i];
        if (i < notas.size() - 1) cout << ", ";
    }
    cout << endl;
//mostra todas as notas cadastradas

    cout << "Media da turma: " << media << endl;
    cout << "Quantidade de aprovados (nota >= 6.0): " << aprovados << endl;
    cout << "Quantidade de alunos abaixo de 6.0: " << abaixoDaMedia << endl;
// apresenta os dados obtidos

    return 0;
}
