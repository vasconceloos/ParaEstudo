#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int i, n;
    double num1, num2, num3;

    cin >> n;

    for(i=0; i < n; i++){
        cin >> num1 >> num2 >> num3;
            
        cout << fixed << setprecision(1) << (num1*2 + num2*3 + num3*5)/10 << endl;
    }
    
    return 0;

}