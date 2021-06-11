#include<iostream>

using namespace std;

int main() {

    int visitados,i, j;

    cin >> visitados;
    int vetor[visitados], vet[i];

    for(i=0; i<visitados; i++){
        cin >> vetor[i];
    }


do{
    cin >> vet[j];
}while(vet[j] != 0);
    

    for(i=0; i<visitados; i++){
        for(j=0; j<visitados; j++){
            if(vetor[i] == vet[j]){
                cout << i << endl;
            }if(vetor[i] != vet[j]){
                cout << "x" << endl;
            }
        }
    }

    return 0;
}