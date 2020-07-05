#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int a;
    string yesterday, today;
    bitset<100> bits_yesterday, bits_today;
    cin >> a;
    cin >> yesterday;
    cin >> today;
    int counter = 0;

    for (int i = 0; i < a; i++){
        if (yesterday[i] == 'C'){
            bits_yesterday.set(i,1);
        }
        if (today[i] == 'C'){
            bits_today.set(i,1);
        }
    }

    for (int i = 0; i < a; i++){
        if (bits_yesterday[i] == bits_today[i] && bits_today[i] == 1){
            counter++;
        }
    }

    cout << counter;

    return 0; 
}