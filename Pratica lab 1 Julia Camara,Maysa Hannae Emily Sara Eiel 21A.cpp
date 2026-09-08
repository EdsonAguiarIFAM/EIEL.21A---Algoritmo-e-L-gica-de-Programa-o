#include <iostream>
using namespace std;

int main(){
    int periodos;
    
    cout << "digite a quantidade de periodos que deseja analisar:";
    cin >> periodos;
    
    if (periodos <= 0){
        cout << "erro a quantidade de periodos que deve ser maior que zero." << endl;
        return 0;
        
    }
int anterior = 0;
int atual = 1;

cout << "\nCrescimento previsto:" << endl;

    for ( int i = 1; i <= periodos; i++){
        cout << " Periodo " << i << " : " << anterior << "dispositivos" << endl;
        
        int proximo = anterior + atual;
        
        anterior = atual;
        atual = proximo;
    }
    return 0;
    
}
