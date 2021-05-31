#include <iostream>

using namespace std;

int compara(int a, int b);

int main() {

    int a, b, resposta;

    cin >> a >> b;

    resposta = compara(a, b);
    cout << "O menor numero é: " << resposta << endl;

    return 0;
}

int compara(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}