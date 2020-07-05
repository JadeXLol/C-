#include <bits/stdc++.h>
 
using namespace std; 
int main() { 

    map <char, int> my_map = {
        {'A', 0},
        {'B', 0}
    };
    int instruction, i_input;
    char c_input, c_input2;

    while (cin >> instruction){
        if (instruction == 7){
            break;
        } else if (instruction == 1){
            cin >> c_input >> i_input;
            my_map[c_input] = i_input;
        } else if (instruction == 2){
            cin >> c_input;
            cout << my_map[c_input] << endl;
        } else {
            cin >> c_input >> c_input2;
            if (instruction == 3){
                my_map[c_input] +=  my_map[c_input2];
            } else if (instruction == 4){
                my_map[c_input] *= my_map[c_input2];
            } else if (instruction == 5){
                my_map[c_input] -= my_map[c_input2];
            } else if (instruction == 6){
                my_map[c_input] /= my_map[c_input2];
            }
        }
    }

    return 0; 
}