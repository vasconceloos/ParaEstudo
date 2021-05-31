#include<iostream>
#include<math.h>
#include<iomanip>


using namespace std;

double calculaDistancia(double x1, double x2, double y1, double y2);

int main() {

    double x1, x2, y1, y2, resposta;

    cout << "Distancia de x1 e x2 respectivamente: " << endl;
    cin >> x1 >> x2;
    cout << "Distancia de y1 e y2 respectivamente: " << endl;
    cin >> y1 >> y2;

    resposta = calculaDistancia(x1, x2, y1, y2);
    cout << endl << "A distancia é: " << fixed << setprecision(2) << resposta << endl;
    return 0;
}

double calculaDistancia(double x1, double x2, double y1, double y2){
    int distanciaX = 0, distanciaY = 0, resultadoP = 0, resultado = 0;

    distanciaX = x2 - x1;
    distanciaY = y2 - y1;
    resultadoP = (distanciaX*distanciaX) + (distanciaY*distanciaY);
    resultado = sqrt(resultadoP);

    return resultado;
}
