#include <iostream>

using namespace std;

int compara(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main() {

    int populacao, consulta, posicao, i;

    while(cin >> populacao >> consulta){

        int notas[populacao];

        for(i=0; i<populacao; i++)
            cin >> notas[i];

            qsort(notas, populacao, sizeof(int), compara);

            while(consulta--){
                cin >> posicao;
                cout << notas[posicao-1] << endl;
            }
        
    }

    return 0;
}