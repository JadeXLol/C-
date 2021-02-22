#include <bits/stdc++.h>
 
using namespace std; 

string flip_function(string converted){
    string flipped;
    int idx;
    flipped = converted;
    for (int i = 0; i <  converted.length(); i++){
        idx = converted.length()-i-1;
        if(converted[i] == '9'){
            flipped[idx] = '6';
        }else if(converted[i] == '6'){
            flipped[idx] = '9';
        }else if(converted[i] == '8'){
            flipped[idx] = '8';
        }else if(converted[i] == '1'){
            flipped[idx] = '1';
        }else if(converted[i] == '0'){
            flipped[idx] = '0';
        }else{
            flipped = "william sucks";
        }
    }
    return flipped;
}

int main() { 
    int num1, num2, counter = 0;
    string converted;
    cin >> num1;
    cin >> num2;


    for (int i = num1; i <= num2; i++){
        converted = to_string(i);
        if (flip_function(converted) == converted){
            counter++;
        }
    }

    cout << counter;
    return 0; 
}