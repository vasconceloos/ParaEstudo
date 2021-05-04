#include<iostream>

using namespace std;

int main(){

    int posicao, num, i ,maior;
    
    maior = 0;
    posicao = 0;

    for(i=1; i <= 100; i++){
        cin >> num;
            if(num > maior){
                maior = num;
                posicao = i;
            }
    }

    cout << maior << endl;
    cout << posicao << endl;
}