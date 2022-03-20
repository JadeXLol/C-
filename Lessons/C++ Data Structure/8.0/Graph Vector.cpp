#include <bits/stdc++.h>
 
using namespace std; 

const int vertices = 5;
vector <int> adjacency[vertices];

void add_directed(int source_vertex, int target_vertex){
    adjacency[source_vertex].push_back(target_vertex);
}

void bfs(int initial_vertex){
    queue<int> visiting_queue = {};
    bool visited[vertices] = {};
    visited[0] = 1;
    visiting_queue.push(initial_vertex);

    while(!visiting_queue.empty()){
        cout << visiting_queue.front() << " -> ";
        for(int i = 0; i < vertices; i++){
            if(visited[i] != 1){
                if(adjacency[visiting_queue.front()][i] == 1){
                    visiting_queue.push(i);
                    visited[i] = true;
                }
            }
        }
        visiting_queue.pop();
    }
}

void output_graph(){
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            cout << adjacency[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    

    

    add_directed(0,1);
    add_directed(0,4);
    add_directed(1,2);
    add_directed(1,3);
    add_directed(1,4);
    add_directed(3,4);
    add_directed(3,2);

    output_graph();
    
    bfs(0);
    return 0; 
}