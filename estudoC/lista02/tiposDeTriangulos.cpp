#include<iostream>

using namespace std;

int main(){

    float a, b, c, maior, menor, medio;

    cin >> a >> b >> c;


    if (a >= b && a >= c){
		maior = a;
		medio = b;
		menor = c;

	}else if (b >= a && b >= c){

		maior = b;
		medio = a;
		menor = c;

	}else{
        maior = c;
		medio = a;
		menor = b;
	}

    if( maior >= (medio+menor)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else if(maior*maior == (medio*medio+menor*menor)){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if(maior*maior > (medio*medio+menor*menor)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }else if (maior*maior < (medio*medio+menor*menor)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
        
    if (((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    if (a == b && a == c ){
        cout << "TRIANGULO EQUILATERO" << endl;
    }    
}