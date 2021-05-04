#include <iostream>
using namespace std;

int main(){

    int n, num;
        cin >> n;

     while(n--){
        cin >> num;
            if(num ==0){ 
                cout << "NULL"<<endl;
            }else{
            if(num%2==0){
                cout << "EVEN ";
             }else{ 
                cout << "ODD ";
            }if(num >0){ 
                cout << "POSITIVE" << endl;
            }else {
                cout << "NEGATIVE" << endl;
            }
        }

    }
 return 0;
}