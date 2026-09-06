#include <iostream>

using namespace std;

int main() {
    const int DIAS = 7;
    double temperaturas[DIAS];
    double soma = 0;

    // ENTRADA e Armazenamento no vetor
    cout << "REGISTRO DE TEMPERATURAS DOS 7 DIAS " << endl;
    for (int i = 0; i < DIAS; i++) {
        cout << "Temperatura do dia " << (i + 1) << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];
    }

    // PROCESSAMENTO - Média, Maior e Menor
    double media = soma / DIAS;
    double maior = temperaturas[0];
    double menor = temperaturas[0];

    for (int i = 1; i < DIAS; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
    }

    // PROCESSAMENTO - Dias acima da média
    int diasacimadamedia = 0;
    for (int i = 0; i < DIAS; i++) {
        if (temperaturas[i] > media) {
            diasacimadamedia++;
        }
    }

    // SAÍDA
    cout << "\nRELATORIO SEMANAL" << endl;
    cout << "Todas as temperaturas: ";
    for (int i = 0; i < DIAS; i++) {
        cout << temperaturas[i] << "°C ";
    }
    cout << endl;

    cout << "Media semanal: " << media << "°C" << endl;
    cout << "Maior temperatura: " << maior << "°C" << endl;
    cout << "Menor temperatura: " << menor << "°C" << endl;
    cout << "Dias com temperatura acima da media: " << diasacimadamedia << endl;

    return 0;
}
