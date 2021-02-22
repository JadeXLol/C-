#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    string input, consonants = "bcdfghjklmnpqrstvwxyz", vowels = "aaeeeiiiiooooouuuuuuu";
    vector <char> new_word;
    cin >> input;
    
    for (int i = 0; i < int(input.length()); i++){
        if(input[i] != 'a' || input[i] != 'e' || input[i] != 'i' || input[i] != 'o' || input[i] != 'u'){
            new_word.push_back(input[i]);
            for(int j = 0; j < int(consonants.length()); j++){
                if(input[i] == consonants[j]){
                    new_word.push_back(vowels[j]);
                    if(input[i] != 'z'){
                        new_word.push_back(consonants[j+1]);
                    }else{
                        new_word.push_back(consonants[j]);
                    }
                }
            }
        }
        else{
            new_word.insert(new_word.end(),input[i]);
        }
    }

    for (auto item : new_word){
        cout << item;
    }
    return 0; 
}