#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    bitset<8> bits("00000000");
    bits.set(3, 1);     // 0000 1000
    bits.set(4, 1);     // 0001 0000
    bits.set(6, 1);     // 0100 0000
    bits.unset(6);
    cout << bits << endl;   // 0101 1000

    int x = 324;
    cout << bitset<12>(x) << endl;

    string binary_string = bitset<12>(x).to_string();
    cout << binary_string << endl;

    cout << bitset<12>(x)[2] << endl;
    cout << bitset<12>(x)[6] << endl;
    cout << bitset<12>(x)[8] << endl;

    if (bits.test(3)){
        cout << "Pos 3 is 1." << endl;
    }
    else {
        cout << "Pos 3 is 0." << endl;
    }

    for (int i; i < 12; i++) {
        cout << bitset<12>(x)[i];
    }

    cout << endl;
    
    //shifts

    cout << "10000010 >> Right Shift" << endl;
    const int N;
    bitset<N> bits_shifts(130);
    for (int i = 0; i < N; i++) {
        bits_shifts >>= 1;
        cout << bits_shifts << endl;
    }

    return 0; 
}