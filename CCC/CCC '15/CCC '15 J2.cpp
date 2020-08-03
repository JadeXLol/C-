#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    string input;
    int pos = 0, neg = 0;
    
    getline (cin, input);
    
    for (int i = 3; i <= int(input.length()); i++){
        if (input[i-1] == ')' && input[i-2] == '-' && input[i-3] == ':'){
            pos++;
        }
        if (input[i-1] == '(' && input[i-2] == '-' && input[i-3] == ':'){
            neg++;
        }
    }

    if (pos == 0 && neg == 0){
        cout << "none";
    }else if (pos == neg){
        cout << "unsure";
    }else if (pos > neg){
        cout << "happy";
    }else if (pos < neg){
        cout << "sad";
    }

    return 0; 
}