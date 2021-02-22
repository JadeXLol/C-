#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input[3];
    cin >> input[0];
    cin >> input[1];
    cin >> input[2];
    if (input[0] + 2*input[1] + 3*input[2] >= 10){
        cout << "happy";
    }
    else {
        cout << "sad";
    }
    return 0; 
}