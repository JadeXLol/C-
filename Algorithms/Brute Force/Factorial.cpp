#include <bits/stdc++.h>
 
using namespace std; 

typedef unsigned long long int ull;

int main() { 
    int input;
    ull total = 1;
    cin >> input;
    
    for (int i = 1; i <= input; i++){
        total *= i;
    }

    cout << total;
    return 0; 
}