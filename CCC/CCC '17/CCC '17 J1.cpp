#include <bits/stdc++.h>
 
 using namespace std; 
 int main() { 
    int x, y;
    bool x_positive = 0, y_positive = 0;
    cin >> x;
    cin >> y;
    if (x > 0){
        x_positive = 1;
    } 
    if (y > 0){
        y_positive =1;
    }
        
    if ((x_positive == 1) && (y_positive == 1)){
        cout << "1";
    }
    else if ((x_positive == 1) && (y_positive == 0)){
        cout << "4";
    }
    else if (y_positive == 1){
        cout << "2";
    }
    else {
        cout << "3";
    }

    return 0; 
}