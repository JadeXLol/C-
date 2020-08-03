#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int cord_1[2], cord_2[2], distance[2], charge;

    cin >> cord_1[0] >> cord_1[1];
    cin >> cord_2[0] >> cord_2[1];
    cin >> charge;

    distance[0] = abs(cord_1[0] - cord_2[0]);
    distance[1] = abs(cord_1[1] - cord_2[1]);

    if (charge >= distance[0]+distance[1] && charge%2 == (distance[0]+distance[1])%2){
        cout << 'Y';
    } else {
        cout << 'N';
    }
    return 0; 
}