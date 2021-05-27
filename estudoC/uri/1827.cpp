#include <iostream>

using namespace std;

int main() {

    int n, linha, coluna, meio;

    while (cin >> n){
        int valores[n];
        linha = 0;
        meio = n/2;

        while(linha < n){
            coluna = 0;

            while(coluna < n){
                if(linha == meio && coluna == meio)
                    cout << "4";
                else if (linha>=n/3 && coluna>=n/3 && linha<n-n/3 && coluna<n-n/3)
                    cout << "1";
                 else if (linha == coluna)
                    cout << "2";
                else if (linha + coluna + 1 == n)
                    cout << "3";
                else
                    cout << "0";
                coluna++;
            }
            cout << endl;
            linha++;
        }
        cout << endl;
    }

    return 0;
}




// #include <stdio.h>

// int main(void){
//     int j, i;



//   for (i = 0; i < 8; i++){
//     for (j = 0; j <= i; j++){
//       printf("*");
//     }
//     printf("\n");
//   }

//   printf("\n");

//     for(j = 0; j < 8; j++){                
//         for(i = 8; i >= - 8; i--)
//             if (i > 0)
//                 printf("*");   
//             else
//                 printf("\b");

//         if (j)
//             for(i = 0; i < j; i++)
//                 printf(" ");

//         printf("\n");
//     }  

//     return 0;
// }