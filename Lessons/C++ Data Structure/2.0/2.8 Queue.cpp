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

    //priority queue
    priority_queue <int, vector<int>, greater<int>> prio_queue;

    prio_queue.push(1);
    prio_queue.push(6);
    prio_queue.push(9);
    prio_queue.push(3);
    prio_queue.push(8);

    while (!prio_queue.empty()){
        cout << prio_queue.top() << endl;
        prio_queue.pop();
    }

    return 0; 
}