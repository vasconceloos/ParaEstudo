#include<iostream>

using namespace std;

int main() {

    int num, i, a = 0;
    int vet[10];

    for(i=0; i<10; i++){
        cin >> vet[i];
    }

    for(i=0; i<10; i++){
        if(vet[i] <= 0){
            vet[i] = 1;
        }  
        cout << "N[" << a << "] = " << vet[i] << endl;
        a++;
    }

    return 0;
}