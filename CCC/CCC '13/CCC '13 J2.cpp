#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    string input, reference = "IOSHZXN";

    cin >> input;

    for (int i = 0; i < int(input.length()); i++){
        if (find(input[i])){

        }else{
            cout << "NO";
            return 0;
        };
    }

    cout << "YES";
    return 0; 
}