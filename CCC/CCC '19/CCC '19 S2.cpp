#include <bits/stdc++.h>
 
using namespace std; 
bool determine_prime1(int num){
    if (num%2 == 0){
        return false;
    }
    for (int i = 3; i <= ceil(sqrt(num)); i+=2){
        if (num%i == 0){
            return false;
        }
    }
    return true;
}

int main() { 
    int cases, input, num;
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> input;
        num = 2;
        while (num<input){
            if (determine_prime1(num) && determine_prime1(input*2-num)){
                cout << input*2-num << ' ' << num << endl;
                break;
            }
            num++;
        }   
    }
    return 0; 
}