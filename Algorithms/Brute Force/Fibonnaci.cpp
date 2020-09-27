#include <bits/stdc++.h>
 
using namespace std; 

int return_fibonnaci(int input){
    int num_1=0, num_2=1, memory;

    for (int i = 1; i < input; i++){
        memory = num_2;
        num_2 = num_1+num_2;
        num_1 = memory;
    }

    return num_2;
}

int main() { 
    int input;

    // int sum = 2;
    // queue <int> past;
    // cin >> input;
    // past.push(1);
    // past.push(1);

    // for (int i = 0; i < input-2; i++){
    //     sum += past.back()+past.front();
    //     past.push(past.back() + past.front());
    //     past.pop();
    // }

    // cout << sum;
    // return 0; 

    cin >> input;
    cout << return_fibonnaci(input) << endl;
    return 0;
}