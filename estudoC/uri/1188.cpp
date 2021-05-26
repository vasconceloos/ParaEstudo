#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    double matriz[12][12];
    double soma = 0.0;
    char e;

    cin >> e;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> matriz[i][j];
            if(j > (11 - i) && j < i){
                soma += matriz[i][j];
            }
        }
   }

    if(e == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/30.0);

    return 0;
}