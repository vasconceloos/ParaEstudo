#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> original, ordenado;
    int casoTeste, nAlunos, resposta, notas, i;

    cin >> casoTeste;

    while(casoTeste--){

        cin >> nAlunos;
        original.clear();
        ordenado.clear();

        while(nAlunos--){

            resposta = 0;
            cin >> notas;
            original.push_back(notas);
            ordenado.push_back(notas);
        }

        sort(ordenado.begin(), ordenado.end(), greater<int>());

        for(i=0; i<ordenado.size(); i++)
            if(ordenado.at(i) == original.at(i))
                resposta++;

        cout << resposta << endl;
    }
    return 0;
}