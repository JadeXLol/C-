#include <bits/stdc++.h>

using namespace std; 
int does_cycle_work(int length, vector<int> cycle, int temp){
    int check = 0;
    for(int i = 1; i < length-1; i++){
        if(cycle[0] == cycle[i]){
            for(int j = 0; j < length-1-i; j++){
                if(cycle[j] != cycle[i+j]){
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
    int length, temp;
    vector <int> sequence;
    vector <int> cycle;
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
                temp = sequence[i+1]-sequence[i];
                cycle.push_back(temp);
            }
            temp = 0;
            cout << does_cycle_work(length, cycle, temp) << endl;
        }
        sequence.clear();
        cycle.clear();
    }
    return 0; 
}