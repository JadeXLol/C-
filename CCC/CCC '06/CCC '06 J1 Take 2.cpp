#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    // int burger[4] = {461, 431, 420, 0};
    // int side[4] = {100, 57, 70, 0};
    // int drink[4] = {130, 160, 118,0};
    // int dessert[4] = {167, 266, 75, 0};
    // int input, cal_total = 0;

    // cin >> input;
    // cal_total += burger[input-1];
    // cin >> input;
    // cal_total += side[input-1];
    // cin >> input;
    // cal_total += drink[input-1];
    // cin >> input;
    // cal_total += dessert[input-1];

    int calorie_array[4][4] = {
        {461, 431, 420, 0},
        {100, 57, 70, 0},
        {130, 160, 118, 0},
        {167, 266, 75, 0}
    };
    int input, cal_total = 0;
    int a=0;

    while (a < 4){
        cin >> input;
        cal_total += calorie_array[a][input-1];
        a++;
    }

    cout << "Your total Calorie count is " << cal_total << "." << endl;
    return 0; 
}