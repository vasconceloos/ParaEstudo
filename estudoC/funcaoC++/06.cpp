#include<iostream>

using namespace std;

int soma(int nota1, int nota2, int nota3, char letra);

int main() {

    int nota1, nota2, nota3, media;
    char letra;

    cout << "Digite a letra correspondente a qual média vai fazer: ";
    cin >> letra;
    cout << "Digite as notas: ";
    cin >> nota1 >> nota2 >> nota3;

    media = soma(nota1, nota2, nota3, letra);
    cout << media << endl;

    return 0;
}

int soma(int nota1, int nota2, int nota3, char letra){

    int mediaT = 0;

    if(letra == 'A'){
            mediaT = (nota1+nota2+nota3)/3;
    }else if (letra == 'P'){
        mediaT = (nota1*5 + nota2*3 + nota3*2)/3;
    }else if(letra == 'H'){
        mediaT = 5*(1/nota1 + 1/nota2 + 1/nota3);
    }
        return mediaT;
    }