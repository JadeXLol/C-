#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int startday, numdays, i, counter = 1;
    cin >> startday;
    cin >> numdays;
    i = 2 - startday;

    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;

    for (i = i; i <= numdays; i++){
        while (i < 1){
            cout <<"    ";
            i++;
        }
        if(i < 10){
            cout << "  " << i; 
        }else{
            cout << ' ' << i;
        }

        if(i == numdays){
            cout << endl;
            return 0;
        }

        if (counter == 7){
            cout << endl;
            counter = 1;    
        }else{
            cout << ' ';
            counter ++;
        }
    }

    return 0; 
}   