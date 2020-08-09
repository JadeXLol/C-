#include <bits/stdc++.h>
 
using namespace std; 

int temp, grid[2][2] = {
    {1, 2},
    {3, 4}
};


void flip_v() {
    temp = grid[0][0];
    grid[0][0] = grid[0][1];
    grid[0][1] = temp;

    temp = grid[1][0];
    grid[1][0] = grid[1][1];
    grid[1][1] = temp;    
}

void flip_h(){
    temp = grid[0][0];
    grid[0][0] = grid[1][0];
    grid[1][0] = temp;

    temp = grid[0][1];
    grid[0][1] = grid[1][1];
    grid[1][1] = temp;
}

int main() { 
    string input;
    int H_total = 0, V_total = 0;

    cin >> input;
    for (int i = 0; i<int(input.length()); i++){
        if (input[i] == 'H'){
            H_total += 1;
        }else if (input[i] == 'V'){
            V_total += 1;
        }
    }

    if (H_total%2 == 1){
        flip_h();
    }
    if (V_total%2 == 1){
        flip_v();
    }

    cout << grid[0][0] << ' ' << grid[0][1] << endl << grid[1][0] << ' ' << grid[1][1];
    return 0; 
}