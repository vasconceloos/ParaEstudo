#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int i, j, tamanho;
    char escolha;
    double matriz[12][12], x=0;

    cin >> tamanho >> escolha;

    for (i=0; i<tamanho; i++) {
        for (j=0; j<tamanho; j++) {
            cin >> matriz[i][j];
            if (j>i)
                x += matriz[i][j];
        }
    }
    if (escolha == 'M')
        x = (x/tamanho)/2;
    
    cout << fixed << setprecision(2) << x << endl;

    return 0;
}