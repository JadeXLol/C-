#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    vector <int> beforeList;
    vector <int> afterList;
    int input;
    string beforeOrAfter = "BEFORE";
    beforeList.push_back(1);
    beforeList.push_back(1);
    beforeList.push_back(2);
    beforeList.push_back(3);
    beforeList.push_back(3);
    afterList.push_back(7);
    afterList.push_back(4);
    afterList.push_back(1);
    afterList.push_back(4);
    afterList.push_back(5);

    //input things into two arrays
    while(true){
        cin >> input;
        if(input != 0){
            if(beforeOrAfter == "BEFORE"){
                beforeList.push_back(input);
                beforeOrAfter = "AFTER";
            }
            else{
                beforeOrAfter = "BEFORE";
                afterList.push_back(input);
            }
        }
        else{
            cin >> input;
            if(input == 0){
                break;
            }
        }
    }

    for(int i = 0; i < beforeList.size(); i++){
        auto itr = find(afterList.begin(), afterList.end(), beforeList[i]);
        if (itr != afterList.end()){
            
        }
    }

    return 0; 
}