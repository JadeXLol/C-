#include <bits/stdc++.h>    

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;

    if (a == b){
        cout << "A is equal to B" << endl;
    }
    if (a != b){
        cout << "A is not equal to B" << endl;
    }
    if (a < b){
        cout << "A is smaller than B" << endl;
    }
    if (a > b){
        cout << "A is greater than B" << endl;
    }

    if (a > b && a == b){
        cout << "What" << endl;
    }

    if (a > b || a < b){
        cout << "A is greater or smaller than B." << endl;
    }
    if (!a > b){
        cout << "A is not greater than B" << endl;
    }
        
    
    return 0;
}