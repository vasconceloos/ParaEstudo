#include<iostream>

using namespace std;

int main() {

    int n, s, i, contM = 0, contF = 0;

    cin >> n;

    for(i=0; i <n; i++){
        cin >> s;

        if(s == 1){
            contM = contM + 1;
        }if(s == 2){
            contF = contF + 1;
        }
    }
    cout << contM << endl << contF << endl;

    return 0;
}