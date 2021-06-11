#include<iostream>

using namespace std;

int main() {

    int tamanhoVetor, i, j, menor_i=0, aux=0;

    cin >> tamanhoVetor;
    int vetor[tamanhoVetor];

    for(i=0; i<tamanhoVetor; i++){
        cin >> vetor[i];
    }

    if(tamanhoVetor % 2 == 0 ){
        for (j=0; j<tamanhoVetor-1; j++) {
            menor_i = j;
            for (i=j+1; i<tamanhoVetor; i++)
                if (vetor[i] < vetor[menor_i])
                    menor_i = i;
                    aux = vetor[j];
                    vetor[j] = vetor[menor_i];
                    vetor[menor_i] = aux;
        }
    }else{
        for (j=0; j<tamanhoVetor-1; j++) {
            menor_i = j;
            for (i=j+1; i<tamanhoVetor; i++)
                if (vetor[i] > vetor[menor_i])
                    menor_i = i;
                    aux = vetor[j];
                    vetor[j] = vetor[menor_i];
                    vetor[menor_i] = aux;
        }
    }



    if(tamanhoVetor % 2 == 0){
        for(i=0; i<tamanhoVetor; i++){
            cout << vetor[i] << ' ';
        }
        cout << endl;
    }else{
        for(i=0; i<tamanhoVetor; i++){
            cout << vetor[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}