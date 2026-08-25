#include <iostream>

using namespace std;

int main(){

 int pds;
 int ant=0, atual=1, proximo;
 
   cout << "Digite o numero de periodos:";
   cin >> pds;
   
   if (pds<=0) {
     cout <<"Quantidade de periodos invalida.";
	 } else {
	 	for (int i = 1; i <= pds; i++) {
    	if (i == 1) {
    		cout << "Periodo " << i <<": "  << ant << " dispositivos" <<endl;}
    		  else if (i == 2) {
    		  	cout << "Periodo " << i <<": "  << atual << " dispositivos" <<endl;}
    		  	  else {
    		  	  	proximo = ant + atual;
    		  	  	ant = atual;
    		  	  	atual = proximo;
    		  	  	cout << "Periodo " << i <<": "  << atual << " dispositivos" <<endl;
    		  	  	}
			}	 	
	 }    
			return 0;
	}


