#include <bits/stdc++.h>
 
using namespace std; 
int main() {
    int input, first_digit, second_digit, sum;
    string last_instruction;
    while(true){
        cin >> input;
        if(input == 99999){
            break;
        }
        first_digit = (input - input%10000)/10000;
        second_digit = (input-(first_digit*10000)-input%1000)/1000;
        sum = first_digit + second_digit;
        if(sum%2 == 1){
            cout << "left ";
            last_instruction = "left ";
        }else if(sum%2 == 0 && sum != 0){
            cout << "right ";   
            last_instruction = "right ";
        }else if(sum == 0){
            cout << last_instruction;
        }
        cout << input-(first_digit*10000)-(second_digit*1000) << endl;
    }
    return 0; 
}