#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int size = 0, size2 = 0, points = 0, fouls = 0;
    cin >> size;
    size2 = size;
    for (int i = 0; i < size; i++){
        cin >> points;
        cin >> fouls;
        if((points*5)-(fouls*3) <= 40){
            size2--;
        }
    }

    cout << size2;
    if(size2 == size){
        cout << '+';
    }
    return 0; 
}