#include <iostream>

using namespace std;

double fatorial(int n);

int main(){

  int numero;
  double fat;

  cin >> numero;

  fat = fatorial(numero);

  cout << fat << endl;

  return 0;
  }
double fatorial(int n){
  double vfat;
  
  if ( n <= 1 )
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  else
  {
    //Chamada recursiva
    vfat = n * fatorial(n - 1);
    return (vfat);
  }
}  