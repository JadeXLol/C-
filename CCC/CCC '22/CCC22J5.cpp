#include <bits/stdc++.h>
 
using namespace std; 
int main()
{
    int length = 0, trees = 0, treex = 0, treey = 0;
    cin >> length;
    cin >> trees;
    cin >> treex;
    cin >> treey;
    treex = abs(ceil(length/2)-treex);
    treey = abs(ceil(length/2)-treey);
    if (treex > treey){
        cout << length-treex;
    }else{
        cout << length-treey;
    }

    return 0;
}