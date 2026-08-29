#include <iostream>
using namespace std;

int main() {
	int periodos;
	
	cout << "Digite a quantidade de períodos que deseja analisar para mostrar a Sequencia de Fibonacci: ";
	cin  >> periodos;
	
	//Verifique se a quantidade de periodos é válida
	if (periodos <= 0) {
		cout << "Erro: a quantidade de periodos deve ser maior que zero. " << endl;
		return 0;
		
	}		
	
	//Primeiros dois valores da Sequência de Fibonacci 
	int anterior = 0;
	int atual = 1;
	
	cout << "\nCrescimento previsto: " << endl;
	
	for (int i = 1; i <= periodos; i++)  {
		cout << " Periodo " << i << ": " << anterior << " dispositivos " << endl;
		int proximo = anterior + atual;
		
		anterior = atual;
		atual = proximo;
		
	} 
		return 0;
	
}	
