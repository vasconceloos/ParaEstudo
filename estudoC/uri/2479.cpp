#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {

    int n, i, comportados=0;
    char sinal;
    string str;

    vector<string> nomes;

    cin >> n;
    cin.ignore();

    for(i=0; i<n; i++){
        cin >> sinal >> str;
        if(sinal == '+')
            comportados++;
        nomes.push_back(str);  
    }

    sort(nomes.begin(), nomes.end());
    for (i = 0; i < nomes.size(); i++)
        cout << nomes.at(i) << endl;
    cout << "Se comportaram: " << comportados << " | Nao se comportaram: " << n - comportados << endl;

    return 0;
}