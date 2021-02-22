#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input[4][4], lines[4], columns[4];
    cin >> input[0][0] >>  input[0][1] >>  input[0][2] >>  input[0][3];
    cin >> input[1][0] >>  input[1][1] >>  input[1][2] >>  input[1][3];
    cin >> input[2][0] >>  input[2][1] >>  input[2][2] >>  input[2][3];
    cin >> input[3][0] >>  input[3][1] >>  input[3][2] >>  input[3][3];

    lines[0] = input[0][0] + input[0][1] + input[0][2] + input[0][3];
    lines[1] = input[1][0] + input[1][1] + input[1][2] + input[1][3];
    lines[2] = input[2][0] + input[2][1] + input[2][2] + input[2][3];
    lines[3] = input[3][0] + input[3][1] + input[3][2] + input[3][3];

    
    columns[0] = input[0][0] + input[1][0] + input[2][0] + input[3][0];
    columns[1] = input[0][1] + input[1][1] + input[2][1] + input[3][1];
    columns[2] = input[0][2] + input[1][2] + input[2][2] + input[3][2];
    columns[3] = input[0][3] + input[1][3] + input[2][3] + input[3][3];

    if (lines[0] == lines[2] && lines[0] == lines[3] && lines[0] == lines[3]){
        if (columns[0] == columns[1] && columns[0] == columns[2] && columns[0] == columns[3] && columns[0] == lines[0]){
            cout << "magic" << endl;
        }
    }else{
        cout << "not magic" << endl;
    }

    return 0; 
}