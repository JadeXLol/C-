#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int array[7] = {6, 3, 5, 7, 8, 10, 12}, target;
    bool found = 0;
    cin >> target;
    // for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
    //     if(target == array[i]){
    //         cout << "Found at position " << i;
    //         found = 1;
    //     }
    // }

    // if(found = 0)
    //     cout << "Not found";

    auto itr = find(array, array+7, target);
    if (itr != end(array)){
        cout << "Found '" << itr << "' in array" << endl;
        cout << "Index: " << distance(array,itr) << endl;
    } else {
        cout << "Not found!" << endl;
    };

    void search_vector(){
        vector <int> int_vect = {1, 2, 3, 4, 5};
        int target_int = 5;

        auto itr = find(int_vect.begin(), int_vect.end(), target_int);
        if (itr != int_vect.end()){
            cout << "Found '" << *itr << "' in array" << endl;
        } else {
            cout << "Not found!" << endl;
        }
    }   

    return 0; 
}

void search_string(){
        string str = "your mother";
        auto found = string.find("mother");
        if (found != string::npos){
            cout << "index of word = " << found << endl;
        }
        else {
            cout << "not found" << endl;
        }
    } 