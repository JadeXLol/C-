#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int n;
    cin >> n;
    int flowers[n][n];

    for (int i = 0; i < n; i++){
        for (int a = 0; a < n; a++){
            cin >> flowers[i][a];
        }    
    }
    if (flowers[0][0] < flowers[1][0] && flowers[0][0] < flowers[0][1]){
        for (int i = 0; i < n; i++){
            for (int a = 0; a < n; a++){
                cout << flowers[i][a] << ' ';
            }    
            cout << endl;
        }
    }else if (flowers[0][0] < flowers[1][0] && flowers[0][0] > flowers[0][1]){
        for (int i = n-1; i > -1; i--){
            for (int a = 0; a < n; a++){
                cout << flowers[a][i] << ' ';
            }    
            cout << endl;
        }
    }else if (flowers[0][0] > flowers[1][0] && flowers[0][0] > flowers[0][1]){
        for (int i = n-1; i > -1; i--){
            for (int a = n-1; a > -1; a--){
                cout << flowers[i][a] << ' ';
            }    
            cout << endl;
        }
    }else if (flowers[0][0] > flowers[1][0] && flowers[0][0] < flowers[0][1]){
        for (int a = 0; a < n; a++){
            for (int i = n-1; i > -1; i--){
                cout << flowers[i][a] << ' ';
            }    
            cout << endl;
        }
    }

    return 0; 
}