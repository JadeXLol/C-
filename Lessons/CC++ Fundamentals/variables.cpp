#include <bits/stdc++.h>    

using namespace std;

int main() {
    int days;
    unsigned long long int random_int;
    float total_rain;
    float average_rain;
    string favorite_food;
    bool bool_true = true;

    cout << "How many days has it been?" << endl;
    cin >> days;
    cout << "How much rain has there been (millimeters)?" <<endl;
    cin >> total_rain;
    average_rain = total_rain/days;
    cout << "There was " << average_rain << " average rain in the past " << days << " days." <<endl;

    cout << "What's you're favorite food?" <<endl;
    cin >> favorite_food;
    cout << favorite_food << " sucks." << endl;
    
    cout << bool_true << endl;
    random_int = 2000000000;
    random_int = random_int*2;
    cout << random_int;
    return 0;
    

}