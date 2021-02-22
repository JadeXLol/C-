#include <bits/stdc++.h>
 
using namespace std; 
int main() {
    //question 1 
    // string input;
    // int wins=0;
    // cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];

    // for(int i = 0; i < 6; i++){
    //     if(input[i] == 'W'){
    //         wins++;
    //     }
    // }

    // if(wins == 0){
    //     cout << "-1";
    // }else if(wins <3){
    //     cout << '1';
    // }else if(wins < 5){
    //     cout << '2';
    // }else{
    //     cout << '3';
    // }
    
    // return 0;

    //question 2
    // int square[4][4], total;
    // for (int i = 0; i < 4; i++){
    //     for(int j = 0; j < 4; j++){
    //         cin >> square[i][j];
    //     }
    // } 
    // total = square[0][0] + square[0][1] + square[0][2] + square[0][3];
    // for (int i = 0; i < 4; i++){
    //     for(int j = 0; j < 4; j++){
    //         if(square[i][j] + square[i][j] + square[i][j] + square[i][j] != total){
    //             cout << "not magic";
    //             return 0;
    //     }                    }
    // }
    //cout << "magic";
    //return 0;
    
    //advanced question
    int n, a_total = 0, b_total = 0, equal_day;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    for (int i = 0; i < n; i++){
        a_total += a[i];
        b_total += b[i];
        if (a_total == b_total){
            equal_day = n;
        }
    }

    cout << equal_day+1;
}