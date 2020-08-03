#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int b_f, b_b, n_f, n_b, s, byron = 0, nikky = 0;
    cin >> n_f;
    cin >> n_b;
    cin >> b_f;
    cin >> b_b;    
    cin >> s;
    int b_size = b_f + b_b, n_size = n_f + n_b;
    
    nikky += (s-(s%n_size))/n_size;
    nikky *= n_f - n_b;
    byron += (s-(s%b_size))/b_size;
    byron *= b_f - b_b;

    if (s%n_size >= n_f){
        nikky += 2*n_f - s%n_size;
    }else {
        nikky += s%n_size;
    }

    if (s%b_size >= b_f){
        byron += 2*b_f - s%b_size;
    }else {
        byron += s%b_size;
    }


    if (byron > nikky){
        cout << "Byron";
    }else if (byron < nikky) {
        cout << "Nikky";
    }else{
        cout << "Tied";
    }

    return 0; 
}