#include<iostream>
#include<string>

using namespace std;

int main() {

    int casoTeste, i, n1=0, n2=0, n3=0;
    string palavra, num1, num2, num3;

    cin >> casoTeste;
    
    for(i=0; i<casoTeste; i++){
        cin >> palavra;

        num1 = palavra.substr(2, 2);
        num2 = palavra.substr(5, 3);
        num3 = palavra.substr(11, 2);

        n1 = stoi(num1);
        n2 = stoi(num2);
        n3 = stoi(num3);

        cout << n1+n2+n3 << endl;
    }

    return 0;
}