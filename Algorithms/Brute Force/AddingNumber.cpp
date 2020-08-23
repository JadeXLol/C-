#include <bits/stdc++.h>
 
using namespace std; 

int main() { 
    int sum = 0, input;
    cin >> input;
    for (int i = 0; i <= input; i++){
        sum += i;
    }
    cout << sum;


    //alternate method
    int input;
    cin >> input;
    cout << (input+1)*input/2;
    return 0; 
}