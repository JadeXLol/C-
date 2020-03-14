#include <bits/stdc++.h>    

using namespace std;
int main() {
    int lines;
    int index_lines;
    int index_read;
    int counter = 0;
    string s;

    cin >> lines;

    for (index_lines = 0; index_lines < lines; index_lines++){
        cin >> s; 
        int n = s.length();
        char char_array[n];  
        strcpy(char_array, s.c_str()); 
                for (index_read = 0; index_read < n; index_read++ ){
                    if ((int)char_array[index_read] == (int)char_array[index_read+1]){
                        counter = counter + 1;
                    }
                    else {
                        cout << counter+1 << " " << char_array[index_read] << " ";
                        counter = 0;
                    }
                }
        cout << endl;
    }
    
    return 0;
}