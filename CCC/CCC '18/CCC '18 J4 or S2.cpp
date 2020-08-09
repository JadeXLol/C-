#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int n, temp;
    cin >> n;
    int flowers[n][n];

    for (int i = 0; i < n; i++){
        for (int a = 0; a < n; a++){
            cin >> flowers[i][a];
        }    
    }
    if (flowers[0][0] < flowers[1][0] && flowers[0][0] < flowers[1][0]){
        for (int i = 0; i < n; i++){
            for (int a = 0; a < n; a++){
                cout << flowers[i][a] << ' ';
            }    
            cout << endl;
        }
    }else if (flowers[0][0] > flowers[1][0] && flowers[0][0] < flowers[1][0]){
        for (int i = n; i > 0; i--){
            for (int a = 0; a < n; a++){
                cout << flowers[i][a] << ' ';
            }    
            cout << endl;
        }
    }

    return 0; 
}