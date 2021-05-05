#include<iostream>

using namespace std;

/* void soma(int num1, int num2){

    int resultado;

    //cin >> num1 >> num2;
    resultado = num1+num2;

    cout << resultado << endl;

    //return resultado;
    */

void soma();

int main() {

   soma();

    return 0;
}

void soma(){
    int num1, num2, resultado;

    cin >> num1 >> num2;
    resultado = num1+num2;

    cout << "O resultado da soma de " << num1 << " + " << num2 << " = " << resultado << endl;
}