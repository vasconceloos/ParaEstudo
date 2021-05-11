#include<iostream>

using namespace std;

int main() {


    int vet[20], vet1[20];

   for (int i=0; i<20; i++){
       
       cin >> vet[i];
   }

   for(int i=0,j=19;i<20;i++,j--){

        vet1[i]=vet[j];
    }

    for(int i=0;i<20;i++){

        cout << "N[" << i << "] = " << vet1[i] << endl;
    }

    return 0;
}