#include <bits/stdc++.h>
 
using namespace std; 

int digit_total = 0;
int input, current_year;
set <int> digit_set;
bool bool_1 = 0;

void getvalues() {
    int digit = 0, copy_thing = current_year;
    digit_total = 0;
    while (copy_thing > 0){
        digit_total++;
        digit = copy_thing%10;
        digit_set.insert(digit);
        copy_thing= copy_thing/10;
    }
}

void calculate() {
    int temp=digit_set.size();
    if  (temp == digit_total){
        bool_1 = 1;
    }else{
        digit_set.clear();
    }
}

int main(){ 
    cin >> input;
    current_year = input;
    while (bool_1 != 1){
        current_year++;
        getvalues();
        calculate();
    }
    cout << current_year;
    return 0;
}