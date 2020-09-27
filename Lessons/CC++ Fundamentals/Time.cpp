#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int main() {    
    // Calculate time elapsed - Method 2, "using namespace std::chrono;"   
    auto start = system_clock::now();    
    for (int i = 0; i < 1000000; i++){  
        // Empty loop    
    }     
    auto end = system_clock::now();    
    duration <double> elapsed_seconds = end - start;    
    cout << "Elapsed time: " << elapsed_seconds.count() << "s" << endl;
    return 0;}