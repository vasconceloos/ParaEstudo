#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int i;
    float x;

    cin >> x;

    for(i=0; i<4;i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4) << x << endl;
        x = x/2;
    }

    return 0;
}