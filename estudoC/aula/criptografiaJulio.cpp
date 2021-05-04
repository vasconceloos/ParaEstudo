#include<iostream>
#include<string>

using namespace std;

int main() {

    int k, i;
    string p;
    char letra;

    cin >> k;
    cin >> p;

    int tamanho = p.size();

    for(i=0; i<tamanho; i++){
        letra = p[i];
        if(letra >= 'a' && letra <= 'z'){
            letra = letra + k;

            if(letra > 'z'){
                letra = letra + k;
            }
            p[i] = letra;
        }
    } 
    cout << p;
    cout << endl;

return 0;
}