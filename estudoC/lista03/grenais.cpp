#include<iostream>

using namespace std;

int main() {

    int golsInter, golsGremio, validacao = 1, contInter = 0,
    contGremio = 0, contJogos = 0, ganhosInter = 0, ganhosGremio = 0, empate = 0;

    while (validacao == 1){
        cin >> golsInter;
        cin >> golsGremio;

        if(golsInter > 0){
           contInter = contInter + 1;
        }
        if(golsGremio > 0){
           contGremio = contGremio + 1;
        }

        if(golsGremio > golsInter){
           ganhosGremio = ganhosGremio + 1;
        }
        if(golsGremio < golsInter){
           ganhosInter = ganhosInter + 1;
        }

        if(golsInter == golsGremio){
            empate = empate + 1;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> validacao;
        while (validacao != 1 && validacao != 2){
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> validacao;
        }
        contJogos = contJogos + 1;
    }

    cout << contJogos << " grenais" << endl;
    cout << "Inter:" << ganhosInter << endl;
    cout << "Gremio:" << ganhosGremio << endl;
    cout << "Empates:" << empate << endl;
    if (ganhosGremio < ganhosInter){    
        cout << "Inter venceu mais" << endl;
    }
    if (ganhosGremio > ganhosInter){    
        cout << "Gremio venceu mais" << endl;
    }

    

    return 0;
}