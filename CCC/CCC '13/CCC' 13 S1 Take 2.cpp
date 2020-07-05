    #include <bits/stdc++.h>
    
    using namespace std; 

    bool year_distinction(int current_year) {
        vector <int> digit_vect;
        set <int> digit_set;
        int year_copy = current_year;

        while (year_copy > 0){
            digit_vect.insert(digit_vect.begin(), year_copy%10);
            digit_set.insert(year_copy%10);
            year_copy= year_copy/10;
        }
        if  (digit_set.size() == digit_vect.size()){
            return true;
        } else{
            digit_set.clear();
            digit_vect.clear();
            return false;
        }
    }

    int main(){ 
        int input, current_year;
        cin >> input;
        current_year = input + 1;
        while (!year_distinction(current_year)){
            current_year++;
        }
        cout << current_year;
        return 0;
    }
