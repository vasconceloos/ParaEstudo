#include<iostream>

using namespace std;

int main() {

    int casosTeste, i, numero;
    long long vetFibonacci[5];

    cin >> casosTeste;

    vetFibonacci[0] = 0;
    vetFibonacci[1] = 1;

    for(i=2; i<=5; i++){

        vetFibonacci[i] = vetFibonacci[i-2] + vetFibonacci[i-1];
    }

    for (int j=0; j<5; j++){
        cout << vetFibonacci[i] << endl;
    }
    
    return 0;
}