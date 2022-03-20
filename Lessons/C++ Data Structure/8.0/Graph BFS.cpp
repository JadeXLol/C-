#include <bits/stdc++.h>
 
using namespace std; 

const int vertices = 5;
int graph_array[vertices][vertices] = {};

void add_undirected(int a, int b){
    graph_array[a][b] = 1;
    graph_array[b][a] = 1;
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
                if(graph_array[visiting_queue.front()][i] == 1){
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
            cout << graph_array[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() { 
    add_undirected(0,1);
    add_undirected(0,4);
    add_undirected(1,2);
    add_undirected(1,3);
    add_undirected(1,4);
    add_undirected(3,4);
    add_undirected(3,2);

    output_graph();
    
    bfs(0);
    return 0; 
}