#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    vector <int> vect = {12, 5, 7, 9, 16, 2, 21};
    int target, low_index = 0, high_index = vect.size()-1, middle_index = ceil(high_index/2);
    sort (vect.begin(), vect.end());

    cin >> target;

    while(low_index < high_index){
        if(vect[middle_index] == target){
            cout << "Found at " << middle_index;
            return 0;
        }
        else if(vect[middle_index < target]){
            low_index = middle_index;
            middle_index = (low_index+high_index)/2;
        }else{
            high_index = middle_index;
            middle_index = (low_index+high_index)/2;
        }
    }
    cout << "Not found idiot";
    return 0; 
}

// (low + high) / 2 = low/2 + high/2
// (high - low) / 2 + low = high/2 - low/2 + 2*low/2 = high/2 + low/2 