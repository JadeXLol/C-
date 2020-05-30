#include <bits/stdc++.h>
 
using namespace std; 
//void my_function(){
//    cout << "William sucks." << endl;
//}

//void my_function (string food, int amount){
//    cout << "Ur mom eats " << amount << " " << food << " every day." << endl;
//}

//int main() { 
//    my_function("apples", 2);
//    my_function("kiwis", 3);
//    my_function("pies", 4);
//    my_function("dead cows", 4);
//    my_function("dead crows", 3);
//    return 0; 
//}

string my_function (string food, int amount){
    cout << "Ur mom eats " << amount << " " << food << " every day." << endl;
    return "Ur mom";
}

int main (){
    string str = my_function("Kiwis", 13);
    str = my_function("Pies", 23);
    cout << str << endl;  
    str = my_function("Williams", 99);
    cout << str << endl; 
    return 0;
}