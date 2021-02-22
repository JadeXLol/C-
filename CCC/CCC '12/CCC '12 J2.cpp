#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input[4];

    for(int i = 0; i < 4; i++){
        cin >> input[i];
    }

    if(input[0]==input[1] && input[1] == input[2] && input[2] == input[3]){
        cout << "Fish At Constant Depth";
    }else if (input[0] < input[1] && input[1] < input[2] && input[2] < input[3]){
        cout << "Fish Rising";
    }else if (input[0] > input[1] && input[1] > input[2] && input[2] > input[3]){
        cout << "Fish Diving";
    }else{
        cout << "No Fish";
    }

    return 0; 
}