#include <iostream>

using namespace std;

int main() {

    int i, j, tamanho;
    string linha, vogal;
    bool r = true;

    cin >> linha;

    for(i=0; i<linha.size(); i++){
        switch (linha[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogal.push_back(linha[i]);
                break;
            default:
                break;
        }
    }

    tamanho = vogal.size();
    for (i=0, j=tamanho-1; i<tamanho/2; i++, j--){
        if(vogal[i] != vogal[j]){
            r = false;
            break;
        }
    }

    cout << (!r? "N" : "S") << endl;

    return 0;
}