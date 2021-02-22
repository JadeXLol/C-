#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    string text, target;
    cin >> text;
    cin >> target;
    int target_length = sizeof(target)/sizeof(target[0]);

    string shifts[target_length];
    shifts[0] = target;

    for (int i = 1; i < target_length; i++){
        shifts[0][i] = shifts[target_length-1][i-1];
        for (int j = 1; j < target_length; j++){
            shifts[j][i] = shifts[j-1][i-1];
        }
    }

    return 0;
}