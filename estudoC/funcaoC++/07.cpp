#include<iostream>

using namespace std;

int verificaParImpar(int numero);

int main() {

    int numero, resposta;

    cout << "Digite um número: ";
    cin >> numero;

    resposta = verificaParImpar(numero);

    cout << "1 - Par e 0 - Impar" << endl;
    cout << resposta << endl;

    return 0;
}

int verificaParImpar(int numero){

    if(numero % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}