#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    stack <int> my_stack;
    
    for (int i = 0; i < 20; i+= 2) 
        my_stack.push(i); 
    
    cout << my_stack.size() << endl;
    my_stack.push(93);
    cout << my_stack.top() << endl;
    my_stack.pop();
    cout << my_stack.top() << endl;

    while (my_stack.size() != 0){
        cout << my_stack.top() << endl;
        my_stack.pop();
    }

    return 0; 
}