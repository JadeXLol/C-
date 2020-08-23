#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input, sum = 2;
    queue <int> past;
    cin >> input;
    past.push(1);
    past.push(1);

    for (int i = 0; i < input-2; i++){
        sum += past.back()+past.front();
        past.push(past.back() + past.front());
        past.pop();
    }

    cout << sum;
    return 0; 
}