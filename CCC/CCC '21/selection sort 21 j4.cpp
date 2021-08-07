#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    string shelf;
    cin >> shelf;
    char largest;
    int largest_index;
    for(int i = 0; i < shelf.length(); i++){
        largest = 'S';
        for(int j = i + 1; j < shelf.length(); j++){
            if(shelf[j] == 'L'){
                largest = 'L';
                largest_index = j;
                break;
            }
            if(shelf[j] == 'M' && largest != 'L'){
                largest = 'M';
                largest_index = j;
            }
        }
        swap(shelf[largest_index],shelf[i]);
    }

    for(auto item : shelf){
        cout << item;
    }

    return 0; 
}