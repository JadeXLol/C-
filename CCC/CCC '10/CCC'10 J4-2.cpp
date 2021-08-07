    #include <bits/stdc++.h>

    using namespace std; 
    int length;
    vector <int> sequence;

    bool does_cycle_work(int cycle){
        for(int i = 0; i < length-cycle-1; i++){
            if(sequence[i] != sequence[i+cycle]){
                return false;
            }   
        }
        return true;  
    }

    int main() { 
        int prev_temp, curr_temp;
        while(true){
            cin >> length;
            if(length == 0){
                return 0;
            }else if(length == 1){
                    cout << 0 << endl;
                    cin >> prev_temp;
            }else{   
                cin >> prev_temp;
                for(int i = 0; i < length-1; i++){
                    cin >> curr_temp;
                    sequence.push_back(curr_temp-prev_temp);
                    prev_temp = curr_temp;
                }
                for(int i = 1; i < length; i++){
                    if(does_cycle_work(i)){
                        cout << i << endl;
                        break;
                    };
                }
            }
            sequence.clear();
        }
        return 0; 
    }