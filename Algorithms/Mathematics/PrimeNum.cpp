#include <bits/stdc++.h>
 
using namespace std; 
using namespace std::chrono;

string determine_prime_bf(unsigned long long int n){
    int a;
    if (n%2==0){
        return "no";
    }
    for (int i = 3; i < ceil(sqrt(n)); i++){
        if (n%i == 0){
            return "no";
        }
    }
    return "yes";
}

void generate_prime_bf(unsigned long long int n){
    int a;
    bool temp_bool;
    vector <int> primes;
    
    for (int i = 2; i <= n-1; i++){
        temp_bool = 0;
        for (int j = 3; j < i; j+=2){
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
    unsigned long long int n;
    cin >> n;

    auto start = system_clock::now(); 
    cout << determine_prime_bf(n) << endl;
    auto end = system_clock::now();  
    duration <double> elapsed_seconds = end - start;    
    cout << "Elapsed time: " << elapsed_seconds.count() << "s" << endl << endl;

    auto start_2 = system_clock::now(); 
    generate_prime_bf(n);
    auto end_2 = system_clock::now();     
    duration <double> elapsed_seconds_2 = end_2 - start_2;    
    cout << "Elapsed time: " << elapsed_seconds_2.count() << "s" << endl << endl;


    

    return 0; 
}