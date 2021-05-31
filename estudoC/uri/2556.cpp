#include <iostream>
#include <algorithm>

using namespace std;

// int compara(const void *a, const void *b) {
//    return (*(int*)a - *(int*)b);
// }

int main() {

    int n, m[1000], i;
    
    while(cin >> n){
        for(i=0; i<n; i++)
            cin >> m[i];
        
        sort(m, m+n);
        cout << n/2 << " " << m[n/2]-m[(n/2)-1] << endl;
    }

    return 0;
}