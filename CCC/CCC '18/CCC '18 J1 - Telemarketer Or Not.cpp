#include <bits/stdc++.h>
 
 using namespace std; 
 int main() { 
    int no_1, no_2, no_3, no_4;
    cin >> no_1 >> no_2 >> no_3 >> no_4;
    if (((no_1 == 8) || (no_1 == 9)) && ((no_4 == 8) || (no_4 == 9)) && (no_2 == no_3)){
        cout << "ignore" << endl;
    } 
    else {
        cout << "answer" << endl;
    }
 return 0; 
}   