#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    string input;
    getline(cin, input);
    vector <char> instruct = {};
    vector <char> subtask4 = {};
    for (int i = 0; i < input.length(); i++){
        if(input[i] == '-' || input[i] == '+'){
            for (auto item : instruct){
                cout << item;
            }
            if(input[i] == '-'){
                cout << " loosen ";
            }else{
                cout << " tighten ";
            }
            for (int j = i+1; j < input.length(); j++){
                if(isdigit(input[j])){
                    subtask4.push_back(input[j]);
                    i++;
                }else{
                    break;
                }
            }
            for(auto item : subtask4){
                cout << item;
            }
            cout << endl;
            subtask4.clear();
            instruct.clear();
        }else{
            instruct.push_back(input[i]);
        }
    }
    return 0; 
}