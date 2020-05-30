#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int n;
    cin >> n;
    int a, b, c;
    int counting = 0;

    for (a = 1; a<=n; a++){
        for (b = a; b<=n; b++){
            for (c = b; c<=n; c++){
                //cout << a << " "<< b << " " << c << " " << endl;
                if (((a+b+c)==n) && (a != b) && (a != c) && (b != c)){
                    //cout << a << " "<< b << " " << c << " " << endl;
                    counting = counting + 1;
                }
            }
        }
    }
    cout << counting;

return 0; 
}