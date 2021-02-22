#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int tests, n, temp, target = 1;
    stack <int> carts;
    stack <int> branch;
    cin >> tests;
    for(int a = 0; a < tests; a++){
        cin >> n;
        for(int b = 0; b < n; b++){
            cin >> temp;
            carts.push(temp);
        }
        while(true){
            if(carts.empty() != true && carts.top() == target){
                carts.pop();
                target++;
            }else if (branch.empty() != true && branch.top() == target){
                branch.pop();
                target++;
            }else{
                branch.push(carts.top());
                carts.pop();
            }
            if(carts.empty() == true){
                if(branch.empty() == true){
                    cout << 'Y' << endl;
                    break;
                }
                else if(branch.empty() != true && branch.top() != target){
                    cout << 'N' << endl;
                    break;
                }
            }
        }
        while(carts.empty() != true){
            carts.pop();
        }
        while(branch.empty() != true){
            branch.pop();
        }
        target = 1;
    }
    return 0; 
}