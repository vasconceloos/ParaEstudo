#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int numero, i, j;

    while(cin >> numero && numero != 0){
        for(i=0; i<numero; i++){
            for(j=0; j<numero; j++) 
                if(j == 0)
                    cout << setw(3) << abs(j-i)+1;
                else
                    cout << " " << setw(3) << abs(j-i)+1;
            cout << endl;
            }
            cout << endl;
    }
  
    return 0;
}