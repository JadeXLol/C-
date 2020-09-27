#include <bits/stdc++.h>
 
using namespace std; 

string determine_prime_bf(int n){
    int a;
    for (int i = 2; i < n; i++){
        if (n%i == 0){
            return "no";
        }
    }
    return "yes";
}

void generate_prime_bf(int n){
    int a;
    bool temp_bool;
    vector <int> primes;
    for (int i = 2; i <= n; i++){
        temp_bool = 0;
        for (int j = 2; j < i; j++){
            if (i%j == 0){
                temp_bool = 1;
            }
        }
        if (temp_bool == 0){
            primes.push_back(i);
        }
    }
    
    for (auto item : primes){
        cout << item << endl;
    }
}

int main() { 
    int n;
    cin >> n;

    cout << determine_prime_bf(n) << endl;
    generate_prime_bf(n);
    return 0; 
}