#include <bits/stdc++.h>
 
using namespace std; 

int main() { 
    int n = 8, max = 1, max_index;
    int array[n] = {6, 3, 9, 8, 4, 6, 5, 2};
    for(int a = 0; a < n; a++) {
        max = 10;
        for(int b = a + 1; b < n; b++){
            if(array[b] > max){
                max = array[b];
                max_index = b;
            }
        }
        swap(array[a], array[max_index]);
        max = 1;
    }

    for (auto item : array){
        cout << item << endl;
    }
    return 0;
}