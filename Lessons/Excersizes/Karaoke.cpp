#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    queue <string> list;
    string input;
    int i = 1;

    cout << "Input the name of your song, and type END when finished." << endl;
    while (cin >> input){
        if (input == "END"){
            break;
        }
        list.push(input);
    }

    cout << "This is the list of songs." << endl;
    while (!list.empty()){
        cout << "Song: " << list.front() << " Position in Queue: " << i << endl;
        list.pop();
        i++;
    }

    return 0; 
}