#include <iostream>

using namespace std;

int main() {

    int n;

    while (cin >> n){
        
        int linha, coluna;
        int matriz[n][n];

        for(linha=0; linha<n; linha++){
            for (coluna=0; coluna<n; coluna++){
                if(linha+coluna == n-1)
                    matriz[linha][coluna] = 2;
                else if(linha == coluna)
                    matriz[linha][coluna] = 1;
                else
                    matriz[linha][coluna] = 3;
            }
        }

        for (linha = 0; linha < n; linha++) {
            for (coluna = 0; coluna < n; coluna++)
                cout << matriz[linha][coluna];
                
                cout << endl;
        }
    }

    return 0;
}