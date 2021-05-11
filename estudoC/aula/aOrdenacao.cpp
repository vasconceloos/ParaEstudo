#include<iostream>

using namespace std;

int main() {

    int tamanhoVetor, i, j, menor_i=0, aux, cont=0;

    cin >> tamanhoVetor;

    int vet[tamanhoVetor];

    for(i=0; i<tamanhoVetor; i++){
        cin >> vet[i];
    }
    for (j=0; j<tamanhoVetor-1; j++) {
        menor_i = j;
        for (i=j+1; i<tamanhoVetor; i++){
            if (vet[i] < vet[menor_i])
                menor_i = i;
        }

        if (menor_i!=j){
            cont++;
        }
            aux = vet[j];
            vet[j] = vet[menor_i];
            vet[menor_i] = aux;
    }
    if (cont==0){
        cout<<"esta ordenado: executou 0 permutas"<<endl;
    }
    else{
        cout<<"nao esta ordenado: executou "<<cont<<" permutas"<<endl;
    }


    return 0;
}