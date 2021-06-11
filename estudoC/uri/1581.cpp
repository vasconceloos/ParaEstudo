#include<iostream>
#include<string>

using namespace std;

int main() {

    int casoTeste, pessoas, iguais=0, i;
    string idioma, nIdioma;

    cin >> casoTeste;

    while(casoTeste--){
        cin >> pessoas;
        cin.ignore();
        getline(cin, idioma);
        iguais = 1;
        
        for(i=0; i<pessoas-1; i++){
            getline(cin, nIdioma);
            if(!idioma.compare(nIdioma)){
                idioma = nIdioma;
                iguais++;
            }
        }
    
        cout << (iguais != pessoas? "ingles" : nIdioma) << endl;
        
    }

    return 0;
}