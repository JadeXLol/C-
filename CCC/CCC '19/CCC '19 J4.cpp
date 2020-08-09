#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int N, M;
    cin >> N >> M;
    int flower[2,N], pairs[2,M];

    for (int i = 0; i < N; i++){
    cin >> flower[0,i] >> flower[1,i];
    }

    for (int i = 0; i < N; i++){
    cin >> pairs[0,i] >> pairs[1,i];
    }

    return 0; 
}