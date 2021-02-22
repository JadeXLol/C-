#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int trout, pike, pickerel, total_allowed, solutions = 0;
    cin >> trout;
    cin >> pike >> pickerel >> total_allowed;

    for(int i = 0; i <= total_allowed; i += trout){
        if(i <= total_allowed && i != 0){
            cout << i/trout <<" Brown Trout, 0 Northern Pike, 0 Yellow Pickerel" << endl;
            solutions++;
        }
        for (int j = 0; j + i <= total_allowed; j += pike){
            if(i + j <= total_allowed && j != 0){
                cout << i/trout <<" Brown Trout, " << j/pike << " Northern Pike, 0 Yellow Pickerel" << endl;
                solutions++;
            }
            for(int k = 0; k + j + i <= total_allowed; k += pickerel){
                if(i + j + k <= total_allowed && k != 0){
                    cout << i/trout <<" Brown Trout, " << j/pike << " Northern Pike, " << k/pickerel << " Yellow Pickerel" << endl;
                    solutions++;
                }
            }
        }
    }
    cout << "Number of ways to catch fish: " << solutions;

    return 0; 
}