#include<iostream>

using namespace std;

int absoluto(int numero);

int main() {

    int numero, i, resposta;

    for(i=0; i<5; i++){

        cout << endl;
        cout << "Digite um número: ";
        cin >> numero;

        resposta = absoluto(numero);
        cout << "O valor absolutod de " << numero << " é: " << resposta << endl;

    }

    return 0;
}

int absoluto(int numero){

    if(numero<0){
        return numero*-1;
    }
    return numero;
}