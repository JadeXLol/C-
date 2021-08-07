#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int cents, centValue[4] = {25, 10, 5, 1}, centTotal[4] = {0, 0, 0, 0};
    cin >> cents;
    for(int i = 0; i < 4; i++){
        while(cents - centValue[i] >= 0){
            centTotal[i] ++;
            cents -= centValue[i];
        }
        cout << centTotal[i] << endl;
    }
    return 0; 
}