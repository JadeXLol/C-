#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int limit, start, transmission, day = 0;
    cin >> limit;
    cin >> start;
    int new_case = start, total = start;
    cin >> transmission;

    while (total <= limit){
        day++;
        new_case *= transmission;
        total += new_case;
    }
    cout << day;
    
    return 0; 
}