#include <iostream>
#include <algorithm>

using namespace std;

int main() {

   int qtdAluno, sorteio, i, tamanho;

   cin >> qtdAluno >> sorteio;

   string nomes[qtdAluno];
   for(i=0; i<qtdAluno; i++){
       cin >> nomes[i];
   }

    tamanho = sizeof(nomes)/sizeof(nomes[0]);
    sort(nomes, nomes+tamanho);

    cout << nomes[sorteio-1] << endl;

    return 0;
}