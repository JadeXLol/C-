#include <bits/stdc++.h>
    
using namespace std; 
bool check(int i){
    int num_total = 0;
    for (int j = 1; j <= i; j++){
        if(ceil(i/j)*j == i){
            num_total ++;
        }
    }
    if (num_total == 4){
        return true;
    }
    else{
        return false;
    }
}
int main() { 
    int all_total = 0, num1, num2;
    cin >> num1;
    cin >> num2;

    for (int i = num1; i <= num2; i++){
        if (check(i)){
            all_total++;
        }
    }

    cout << "The number of RSA numbers between " << num1 << " and " << num2 << " is " << all_total;
    return 0; 
}