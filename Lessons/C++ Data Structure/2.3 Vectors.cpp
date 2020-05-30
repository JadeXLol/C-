#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    vector <int> vect = {5, 1, 3, 2};
    cout << vect.size() << endl;

    for (int a = 0; a < vect.size(); a++){
        cout << vect[a]*2 << endl;
    }

    for (auto item : vect){
        cout << item*item << endl;
    }

    sort(vect.begin(), vect.end());
    
    for (auto item : vect){
    cout << item << endl;
    }

    vector <string> vect_string = {"william", " is", " a", " simp"};
    sort(vect_string.begin(), vect_string.end());

    for (auto item : vect_string){
        cout << item << endl;
    }


    vector <string> vect_string_2 = {"william", " eats", " large", " feet"};
    sort(vect_string_2.begin(), vect_string_2.end(), greater<>());

    for (auto item : vect_string_2){
        cout << item << endl;
    }
    
    vect_string_2.push_back(" everyday");
    for (auto item : vect_string_2){
        cout << item << endl;
    }

    vect_string_2.pop_back();			
    vect_string_2.erase(vect_string_2.begin());
    vect_string_2.erase(vect_string_2.begin(), vect_string_2.begin()+3);

    vect_string_2.insert(vect_string_2.begin(), "William eats butt");


    vector <vector <int>> vect_2d = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    for (int i = 0; i < vect_2d.size(); i++) { 
        for (int j = 0; j < vect_2d[i].size(); j++){ 
            cout << vect_2d[i][j] << " ";}
        cout << endl;} 

return 0; 
}