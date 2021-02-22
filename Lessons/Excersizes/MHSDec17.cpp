#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int n, num;
    char symbol;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        cin >> symbol;
        for (int j = 0; j < num; j++){
            cout << symbol;
        }
        cout << endl;
    }
    
    return 0; 
}