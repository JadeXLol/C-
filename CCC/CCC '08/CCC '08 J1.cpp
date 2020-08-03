#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    float weight, height;
    cin >> weight;
    cin >> height;

    if (weight/(height*height) <= 18.5){
        cout << "Underweight";
    }
    else if (weight/(height*height) >= 25.0){
        cout << "Overweight";
    }
    else {
        cout << "Normal weight";
    }
    return 0; 
}