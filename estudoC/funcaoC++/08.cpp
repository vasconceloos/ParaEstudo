#include<iostream>

using namespace std;

int verifica(int numero);

int main() {

    int numero, resposta;

    cout << "Digite um número: ";
    cin >> numero;
    
    resposta = verifica(numero);
    cout << "O número é: Positivo = 1 ou Negativo = -1 ou Zero" << endl;
    cout << resposta << endl;
    return 0;
}

int verifica(int numero){

    if(numero < 0){
        return -1;
    }if(numero > 0){
        return 1;
    }else if(numero == 0){
        return 0;
    }

}