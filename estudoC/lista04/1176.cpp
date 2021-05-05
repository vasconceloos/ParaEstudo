#include<iostream>

using namespace std;

int main() {

    int casosTeste, i, numero;
    long long vetFibonacci[61];

    cin >> casosTeste;

    vetFibonacci[0] = 0;
    vetFibonacci[1] = 1;

    for(i=2; i<= 60; i++){

        vetFibonacci[i] = vetFibonacci[i-2] + vetFibonacci[i-1];
    }

    for (int j=0; j<casosTeste; j++){
        cin >> numero;
        cout << "Fib(" << numero << ") = " << vetFibonacci[numero] << endl; 
    }
    
    return 0;
}