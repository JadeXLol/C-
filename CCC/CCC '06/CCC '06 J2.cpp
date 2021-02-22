#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int m, n, total = 0;
    cin >> m;
    cin >> n;

    for (int dice_1 = 1; dice_1 <= m; dice_1++){
        for (int dice_2 = 1; dice_2 <= n; dice_2++){
            if(dice_1 + dice_2 == 10){
                total++;
            }
        }
    }

    if (total == 1){
        cout << "There is " << total << " way to get the sum 10.";
    } else {
        cout << "There are " << total << " ways to get the sum 10.";
    }

    return 0; 
}