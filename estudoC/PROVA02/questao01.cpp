#include <iostream>
#include <cstdlib>

using namespace std;

int Catalan(int n){
    if (n <= 0)
        return 1;   
    else
        return (2 * (2*n - 1) * Catalan(n - 1)) / (n + 1);               
}

int main(){

    int n, numero, cont=0, posicao=0;       
     
    cin >> n >> numero;
    int vet[n];
     
    for(int i=0; i<n; i++){
        vet[i] =  Catalan(i);
    }
     
    for(int i=0; i<n; i++){
      if(numero == vet[i]){
        posicao = i+1;
        cont++;
      }
    }

    if(cont == 1){
      cout << numero << " esta na posicao " << posicao << endl;
    }else{
      cout << numero << " nao existe" << endl;
    }
     
    return 0;
}