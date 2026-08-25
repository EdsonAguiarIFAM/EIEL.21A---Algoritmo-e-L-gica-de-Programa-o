#include <iostream>
#include <string>

using namespace std;

int main()
{
	int quantidade;
	
	// Solicitação de Quantidade
	cout << "Informe quantos periodos voce deseja analisar: ";
	cin >> quantidade;
	
	// Verificação do valor informado, e exibição da mensagem caso valor informado seja igual ou menor que zero
	if (quantidade <= 0){
		cout << "ERRO!! VOCÊ DEVE INFORMAR PERIODOS MAIORES DO QUE 0." << endl;
		return 0;
	}
	
	//long long é um tipo de variável que guarda número inteiro, igual ao int, só que melhor, pois o int só aguenta Fibonacci até o período 46, enquanto o lon long aguenta até o período 92. Após ultrapassar o limite, o número buga e fica negativo
	long long f0 = 0;
	long long f1 = 1;
	long long atual = 0;
	
	
	cout << "\nCrescimento previsto:" << endl;
	
	// Estruta de repetição for
	for (int i = 1; i<=quantidade; i++){
		if (i==1){
			atual = f0;
		} else if (i==2){
			atual = f1;
		} else{
			// F(n) = F(n-1) + F(n-2)
			long long proximo = f0 + f1;
			f0 = f1;
			f1 = proximo;
			atual = proximo;
		}
		
		//Exibe cada período
		cout << "Periodo " <<i<< ": " << atual << "Dispositivos" << endl;
	}
	
	return 0;
	
}
