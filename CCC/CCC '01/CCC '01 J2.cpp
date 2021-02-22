#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int x, m;
    cin >> x;
    cin >> m;

    for (int n = 1; n < m; n++){
        if((x*n)%m == 1){
            cout << n;
            return 0;
        }
    }

    cout << "No such integer exists.";
    return 0; 
}