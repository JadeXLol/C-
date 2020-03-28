#include <bits/stdc++.h>

using namespace std;
int main() {
    ifstream cin("CCC '19 J1 - Data");

    int a_three_point;
    int a_two_point;
    int a_one_point;
    int b_three_point;
    int b_two_point;
    int b_one_point;

    cin >> a_three_point >> a_two_point >> a_one_point >> b_three_point >> b_two_point >> b_one_point;

    if (3 * a_three_point + 2 * a_two_point + a_one_point > 3 * b_three_point + 2 * b_two_point + b_one_point) {
        cout << "A";
    }
    if (3 * b_three_point + 2 * b_two_point + b_one_point > 3 * a_three_point + 2 * a_two_point + a_one_point) {
        cout << "B";
    }
    if (3 * b_three_point + 2 * b_two_point + b_one_point == 3 * a_three_point + 2 * a_two_point + a_one_point) {
        cout << "T";
    }

    return 0;
}