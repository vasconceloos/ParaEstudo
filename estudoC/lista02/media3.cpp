#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    
    float nota1=0, nota2=0, nota3=0, nota4=0, exame=0;
    float media = 0, mediaFinal=0;

        cin >> nota1 >> nota2 >> nota3 >> nota4;

            media = (nota1*2+nota2*3+nota3*4+nota4*1)/10;

        if(media >= 7.0){
            cout << fixed << setprecision(1);
            cout << "Media: " << media << endl << "Aluno aprovado." << endl;
        }if (media < 5.0) {
            cout << fixed << setprecision(1);
            cout << "Media: " << media << endl << "Aluno reprovado." << endl;
        }if (media >= 5.0 && media <= 6.9){
            cin >> exame;
            cout << fixed << setprecision(1);
            cout << "Media: " << media << endl ;
            cout << "Aluno em exame." << endl;
            cout << "Nota do exame: " << exame << endl;
            mediaFinal = (media+exame)/2;
                if( mediaFinal >= 5.0){
                    cout << fixed << setprecision(1);
                    cout << "Aluno aprovado." << endl << "Media final: " << mediaFinal << endl;
                } else if (mediaFinal < 5.0){
                    cout << fixed << setprecision(1);
                    cout << "Aluno reprovado." << endl << "Media final: " << mediaFinal << endl;
                }
        }
}