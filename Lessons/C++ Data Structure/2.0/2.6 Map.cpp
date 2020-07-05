#include <bits/stdc++.h>
 
using namespace std; 
int main() { 

//first one is the acess key, second is the value
    map <char, int> my_map = {
        {'a', 1},
        {'b', 2},
        {'c', 3}
    };

//acess individual item
    cout << my_map['a'] << endl;

//acess both items automatically
    for (auto &item : my_map) {
        cout << item.first << " " << item.second << endl;
    }

//add an entry
my_map['d'] = '4';

//update an entry
my_map['a'] = '0';

//erase one entry
my_map.erase('a');
// Invalid key will return empty

//example
cout << "'a': " << my_map['a'] << endl;

cout << "c:" << my_map['c'];

//if example
if (my_map['G']) 
    cout << "my_dict['G'] has value." << endl;
else 
    cout << "my_dict['G'] has no value." << endl;
				
//unordered map
unordered_map <string,int> my_map_2 = { 
    {"aa", 26},
    {"ab", 25}, 
    {"ac", 24},     
    {"ad", 23}
};

//low to high value
for (auto &item : my_map_2) {
    cout << item.first << " " << item.second << endl;
}


return 0; 
}