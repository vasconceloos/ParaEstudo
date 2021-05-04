#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float salarioIncial, salarioFinal=0, reajuste=0;

    cin >> salarioIncial;

    if(salarioIncial > 0 && salarioIncial <= 400.00){
        reajuste =  salarioIncial * 0.15;
        salarioFinal = reajuste + salarioIncial;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioFinal << endl << "Reajuste ganho: " << reajuste << endl
        << "Em percentual: 15 %" << endl;
    }
    if(salarioIncial > 400.01 && salarioIncial <= 800.00){
        reajuste =  salarioIncial * 0.12;
        salarioFinal = reajuste + salarioIncial;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioFinal << endl << "Reajuste ganho: " << reajuste << endl
        << "Em percentual: 12 %" << endl;
    }
    if(salarioIncial >= 800.01 && salarioIncial <= 1200.00){
        reajuste =  salarioIncial * 0.10;
        salarioFinal = reajuste + salarioIncial;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioFinal << endl << "Reajuste ganho: " << reajuste << endl
        << "Em percentual: 10 %" << endl;
    }
    if(salarioIncial >= 1200.01  && salarioIncial <= 2000.00){
        reajuste =  salarioIncial * 0.07;
        salarioFinal = reajuste + salarioIncial;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioFinal << endl << "Reajuste ganho: " << reajuste << endl
        << "Em percentual: 7 %" << endl;
    }
    if(salarioIncial > 2000.00){
        reajuste =  salarioIncial * 0.04;
        salarioFinal = reajuste + salarioIncial;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << salarioFinal << endl << "Reajuste ganho: " << reajuste << endl
        << "Em percentual: 4 %" << endl;
    }
}