#include <iostream>
using namespace std;

int main(){

   int a, b, c, min, med, max;

   cin >> a >> b >> c;

   if(a < b && b > c && a < c){
       min = a;
       med = c; 
       max = b;
       
    
   }  if(a < b && c > b && a < c){
       min = a;
       med = b; 
       max = c;
    
   }if (b < a && a > c && b < c){
       min = b;
       med = c;
       max = a;
    
   }if (b < a && c > a && b < c){
       min = b;
       med = a;
       max = c;
   }
   
   if( c < a && a > b && c < b){
       min = c;
       med = b;
       max = a;
       
   }if( c < a && b > a && c < b){
       min = c;
       med = a;
       max = b;

       
   }
   cout << min << endl << med << endl << max << endl;
   cout << endl;
   cout << a << endl << b << endl << c << endl;
}



   
