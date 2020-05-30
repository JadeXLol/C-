#include <bits/stdc++.h>
 
using namespace std; 
int main() {
vector <char> playlist = {'A','B','C','D','E'};
int button = 0, presses = 0, a=0;

    while (true){
        a = 0;
        cin >> button;
        cin >> presses;

        if (button == 4){
            break;
        }
        while (a < presses){
            if (button == 1){
                playlist.push_back(playlist[0]);
                playlist.erase(playlist.begin());
            } if (button == 2){
                playlist.insert(playlist.begin(), playlist[4]);	
                playlist.pop_back();
            } if (button == 3){
                playlist.insert(playlist.begin(), playlist[1]);	
                playlist.erase(playlist.begin()+2);
            }
            a++;
        }
    }

for (int c = 0; c < 5; c++){
    cout << playlist[c] << ' ';
}

return 0; 
}