#include <bits/stdc++.h>
 
using namespace std; 

int main() { 
    int n = 8;
    int array[n] = {6, 3, 9, 8, 4, 6, 5, 2};
    for(int a = 0; a < n; a++) {
        for(int i = 0; i < n-1; i++) {
            if(array[i] > array[i+1]) {
                swap(array[i], array[i+1]);
            }
        }
    }
    return 0; 
}