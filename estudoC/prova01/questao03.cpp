#include<iostream>

using namespace std;

int main(){

    int a1, a2, a3, soma, triangulo = 0;

    cin >> a1 >> a2 >> a3;

    triangulo = a1+a2+a3;

    if(triangulo == 180){

        if(a1 < 90 && a2 < 90 && a3 < 90){
            cout << "Triangulo Acutangulo!" << endl;
        }else if(a1 == 90 || a2 == 90 || a3 == 90){
            cout << "Triangulo Retangulo!" << endl;
        }else if (a1 > 90 && a1 < 180 || a2 > 90 && a2 || a3 > 90 && a3){
            cout << "Triangulo Obtusangulo!" << endl;
        }
    }else{
        cout << "Nao eh triangulo!" << endl;
    }

    return 0;
}