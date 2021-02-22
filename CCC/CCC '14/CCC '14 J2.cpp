#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int votes, A = 0, B = 0;
    string input;

    cin >> votes;
    cin >> input;

    for (int i = 0; i < votes; i++ ){
        if(input[i] == 'A'){
            A +=1;
        }else{
            B +=1;
        }
    }

    if (A > B){
        cout << 'A';
    }else if(A == B){
        cout << "Tie";
    }else if(A < B){
        cout << 'B';
    }
    return 0; 
}