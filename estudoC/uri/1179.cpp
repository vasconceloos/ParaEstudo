#include<iostream>

using namespace std;

int main() {

    int i=0, numero,  par=0, impar=0;

    for(i=0; i<10; i++){
        cin >> numero;
        int vetPar[numero], vetImpar[numero];
        if(numero%2 == 0){
            vetPar[i] = numero;
            par++;
        }else{
            vetImpar[impar] = numero;
            impar++;
        }
        if(par == 5){
            for(i=0; i<5; i++){
                cout << "par[" << i << "] = " << vetPar[i] << endl;
            }
        }
    }

    return 0;
}