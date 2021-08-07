#include <bits/stdc++.h>
using namespace std;

int num;
vector <int> cycles;

bool find_cycle(int cycle) {
    int index = 0;
    while (index+cycle < num-1) {       //! Make for loop
        if (cycles[index] != cycles[index+cycle])
            return false;
        index++;
    }
    return true;
}

int main() {
    int previous_temperature, current_temperature;
    while (cin >> num) {
        if (num == 0)
            break;

        // Special case, num = 1
        if (num == 1) {
            cout << 0 << endl;
        }

        // Get differents
        cycles.clear();
        cin >> previous_temperature;
        for (int i = 1; i < num; i++) {
            cin >> current_temperature;
            cycles.push_back(current_temperature - previous_temperature);
            previous_temperature = current_temperature;
        }

        // Validate each cycle
        for (int i = 1; i < num; i++) {
            if (find_cycle(i)) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}