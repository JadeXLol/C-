#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input, total_cal = 0;
    cin >> input;
    if (input == 1){
    total_cal += 461;
    } else if (input == 2){
    total_cal += 431;
    }else if (input == 3){
    total_cal += 420;
    }else {
    total_cal +=0;
    }

    cin >> input;
    if (input == 1){
    total_cal += 100 ;
    }else if (input == 2){
    total_cal += 57;
    }else if (input == 3){
    total_cal += 70;
    }else {
    total_cal +=0;
    }

 cin >> input;
    if (input == 1){
    total_cal += 130;
    }else if (input == 2){
    total_cal += 160;
    }else if (input == 3){
    total_cal += 118;
    }else {
    total_cal +=0;
    }

 cin >> input;
    if (input == 1){
    total_cal += 167;
    }else if (input == 2){
    total_cal += 266;
    }else if (input == 3){
    total_cal += 75;
    }else {
    total_cal +=0;
    }

cout << total_cal;
return 0; 
}