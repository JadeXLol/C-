#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    char char_array[5] = {'h','e','l','l','o'};
    string str_array[3] = {"hello,\n ","you ","smell"};
    string str;

    cout << char_array[0];
    cout << char_array[1];
    cout << char_array[2];
    cout << char_array[3];
    cout << char_array[4] << endl;
    cout << char_array << endl;

    cout << str_array[0];
    cout << str_array[1];
    cout << str_array[2] << endl;

    cout << sizeof(char_array)/sizeof(char_array[0]);
    str = "hello";
    str = str + " ur mom";
    cout << str << endl;
    cout << str.length() << endl;

    str = str.insert(6, "ur dad and ");
    cout << str << " after insert" << endl;
    
    str = str.substr(6, 5);
    cout << str << " after subtraction" << endl;

    str = str.replace(0, 5, "ur mom ahahaha");
    cout << str << endl;
    str = str.replace(str.begin()+7,str.end(), "aha");
    cout << str << endl;

    size_t found = str.find("ur mom");
    if (found != string::npos)
        cout << "jesus u like men " << found << endl;
    else 
        cout << "ok you don't like men" << endl;
    return 0; 
}