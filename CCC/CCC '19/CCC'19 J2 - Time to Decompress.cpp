#include <bits/stdc++.h>    

using namespace std;
int main() {
    int num;
    int int_array[num];
    char char_array[num];   
    int random_int;
    int controller;

    cin >> num;
    for (random_int=0; random_int<num; random_int++){
    cin >> int_array[random_int] >> char_array[random_int];
    for (controller=0; controller<int_array[random_int];controller++){
        cout << char_array[random_int];
    }
    cout <<endl;
    }
    return 0;
}