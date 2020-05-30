#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int student_grade;
    cin >> student_grade;
    if ((student_grade >= 1)&&(student_grade < 7)){
            cout << "20";
    } else if (student_grade >= 7){
            cout << "30";
    }
    return 0; 
}