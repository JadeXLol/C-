#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int num_friends, elim_rounds, elim_num, counter;
    vector <int> friend_vect;
    cin >> num_friends;
    cin >> elim_rounds;

    for(int i = 1; i <= num_friends; i++){
        friend_vect.push_back(i);
    }

    for(int i = 0; i < elim_rounds; i++){
        cin >> elim_num;
        counter = elim_num;
        for(int j = 0; j < friend_vect.size(); j++){
            if(counter != 1){
                counter--;
            }else{
                counter = elim_num;
                friend_vect.erase(friend_vect.begin()+j);
                j--;
            }
        }
    }

    for (auto item : friend_vect){
        cout << item << endl;
    }

    return 0; 
}