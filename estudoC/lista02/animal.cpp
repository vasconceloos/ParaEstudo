#include<iostream>

using namespace std;

int main(){

    string tipo, tipoEspecie, tipoComida;

    cin >> tipo;
    cin >> tipoEspecie;
    cin >> tipoComida;

    if( tipo == "vertebrado"){
        if(tipoEspecie == "ave"){
            if(tipoComida == "carnivoro"){
                cout << "aguia" << endl;
            }
            if(tipoComida == "onivoro"){
                cout << "pomba" << endl;
            }
        }

        if(tipoEspecie == "mamifero"){
            if(tipoComida == "herbivoro"){
                cout << "vaca" << endl;
            }
            if(tipoComida == "onivoro"){
                cout << "homem" << endl;
            }
        }
    }

      if( tipo == "invertebrado"){
        if(tipoEspecie == "inseto"){
            if(tipoComida == "hematofago"){
                cout << "pulga" << endl;
            }
            if(tipoComida == "herbivoro"){
                cout << "lagarta" << endl;
            }
        }

        if(tipoEspecie == "anelideo"){
            if(tipoComida == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            if(tipoComida == "onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }
}
