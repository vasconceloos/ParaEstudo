#include<iostream>

using namespace std;

int main() {

    int tamanhoVetor, i, menorValor=0, posicao = 0 ;

    cin >> tamanhoVetor;

    int vet[tamanhoVetor];
    for(i=0; i<tamanhoVetor; i++){
        cin >> vet[i];
    }
    
    menorValor = 1000;
    for(i=0; i<tamanhoVetor; i++){
        if(vet[i]<menorValor){
            menorValor = vet[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menorValor << endl << "Posicao: " << posicao << endl;

    return 0;
}