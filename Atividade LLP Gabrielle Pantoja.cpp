
#include <iostream>

using namespace std;

int main(){
    
    int p;
    int t1 = 0, t2= 1, proxTermo;
    
    
    cout<<"Informe o numero de periodos: ";
    cin>> p;
    
    if (p <= 0) {
        cout << "Numero de periodos invalido.";
    } else {
        for (int i = 1; i <= p; i++){
            if (i == 1) {
                cout << "Periodo" << i << ":" << t1 << "dispositivos" << endl;
            }
            else if (i==2) {
                cout << "Periodo" << i << ":" << t2 << "dispositivos" << endl;
            }
            else {
                proxTermo = t2 + t1;
                t1 = t2;
                t2 = proxTermo;
                cout << "Periodo" << i << ":" << t2 << "dispositivos" << endl;
            }
        }
    }

    return 0;
}