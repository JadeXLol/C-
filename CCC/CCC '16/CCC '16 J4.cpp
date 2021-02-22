#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int hour, minute;
    char random_char;
    cin >> hour >> random_char >> minute;
    
    for (int i = 0; i < 12; i++){
        if (hour < 7 || (hour >= 10 && hour < 15) || hour >= 19){
                minute += 10;
            if (minute == 60){
                minute = minute%60;
                hour+=1;
            }
            
        }
        else if ((hour >= 7 && hour < 10) || (hour >= 15 && hour < 19)){
                minute += 20;
            if (minute == 60){
                minute = minute%60;
                hour+=1;
            }
        }
        if (hour == 24){
            hour = 0;
        }
    }

    if (hour < 10){
        cout << '0' << hour;
    }else {
        cout << hour;
    }
    cout << ':';
    if (minute == 0){
        cout << "00";
    }else {
        cout << minute;
    }   
    return 0; 
}