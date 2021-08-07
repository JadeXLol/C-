#include <bits/stdc++.h>
 
using namespace std;

int main() { 
    string input;
    int L_end = -1, M_end = -1, moves = 0;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'L'){
            L_end++;
        }
        if(input[i] == 'M'){
            M_end++;
        }
    }
    M_end += L_end + 1;

    //sort out L
    for(int i = 0; i <= L_end; i++){
        if(input[i] == 'S'){
            for(int j = M_end+1; j < int(input.length()); j++){
                if(input[j] == 'L'){
                    swap(input[j], input[i]);
                    moves++;
                    break;
                }
            }
        }
        else if(input[i] == 'M'){
            for(int j = L_end+1; j <= M_end; j++){
                if(input[j] == 'L'){
                    swap(input[j], input[i]);
                    moves++;
                    break;
                }
            }
        }
    }
    //sort out M
    for(int i = L_end+1; i <= M_end; i++){
        if(input[i] == 'S'){
            for(int j = M_end+1; j < int(input.length()); j++){
                if(input[j] == 'M'){
                    swap(input[j], input[i]);
                    moves++;
                    break;
                }
            }
        }
    }

    //find unsorted things
    int unsorted_books = 0;
    for(int i = 0; i <= L_end; i++){
        if(input[i] != 'L'){
            unsorted_books++;
        }
    }
    for(int i = L_end+1; i <= M_end; i++){
        if(input[i] != 'M'){
            unsorted_books++;
        }
    }
    for(int i = M_end+1; i < int(input.length()); i++){
        if(input[i] != 'S'){
            unsorted_books++;
        }
    }
    moves += unsorted_books*2/3;
        
    cout << moves;

    return 0; 
}