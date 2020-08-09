#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int dis[4];

    cin >> dis[0] >> dis[1] >> dis[2] >> dis[3];

    cout << "0" << " " << dis[0] << " " << dis[0]+dis[1] << " " << dis[0]+dis[1]+dis[2] << " " << dis[0]+dis[1]+dis[2]+dis[3] << endl;
    cout << dis[0] << " " << "0" << " " << dis[1] << " " << dis[1]+dis[2] << " " << dis[1]+dis[2]+dis[3] << endl;
    cout << dis[0]+dis[1] << " " << dis[1] << " " << "0" << " " << dis[2] << " " << dis[2]+dis[3] << endl;
    cout << dis[0]+dis[1]+dis[2] << " " << dis[1]+dis[2] << " " << dis[2] << " " << "0" << " " << dis[3] << endl;
    cout << dis[0]+dis[1]+dis[2]+dis[3] << " " << dis[1]+dis[2]+dis[3] << " " << dis[2]+dis[3] << " " << dis[3] << " " << "0" << endl;

    return 0; 
}