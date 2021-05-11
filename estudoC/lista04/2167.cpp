#include<iostream>

using namespace std;

int main() {

    int casoTeste, i, indice=0;

    cin >> casoTeste;

    int vet[casoTeste];

    for(i=1; i<=casoTeste; i++){
        cin >> vet[i];
    }

    bool x = true;
    for(i=1; i<=casoTeste-1; i++){
        if(vet[i+1]<vet[i]){
            x = false; 
            cout << i+1 << endl;
            break;
        }
    }

    if(x){
        cout<<"0\n";
    }
   
    return 0;
}