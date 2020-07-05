#include <bits/stdc++.h>
 
using namespace std; 
int main() { 

    int int_array[3];

    cin >> int_array[0] >> int_array[1] >> int_array[2];

    if (int_array[0] == 60 && int_array[1] == 60 && int_array[2] == 60){
        cout << "Equilateral";
    } else if(int_array[0] + int_array[1] + int_array[2] != 180){
        cout << "Error";
    } else if(int_array[0] == int_array[1]||int_array[0] == int_array[2]||int_array[1] == int_array[2]){
        cout << "Isosceles";
    } else{
        cout << "Scalene";
    }

    return 0; 
}