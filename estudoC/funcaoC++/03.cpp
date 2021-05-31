#include<iostream>

using namespace std;

int potencia(int base, int expoente);

int main() {

    int base, expoente, resposta;

    cout << "Digite a base e o expoente respectivamente: " << endl; 
    cin >> base >> expoente;

    resposta = potencia(base, expoente);

    cout << base << " elevado a " << expoente << " é: " << resposta << endl;

    return 0;
}

int potencia(int base, int expoente){
    int i =0, temp;

    temp = 1;
    while (i < expoente){
        temp *= base;
        i++;
    }

    return temp;
    
}