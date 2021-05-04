#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    float renda, calculoImposto;

    cin >> renda;

    if(renda > 0.00 && renda <= 2000.00){
        cout << "Isento" << endl;
    }else if (renda >= 2000.01 && renda <= 3000.00){
        calculoImposto = (renda - 2000.00)* 0.08;
        cout << fixed << setprecision(2) << "R$ " << calculoImposto << endl;
    }else if (renda >= 3000.01 && renda <= 4500.00){
        calculoImposto = ((renda - 3000.00)*0.18 + 1000.00*0.08);
        cout << fixed << setprecision(2) << "R$ " << calculoImposto << endl;
    }else if (renda > 4500.01 ){
        calculoImposto = ((renda - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);
        cout << fixed << setprecision(2) << "R$ " << calculoImposto << endl;
    }
}