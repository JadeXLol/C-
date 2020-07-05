#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    stack <string>  streets;
    stack <char> direction;
    string s_temp;
    char c_temp;

    while(true){
        cin >> c_temp;
        direction.push(c_temp);
        cin >> s_temp;
        if(s_temp == "SCHOOL"){
            break;
        } 
        else{
            streets.push(s_temp);
        }
    }

    while (true){
        cout << "Turn ";
        if (direction.top() == 'R'){
            cout << "LEFT ";
        } else{
            cout << "RIGHT ";
        } 
        direction.pop();
        if (streets.size() > 0){
            cout << "onto " << streets.top() << " street." << endl;
            streets.pop();
        }
        else {
            cout << "into your HOME.";
            break;
        }
    }
    return 0; 
}