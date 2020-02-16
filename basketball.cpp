#include <bits/stdc++.h>    

using namespace std;
int main() {
    int a_three_point;
    int a_two_point;
    int a_one_point;
    int b_three_point;
    int b_two_point;
    int b_one_point;
    int a_total;
    int b_total;

    cin >> a_three_point;
    cin >> a_two_point;
    cin >> a_one_point;
    cin >> b_three_point;
    cin >> b_two_point;
    cin >> b_one_point;
    a_total = 3*a_three_point + 2*a_two_point + a_one_point;
    b_total = 3*b_three_point + 2*b_two_point + b_one_point;

    if (a_total > b_total){
        cout << "A";
    }
    if (b_total > a_total){
        cout << "B";
    }
    if (b_total == a_total){
        cout << "T";
    }

    return 0;
}