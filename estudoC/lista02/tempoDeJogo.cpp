#include<iostream>

using namespace std;

int main(){

    int horaInicio, horaFim, duracaoD=0, duracaoH=0;
    

    cin >> horaInicio >> horaFim;

    duracaoD = ((24 - horaInicio) + horaFim);
    duracaoH = (horaFim - horaInicio);

    if( horaInicio >= horaFim){
        cout << "O JOGO DUROU " << duracaoD << " HORA(S)" << endl;
    }else if(horaInicio < horaFim){
        cout << "O JOGO DUROU " << duracaoH << " HORA(S)" << endl;
    }else{
        cout << "O JOGO DUROU 24 HORA(S)";
    }
}