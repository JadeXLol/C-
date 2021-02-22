#include <bits/stdc++.h>
//<iostream>
 
using namespace std; 
int main() { 
    string shelf;
    cin >> shelf;
    int shelf_length = sizeof(shelf)/sizeof(shelf[0]), swaps = 0;
    int last_L = shelf_length, last_M = shelf_length, first_S = shelf_length, first_M = shelf_length;
    while(true){
        for(int i = 0; i < shelf_length; i++){
            if(shelf[i] == 'S' && i < first_S){
                first_S = i;
            }else if(shelf[i] == 'M'){
                last_M = i;
                if(i < first_M){
                    first_M = i;
                }
            }else if(shelf[i] == 'L'){
                last_L = i;
            }
        }
        if(first_S < last_L){
            shelf[first_S] = 'L';
            shelf[last_L] = 'S';
            swaps++;
            first_S = shelf_length;
        }else if(first_M < last_L){
            shelf[first_M] = 'L';
            shelf[last_L] = 'M';
            swaps++;
            first_M = shelf_length;
        } else if(first_S < last_M){
            shelf[first_S] = 'M';
            shelf[last_M] = 'S';
            swaps++;
            first_S = shelf_length;
        }else{
            cout << swaps;
            return 0;
        }
    }
    return 0; 
}