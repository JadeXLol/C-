#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    set <int> int_set = {69, 666, 420, 42};
    for (auto item : int_set) 
        cout << item << " "; 
    cout << endl;

    int_set.insert(68);
    int_set.insert(410);
    for (auto item : int_set) 
        cout << item << " "; 
    cout << endl;
// automatically sorts from low to high

//unordered set has a random order that always stays consistent
    unordered_set <int> unordrered_int_set;
    unordrered_int_set.insert(1); 
    unordrered_int_set.insert(3); 
    unordrered_int_set.insert(4); 
    unordrered_int_set.insert(8); 
    unordrered_int_set.insert(2); 
    unordrered_int_set.insert(6); 
    
    for (auto item : unordrered_int_set) 
        cout << item << " "; 
    cout << endl;

//access the set using iterators
auto iterator = int_set.begin();
cout << *iterator << endl;
iterator++;
cout << *iterator << endl;

advance(iterator, 2);
cout << *iterator;

//backwards iterators
//auto iterator_2 = int_set.end();
//while (true){
//    cout << *iterator_2 << endl;
//    iterator_2--;
//}

//finding shit
int input;
cout << endl;
cin >> input;
auto iterator_3 = unordrered_int_set.find(input);
if (iterator_3 != unordrered_int_set.end()) {
    cout << &iterator_3 << endl;
    cout << *iterator_3 << endl;
    cout << "Found!" << endl;
} else {
    cout << &iterator_3 << endl;
    cout << *iterator_3 << endl;
    cout << "Not found!" << endl;
} 


return 0; 
}