#include<iostream>

using namespace std;

int main(){

    int a, n, i, soma;

    cin >> a >> n;

    while(n < 0){
        cin >> n;
    }

    soma = 0;
    for (i=a; i<a+n; i++){
        soma = soma + i;
    }
    cout << soma << endl;

    return 0;
}