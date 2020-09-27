#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    //get values, set up necessary values
    string text, target;
    bool check = 0;
    cin >> text;
    cin >> target;

    int n = target.length(), b = 2;
    char temp;
    string shifts[n];

    shifts[0] = target;
    for (int i = 1; i < n; i++){
        temp = target[0];
        for (int a = 0; a < n; a++){
            target[a] = target[a+1];
        }
        target[n-1] = temp;
        shifts[i] = target;
    }

    for (int i = 0; i < int(text.length()-n+1); i++){
        for (int a = 0; a < n; a++){
            if (text[i] == shifts[0][a] && text[i+1] == shifts[1][a]){
                while (b < n && check == 0){
                    if (text[i+b] != shifts[b][a]){
                        check = 1;
                    }
                    b++;
                }
                if (check == 0){
                    cout << "yes";
                    return 0;
                }
                check = 0;
            }
        }
    }

    cout << "no";
    return 0; 
}