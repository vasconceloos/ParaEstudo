#include<iostream>

using namespace std;

int main() {

    int n, i, x;

    cin >> n;

    int vet[n];

    for(i=0; i<=9; i++){
        cout << "N[" << i << "] = " << n << endl;
        n = n * 2;   
    }    
    return 0;
}