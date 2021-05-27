#include <iostream>

using namespace std;

int fat(int n){
  if ((n==1) || (n==0)) return 1;               
   else
      return fat(n-1)*n;
  }
int main(){
  int n;

  cin >> n;

  cout << fat(n) << endl;
}


// #include <iostream>

// using namespace std;

// int pot(int base, int exp){
// if(exp==0)
//   return 1;
//   return base*pot(base,exp-1);
// }

// int main() {
//  int x, e;

//  cin >> x >> e;
//  cout << pot(x,e) << endl;
//  return 0;
// }