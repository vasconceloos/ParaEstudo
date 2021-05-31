#include<iostream>

using namespace std;

int divisores(int numero);

int main() {

    int numero, i, resposta;

    for(i=0; i<5; i++){
        
        cout << "Digite um número: ";
        cin >> numero;

        resposta = divisores(numero);
        cout << "A soma dos divisores é: " << resposta << endl;
        cout << endl;

    }

    return 0;
}

int divisores(int numero){

    int x=1, soma=0;
    while(x < numero){
        if(numero % x == 0){
            soma += x;
        }
        x++;
    }
    return soma;
}