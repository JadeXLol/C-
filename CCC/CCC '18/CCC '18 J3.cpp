#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int distance[4];

    cin >> distance[0] >> distance[1] >> distance[2] >> distance[3];

    cout << "0" << " " << distance[0] << " " << distance[0]+distance[1] << " " << distance[0]+distance[1]+distance[2] << " " << distance[0]+distance[1]+distance[2]+distance[3] << endl;
    cout << distance[0] << " " << "0" << " " << distance[1] << " " << distance[1]+distance[2] << " " << distance[1]+distance[2]+distance[3] << endl;
    cout << distance[0]+distance[1] << " " << distance[1] << " " << "0" << " " << distance[2] << " " << distance[2]+distance[3] << endl;
    cout << distance[0]+distance[1]+distance[2] << " " << distance[1]+distance[2] << " " << distance[2] << " " << "0" << " " << distance[3] << endl;
    cout << distance[0]+distance[1]+distance[2]+distance[3] << " " << distance[1]+distance[2]+distance[3] << " " << distance[2]+distance[3] << " " << distance[3] << " " << "0" << endl;

    return 0; 
}