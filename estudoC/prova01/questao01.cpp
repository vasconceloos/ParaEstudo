#include<iostream>

using namespace std;

int main() {

    int x, dias, meses, anos;

    cin >> x;

    anos = x/365;
    meses = (x%365)/30;
    dias = (x%365)%30;

    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;

    return 0;
}