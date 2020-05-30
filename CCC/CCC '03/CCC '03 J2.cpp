#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input;
    int length, width;

    while (true){
        cin >> input;
        if (input == 0)
            break;
        for (int n = 0; n >= 0; n++){
            length = sqrt(input) - n;
            width = input/length;
            if (length*width == input)
                break;
        }
        cout << "Minimum perimeter is "<< 2*length+2*width  << " with dimensions " << length <<" x " << width << endl;
    }
return 0; 
}