#include <bits/stdc++.h>
 
using namespace std; 

int main() { 
    int n = 8, counter = 0;
    string array;
    for(int a = 0; a < n; a++) {
        for(int i = 0; i < n-1; i++) {
            if(array[i] > array[i+1]) {
                counter++;
                swap(array[i], array[i+1]);
            }
        }
    }

    cout << counter;
    return 0; 
}