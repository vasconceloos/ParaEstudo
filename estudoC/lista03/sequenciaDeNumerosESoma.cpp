#include<iostream>

using namespace std;

int main() {

    int num1 = 1, num2 = 1, aux, i, soma;

    do{
        soma = 0;

        cin >> num1 >> num2;

        if(num1 <= 0 || num2 <= 0)
            break;
        
        if(num1 > num2){
            aux = num1;
            num1 = num2;
            num2 = aux;
        }

        for (i = num1; i <= num2; i++){
            cout << i << ' ';
            soma = soma + i;
        }

        cout << "Sum=" << soma << endl;
                
    }while(1);
    
    return 0;
}