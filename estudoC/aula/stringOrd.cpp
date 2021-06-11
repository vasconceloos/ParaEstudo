#include<iostream>

using namespace std;

int main() {

    string palavra;
    int tamanhoVetor, i, j;

    cin >> tamanhoVetor;
    string vetor[tamanhoVetor];

    for (i=0; i<tamanhoVetor; i++){
        cin >> vetor[i];
    }

    for (j=0; j<tamanhoVetor-1; j++) {
        menor_i = j;
        for (i=j+1; i<tamanhoVetor; i++){
            if (vetor[i] < vetor[menor_i]){
                menor_i = i;
                aux = vetor[j];
                vetor[j] = vetor[menor_i];
                vetor[menor_i] = aux;
            }
        }
    }

    for (i=0; i<tamanhoVetor; i++){
            cout << vetor[i];
        }

    return 0;
}