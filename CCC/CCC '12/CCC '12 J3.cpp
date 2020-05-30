#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    char icon_array[3][3] = {
        {'*', 'x', '*'},
        {' ', 'x', 'x'},
        {'*', ' ', '*'}
    };
    int scale;
    cin >> scale;
    
    for (int y_pos = 0; y_pos < 3; y_pos ++){
        for (int a = 0; a < scale; a++){
            for (int x_pos = 0; x_pos < 3; x_pos ++){
                for (int b = 0; b < scale; b++){
                    cout << icon_array[y_pos][x_pos];
                }
            }  
            cout << endl;
        }
    }
}
