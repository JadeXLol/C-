#include <bits/stdc++.h>
 
 using namespace std; 
 int main() { 
    int no_1, no_2, no_3, no_4;
    cin >> no_1 >> no_2 >> no_3 >> no_4;
    if (no_1 == 8 || no_1 == 9){
        if (no_4 == 8 || no_4 == 9){
            if (no_2 == no_3){
                cout << "ignore";
            }
            else {
                cout << "answer";
            }
        }
        else {
            cout << "answer";
        }
    }  
    
    else{
        cout<< "answer";
    }
 return 0; 
}