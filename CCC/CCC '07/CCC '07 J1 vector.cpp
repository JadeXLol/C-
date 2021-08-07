#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    vector <int> vect;
    int input;
    cin >> input;
    vect.push_back(input);
    cin >> input;
    vect.push_back(input);
    cin >> input;
    vect.push_back(input);

    sort(vect.begin(),vect.end());

    cout << vect[1];
    return 0; 
}