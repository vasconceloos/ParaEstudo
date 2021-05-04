#include<iostream>

using namespace std;

int main() {

    int p, t, num = 0;

    cin >> t;

    do
    {
       cin >> p;

       if(p > t){
           num = p;
       }
    } while (p != 0);
       
    if(num > t){
        cout << "ALARME" << endl;
    }else{
        cout << "O Havai pode dormir tranquilo" << endl;
    }
    
    return 0;


}