//deque is a double ended queue, you can push to either end and it serves the same purpose as a stack and a queue.

#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
deque <int> my_deque;

//adding to either end
for (int i = 0; i < 10; i++){
    my_deque.push_front(i);
}
for (int i = 0; i < 20; i++){
    my_deque.push_back(i);
}

cout << my_deque.size() << endl;

//read from front
while (!my_deque.empty()){
    cout << my_deque.front() << endl;
    my_deque.pop_front();
}

//acting as stack
for (int i = 0; i < 10; i++){
    my_deque.push_front(i);
}
while (!my_deque.empty()){
    cout << my_deque.front() << endl;
    my_deque.pop_front();
}

//acting as queue
for (int i = 0; i < 10; i++){
    my_deque.push_front(i);
}
while (!my_deque.empty()){
    cout << my_deque.back() << endl;
    my_deque.pop_back();
}


    return 0; 
}