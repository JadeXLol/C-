#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    char input;
    int index = 0;

    for (int a = 0; a < 6; a++){
        cin >> input;
        if (input == 'W'){
            index ++;
        }
    }
    if (index > 4){
        cout << "1";
    } else if (index > 2) {
        cout << "2";
    } else if (index > 0){
        cout << "3";
    } else {
        cout << "-1";
    }
return 0; 
}