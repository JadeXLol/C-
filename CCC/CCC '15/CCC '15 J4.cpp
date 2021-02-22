#include <bits/stdc++.h>
using namespace std; 
int main() { 
    int m, time = 0, temp_int;
    char temp_char;
    cin >> m;
    unordered_map <int, int> friend_times;
    unordered_map <int, int> friend_wait;
    for (int i = 0; i < m; i++){
        cin >> temp_char;
        cin >> temp_int;
        if (temp_char == 'W'){
            time += temp_int-1;
        }
        else if (temp_char == 'R'){
            friend_times[temp_int] = time;
            time ++;
        }
        else if (temp_char == 'S'){
            if(friend_wait[temp_int] > 0){

            }
            friend_wait[temp_int] = time - friend_times[temp_int];
            friend_times.erase(temp_int);
            time ++;
        }
    }
    for (auto &item : friend_wait) {
        cout << item.first << " " << "-1" << endl;
    }
    return 0; 
}