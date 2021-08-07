#include <bits/stdc++.h>

using namespace std; 
int length;
vector <int> sequence;

int does_cycle_work(){
    int check = 0;
    for(int i = 1; i < length-1; i++){
        if(sequence[0] == sequence[i]){
            for(int j = 0; j < length-1-i; j++){
                if(sequence[j] != sequence[i+j]){
                    check = 1;
                    break;
                }   
            }
            if(check == 0){
                return i;   
            }else{
                check = 0;
            }
        }
    }
    return length-1;
}

int main() { 
    int temp;
    while(true){
        cin >> length;
        if(length == 0  ){
            return 0;
        }else if(length == 1){
                cout << 0 << endl;
                cin >> temp;
        }else{   
            for(int i = 0; i < length; i++){
                cin >> temp;
                sequence.push_back(temp);
            }
            for(int i = 0; i < length-1; i++){
                sequence[i] = sequence[i+1]-sequence[i];
            }
            sequence.pop_back();
            cout << does_cycle_work() << endl;
        }
        sequence.clear();
    }
    return 0; 
}