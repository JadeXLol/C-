#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int m = 0, n = 0, k = 0, targetnum = 0;
    cin >> m;
    cin >> n;
    char canvas[m][n], targetarea = 'a';
    for (int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            canvas[i][j] = 'B';
        }
    }
    cin >> k;
    for (int i = 0; i < k; i++){
        cin >> targetarea;
        cin >> targetnum;
        if (targetarea == 'C'){
            for(int j = 0; j < n; j++){
                if(canvas[targetarea-1][j] == 'B'){
                    canvas[targetarea-1][j] = 'G';
                }else if(canvas[targetarea-1][j] == 'G'){
                    canvas[targetarea-1][j] = 'B';
                }
            }
        }
        if (targetarea == 'R'){
            for(int l = 0; l < n; l++){
                if(canvas[l][targetarea-1] == 'B'){
                    canvas[l][targetarea-1] = 'G';
                }else if (canvas[l][targetarea-1] == 'G'){
                    canvas[l][targetarea-1] = 'B';
                }
            }
        }
    }
    int total_gold = 0;
    for (int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(canvas[i][j] = 'G'){
                total_gold++;
            }
        }
    }
    cout << total_gold;
    return 0; 
}