#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int n;
    cin >> n;

    int highest_bid = 0, temp_bid;
    string highest_bidder, temp_bidder;
    
    for(int i = 0; i < n; i++){
        cin >> temp_bidder;
        cin >> temp_bid;
        if(temp_bid > highest_bid){
            highest_bid = temp_bid;
            highest_bidder = temp_bidder;
        }
    }
    cout << highest_bidder;
    return 0; 
}