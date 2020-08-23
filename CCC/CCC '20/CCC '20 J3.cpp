#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int n, highest_x = 0, highest_y = 0, lowest_x = 100, lowest_y = 100;
    char random;
    cin >> n;
    int drops[n][2];
    for (int i = 0; i < n; i++){
        cin >> drops[i][0] >> random >> drops[i][1];
        if(drops[i][0] > highest_x){
            highest_x = drops[i][0];
        }
        if(drops[i][1] > highest_y){
            highest_y = drops[i][1];
        }
        if(drops[i][0] < lowest_x){
            lowest_x = drops[i][0];
        }
        if(drops[i][1] < lowest_y){
            lowest_y = drops[i][1];
        }
    }   

    cout << lowest_x-1 << ',' << lowest_y-1 << endl;
    cout << highest_x+1 << ',' << highest_y+1;

    return 0; 
}