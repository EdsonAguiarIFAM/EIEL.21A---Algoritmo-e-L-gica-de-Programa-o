#include <iostream>
using namespace std;

int main (){
    int periodos;
    
    cout << "Digite a quantidade de periodos: ";
     cin >> periodos;
     
     if (periodos<= 0){
	     cout << " Erro;: a quantidade de periodos deve ser maior que zero." << endl;
	 } 
	 else {
	    int a = 0;
	    int b = 1;
	    int proximo;
	    
	    for (int i = 1; i <=
periodos; i++) {
	        cout << "periodo " << i
<< ":" << a << endl;
           proximo = a + b;
           a = b;
           b = proximo;
     }
 }
 
 return 0;

}

	

    
