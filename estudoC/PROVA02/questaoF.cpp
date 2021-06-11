#include<iostream>

using namespace std;

int main() {

    int qtdCaminhantes, i, menor_i, j, qtdIdentificadores, aux=0, cont=0, x=0;

    cin >> qtdCaminhantes;
    int vetor[qtdCaminhantes];

  
    do{
        cin >> vetor[x];
        x++;
    }while(x<5 && vetor[x] != vetor[x-1]);

    for (j=0; j<qtdCaminhantes-1; j++) {
        menor_i = j;
        for (i=j+1; i<qtdCaminhantes; i++){
            if (vetor[i] < vetor[menor_i]){
                menor_i = i;
                aux = vetor[j];
                vetor[j] = vetor[menor_i];
                vetor[menor_i] = aux;
            }
        }
    }

    cin >> qtdIdentificadores;
    int vet[qtdIdentificadores];

    for(j=0; j<qtdIdentificadores; j++){
        cin >> vet[j];
    }

    for(i=0; i<qtdCaminhantes; i++){
        for(j=0; j<qtdIdentificadores; j++){
            if(vetor[i] == vet[j]){
                cont++;
            }
        }
    }

    if(cont == 1){
        cout << "Preparem o vidro de dragao!!!" << endl;
    }else{
        cout << "E assim termina nossa vigilia" << endl;
    }

    return 0;
}