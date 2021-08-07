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
            auto found = input.substr(M_end+1, int(input.length())).find('L');
            if (found != string::npos){
                swap(input[found+M_end+1], input[i]);
                moves++;
            }
        }
        else if(input[i] == 'M'){
            auto found = input.substr(L_end+1, M_end).find('L');
            if (found != string::npos){
                swap(input[found+L_end+1], input[i]);
                moves++;
            }
        }
    }

    for(int i = L_end+1; i <= M_end; i++){
        if(input[i] == 'S'){
            auto found = input.substr(M_end+1, int(input.length())).find('M');
            if (found != string::npos){
                swap(input[found+M_end+1], input[i]);
                moves++;
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