#include<iostream>
#include<iomanip>

using namespace std;


int main(){

    int codigo, quantidade;
     double total=0;

        cin >> codigo >> quantidade;

        if(codigo == 1){
            total = quantidade*4.00;
        }else if (codigo == 2){
            total = quantidade*4.50;
        }else if (codigo == 3){
            total = quantidade*5.00;
        }else if (codigo == 4){
            total = quantidade*2.00;
        }else if (codigo = 5){
            total = quantidade*1.50;
        }

        cout << fixed << setprecision(2) << "Total: R$ " << total << endl;
}