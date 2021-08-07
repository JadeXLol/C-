#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int time_avalible, num_chores, total_chores = 0;
    cin >> time_avalible;
    cin >> num_chores;
    int chores[num_chores];
    for(int i = 0; i < num_chores; i++){
        cin >> chores[i];
    }
    sort(chores, chores+num_chores);
    for(int i = 0; i < num_chores; i++){
        if((time_avalible - chores[i]) < 0){
            break;
        }else{
            time_avalible -= chores[i];
            total_chores += 1;
        }
    }
    cout << total_chores;
    return 0; 
}