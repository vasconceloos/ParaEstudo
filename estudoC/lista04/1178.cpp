#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int i;
    double valor;

    cin >> valor;

    double vetValor[100];

    for (i=0; i<100; i++){
        vetValor[i] = valor;
        valor = valor/2;
    }
    

    for (i=0; i<100; i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4) << vetValor[i] << endl;
    }

    return 0;
}