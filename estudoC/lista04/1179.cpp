#include<iostream>

using namespace std;

int main() {

    int numero, i, par=0, impar=0, p, im, x;

    p=0, im=0;

    int vetPar[5], vetImpar[5];
    for(i=0; i<15; i++){
        cin >> numero;

        if(numero%2 == 0){
            vetPar[par] = numero;
            par++;
        }else{
            vetImpar[impar] = numero;
            impar++;
        }
            
        if(par == 5){
            x = 0;
            while(x != 5){ 
                cout << "par[" << x << "] = " << vetPar[x] << endl;
                x++;
            }
                par=0;
        }
        if(impar == 5){
            x = 0;
            while(x != 5){ 
                cout << "impar[" << x << "] = " << vetImpar[x] << endl; 
                x++;
            }
                impar=0;
            }
        if(i == 14){
            x = 0;
            while(x < impar){ 
                cout << "impar[" << x << "] = " << vetImpar[x] << endl; 
                x++;
                }
                x = 0;
            while(x < par){ 
                cout << "par[" << x << "] = " << vetPar[x] << endl; 
                x++;
                }
            }
                 
    }
    return 0;
}