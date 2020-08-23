#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input, hour = 12, minute = 0, total = 0;

    cin >> input;
    total = (input/720)*31;

    for (int i = 0; i < input%720; i++){
        minute++;
        if (minute == 60){
            minute = 0;
            hour++;
        }
        if (hour == 13){
            hour = 1;
        }

        if (hour < 10){
            if ((minute/10) - hour == minute%10 - (minute/10)){
                total++;
            }
        }else{
            if ((hour%10 - (hour/10) == (minute/10) - hour%10) && ((minute/10) - hour%10 == minute%10 - (minute/10))){
                total++;
            }
        }
    }

    cout << total;
    return 0; 
}