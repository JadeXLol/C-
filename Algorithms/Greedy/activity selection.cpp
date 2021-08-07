#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int start[6] = {1, 3, 0, 5, 8, 5};
    int finish[6] = {2, 4, 6, 7, 9, 9};
    int currentTime = 0, totalJobs = 0, bestTime = 10, bestJob;
    vector <int> jobs;
    // while(currentTime < 9){
    //     for(int i = 0; i < 6; i++){
    //         if(currentTime<start[i]){
    //             if(finish[i]-currentTime < bestTime){
    //                 bestTime = finish[i]-currentTime;
    //                 bestJob = i;
    //             }
    //         }
    //     }
    //     currentTime += bestTime;
    //     bestTime = 10;
    //     totalJobs += 1;
    //     jobs.push_back(bestJob);
    // }
   

    for(int i = 0; i < 6; i++){
       if(currentTime < start[i]){
           currentTime = finish[i];
            totalJobs += 1;
            jobs.push_back(i);
       } 
    }


    cout << totalJobs << endl;
    for(auto item : jobs){
        cout << item+1 << endl;
    }
    return 0;
}