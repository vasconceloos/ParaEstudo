#include<iostream>

using namespace std;

int main() {

    int numFib, buscaNum, i, posicao=0, cont=0;

    cin >> numFib >> buscaNum;

    int vetFib[numFib];

    vetFib[0] = 0;
    vetFib[1] = 1;

    for(i=2; i<=numFib; i++){
        vetFib[i] = vetFib[i-2] + vetFib[i-1];
    }

    for(i=0; i<numFib; i++){
        if(vetFib[i] == buscaNum){
            cont ++;
            posicao = i+1;
            break;
        }
    }

    if(cont == 1){
        cout << buscaNum << " esta na posicao " << posicao << endl;
    }else{
        cout << buscaNum << " nao existe " << endl;
    }

    return 0;
}