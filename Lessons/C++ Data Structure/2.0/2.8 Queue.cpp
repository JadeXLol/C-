#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    queue <int> my_queue;

    for (int i = 420; i < 666; i+=3){
        my_queue.push(i);
    }

    cout << my_queue.size() << endl;
    while (!my_queue.empty()){
        cout << my_queue.front() << endl;
        my_queue.pop();
    }

    for (int i = 420; i < 666; i+=3){
    my_queue.push(i);
    }

    my_queue.empty();

    cout << my_queue.front() << endl;

    return 0; 
}