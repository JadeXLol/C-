#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int k = 0, temp = 0;
    string input;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> k;
    cin >> input;

    for(int i = 0; i < int(input.length()); i++){
        for(int j = 0; j < int(alphabet.length()); j++){
            if(input[i] == alphabet[j]){
                temp = j;
                temp -= 3*(i+1) + k;
                if(temp < 0){
                    temp += 26;
                }
                cout << alphabet[temp];
                break;
            }
        }
    }

    return 0; 
}