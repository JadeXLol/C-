#include <bits/stdc++.h>    

using namespace std;
int main() {
    int number;
    int counter = 0;
    int digit_1, digit_2, digit_3, digit_4, digit_5;

    for (number = 10000; number < 100000; number++){
        digit_1 = number%10; 
        digit_2 = ((number - digit_1)%100)/10;
        digit_3 = ((number - digit_1 - 10*digit_2)%1000)/100;
        digit_4 = ((number -  digit_1 - 10*digit_2 -  100*digit_3)%10000)/1000;
        digit_5 = ((number - digit_1 - 10*digit_2 - 100*digit_3 - 1000*digit_4)%1000000)/10000;
        if ((digit_1+digit_2+digit_3+digit_4+digit_5) == 3){
            counter = counter + 1;
        }
    }
    cout << counter;
    return 0;
}