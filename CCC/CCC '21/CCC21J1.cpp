#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int pressure, boiling_temp;
    cin >> boiling_temp;
    pressure = (5*boiling_temp)-400;
    cout << pressure << endl;
    if (pressure < 100){
        cout << "1";
    } else if(pressure == 100){
        cout << "0";
    } else if(pressure >= 100){
        cout << "-1";
    }
    return 0; 
}