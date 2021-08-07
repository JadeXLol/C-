#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int array[3];
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];

    // while(true){
    //     if(array[0] > array[1]){
    //         swap(array[0], array[1]);
    //     }
    //     if(array[1] > array[2]){
    //         swap(array[1], array[2]);
    //     }
    //     if(array[1] < array[2] < array[3]){
    //         break;
    //     }
    // }

    sort(array, array+3);

    cout << array[1];
    return 0; 
}