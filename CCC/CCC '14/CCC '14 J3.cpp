#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int n, Antonia_score = 100, David_score = 100, input1, input2;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> input1 >> input2;
        if(input1 > input2){
            David_score-=input1;
        } else if(input1 < input2){
            Antonia_score-=input2;
        }
    }
    cout << Antonia_score << endl;
    cout << David_score;
    return 0; 
}