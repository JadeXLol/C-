#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int startnum, shifts, total = 0;
    cin >> startnum;
    cin >> shifts;

    for(int i = 0; i <= shifts; i++){
        total += startnum;
        startnum *= 10;
    }

    cout << total;

    return 0; 
}