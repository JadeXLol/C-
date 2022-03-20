#include <bits/stdc++.h>
 
using namespace std;
const int PAGES = 10001;

int pagelength[PAGES] = {};
bool visited[PAGES] = {};
bool page_matrix[PAGES][PAGES] = {};
void add_directed_edge(int a, int b){
    page_matrix[a][b] = true;
}

void bfs(int numPAGES){
    queue <int> order = {};
    order.push(1);
    int current_vertex = 1;
    pagelength[1] = 1;
    while(!order.empty()){
        current_vertex = order.front();
        order.pop();
        if(!visited[current_vertex]){
            visited[current_vertex] = true;
            for(int i = 1; i < numPAGES; i++){
                if(page_matrix[current_vertex][i] && !visited[i]){
                    order.push(i);
                    pagelength[i] = pagelength[current_vertex]+1;
                }
            }
        }
    }
}

int main(){ 
    int numPAGES, options, input;
    cin >> numPAGES;
    vector <int> endpages;

    for (int i = 0; i < numPAGES; i++){
        cin >> options;
        if(options == 0){
            endpages.push_back(i); 
        }
        for(int j = 0; j < options; j++){
            cin >> input;
            add_directed_edge(i,input);
        }
    }
    bfs(numPAGES);
    int min_num = PAGES;
    char reachable = 'Y';
    for(int i = 1; i < PAGES; i++){
        if(!visited[i]){
            reachable = 'N';
        }
    }

    for(int i = 0; i < endpages.size(); i++){
        if(pagelength[i] < min_num){
            min_num = pagelength[endpages[i]];
        }
    }

    cout << reachable << endl << min_num;

    return 0; 
}