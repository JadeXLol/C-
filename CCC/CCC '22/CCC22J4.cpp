#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int tog = 0, sep = 0, g = 0;
    cin >> tog;
    string p1 = "", p2 = "";
    multimap <string, string> together = {};
    for (int i = 0; i < tog; i++){
        cin >> p1;
        cin >> p2;
        together.insert(pair <string, string> (p1, p2));
    }
    cin >> sep;
    multimap <string, string> separate = {};
    for (int i = 0; i < sep; i++){
        cin >> p1;
        cin >> p2;
        separate.insert(pair <string, string> (p1, p2));
    }
    cin >> g;
    const int groupsnum = g;
    string matrix[groupsnum][3];
    string input;
    for (int i = 0; i < g; i++){
        for(int j = 0; j < 3; j++){
            cin >> input;
            matrix[i][j] = input;
        }
    }

    //check for if people are together
    for(int i = 0; i < g; i++){
        
    }

    return 0; 
}