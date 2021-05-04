#include<iostream>

using namespace std;

int main() {

    int x = 1, y = 1;

    do{
        cin >> x >> y;

        if (x == 0 || y == 0)
            break;

        if (x > 0 && y > 0){
            cout << "primeiro" << endl;
        }else if( x < 0 && y > 0){
            cout << "segundo" << endl;
        }else if(x < 0 && y < 0){
            cout << "terceiro" << endl;
        }else if(x > 0 && y < 0){
            cout << "quarto" << endl;
        }
   
    }while(1);

    return 0;
}