#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int h, m, altitude;
    cin >> h >> m;

    for (int time = 1; time < m; time++){
        altitude = 0-(6*pow(time,4))+(h*pow(time,3))+(2*pow(time,2))+time;
        if (altitude <= 0){
            cout << "The balloon first touches ground at hour:" << endl << time;
            return 0;
        }
    }

    cout << "The balloon does not touch ground in the given time.";
    return 0; 
}