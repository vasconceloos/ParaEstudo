#include<iostream>

using namespace std;

int main() {

    int num, i, x = 0;

    cin >> num;

    for(i=0; i<100; i++){
        cout << "N[" << i << "] = " << x << endl;
        x ++;
        if(x == num){
            x = 0;
        }
    }
    return 0;
}