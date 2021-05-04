#include<iostream>

using namespace std;

int main() {

    int x, y, w, z, num;

    cin >> x >> y >> w >> z;
    cin >> num;


    if (num >= x && num <= y && num >= w && num <= z){
        cout << "Ambos!" << endl;
    }else if (num > x && num <= y){
        cout << "Primeiro intervalo!" << endl;
   }else if (num >= w && num < z){
        cout << "Segundo intervalo!" << endl; 
    }else{
        cout << "Nenhum!";
    }

    return 0;
}