#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int array[10] = {6, 4, 2, 7, 9, 8, 1, 10, 3, 5};

    for(int i = 1; i < 10; i++){
        for(int j = i; j > 0; j--){
            if(array[j] > array[j-1]){
                swap(array[j-1], array[j]);
            }
        }
    }

    for(auto item : array){
        cout << item;
    }
    return 0; 
}