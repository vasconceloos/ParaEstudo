#include<iostream>

using namespace std;

int main() {

    int i, j, tamanhoVetor, menor_i=0, aux=0, cont=0;

    cin >> tamanhoVetor;
    int vetor[tamanhoVetor];

    for(i=0; i<tamanhoVetor; i++){
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

    for(i=0; i<tamanhoVetor; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    if(cont >= 1){
        cout << "nao esta ordenado: executou " << cont << " permutas" << endl;
    }else{  
        cout << "esta ordenado: executou 0 permutas" << endl;
    }

    return 0;
}