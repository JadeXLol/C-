#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int a;
    string yesterday, today;
    int index = 0;
    cin >> a;
    cin >> yesterday;
    cin >> today;
    for (int i = 0; i < a; i++) {
        if ((today[i] == yesterday[i]) && (yesterday[i] == 'C')){
            index += 1;
        }
    }
    cout << index;

return 0; 
}