#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    string keyword, message;
    cin >> keyword;
    cin.ignore();
    getline(cin, message);
    int keylen = keyword.length(), current_key;
    vector <char> cleaned_message;
    for(int i = 0; i < int(message.length()); i++){
        if(int(message[i]) > 64 && int(message[i]) < 91){
            cleaned_message.push_back(message[i]);
        }
    }
    for(int i = 0; i < int(cleaned_message.size()); i++){
        current_key = i%keylen;
        cleaned_message[i] = char(int(cleaned_message[i])+int(keyword[current_key])-65);
        if(int(cleaned_message[i]) > 90){
            cleaned_message[i] = char(int(cleaned_message[i])-26);
        }
    }

    for(auto item : cleaned_message){
        cout << item;
    }
    return 0; 
}