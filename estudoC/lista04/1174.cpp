#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    double vet[100]; 
    int i;

    for(i=0; i<5; i++){
        cin >> vet[i];
        
    }
    
    for(i=0; i<5; i++){
        if(vet[i] <= 10){
            cout << "A[" << i << "] = " << fixed << setprecision(1) << vet[i] << endl;
        }
    }

    return 0;
}