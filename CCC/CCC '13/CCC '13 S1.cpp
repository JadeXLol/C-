#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
int input;
int a = 0;
int b = 0;
cin >> input;

while(a != 1){
    input = input + b;
    b++;
    int digit1 = (input%10);
    int digit2 = (input%100 - digit1)/10;
    int digit3 = (input%1000 - digit2*10 - digit1)/100;
    int digit4 = (input%10000 - digit3*100 - digit2*10 - digit1)/1000;
    int digit5 = (input%100000 - digit4*1000 - digit3*100 - digit2*10 - digit1)/10000;


    if (digit5 != 0){
        vector <int> vect = {digit5, digit4, digit3, digit2, digit1};
        if (vect[0] != vect[1] != vect[2] != vect[3] != vect[4]){
            a = 1;
            for (auto item : vect) {
                cout << item;
                }
            }
        } 
    else if (digit4 != 0){
        vector <int> vect = {digit4, digit3, digit2, digit1};
        if (vect[0] != vect[1] != vect[2] != vect[3]){
            a = 1;
            for (auto item : vect) {
                cout << item;
                }        
            }
        }
    else if (digit3 != 0){	
        vector <int> vect = {digit3, digit2, digit1};
        if (vect[0] != vect[1] != vect[2]){
            a = 1;
            for (auto item : vect) {
                cout << item;
                } 
            }
        }
    else if (digit2 != 0){
        vector <int> vect = {digit2, digit1};
        if (vect[0] != vect[1]){
            a = 1;
            for (auto item : vect) {
                cout << item;
                } 
            }
        }
    else {
        vector <int> vect = {digit2, digit1};
        if (vect[0] != vect[1]){
            a = 1;
            for (auto item : vect) {
                cout << item;
                } 
            }
        }
    }


    return 0;
}   