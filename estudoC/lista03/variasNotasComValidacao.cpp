#include<iostream>
#include<iomanip>

using namespace std;

 int main() {

    float nota1, nota2, media = 0;
    int validacao = 1;
    
    while (validacao==1){
        cin >> nota1;
        while (nota1 < 0 || nota1 > 10){
            cout << "nota invalida" << endl;
            cin >> nota1;
        }

        cin >> nota2;
        while (nota2 < 0 || nota2 > 10){
            cout << "nota invalida" << endl;
            cin >> nota2;
        }
    
        media = (nota1 + nota2)/2;

        cout << fixed << setprecision(2) << "media = " << media << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> validacao;
        while (validacao != 1 && validacao != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> validacao;
        }
    }
    return 0;
 }