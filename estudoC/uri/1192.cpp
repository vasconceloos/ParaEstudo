#include <iostream>

using namespace std;

int main() {

    int casoTeste,x, y;
    string palavra;

    cin >> casoTeste;
    cin.ignore();

    while(casoTeste--){

        getline(cin, palavra);
        x = palavra[0] - 48;
        y = palavra[2] - 48;

        if(x == y)
            cout << x * y << endl;

        else if(palavra[1] > 96)
            cout << x + y << endl;
        
        else
            cout << y - x << endl; 
    }

    return 0;
}