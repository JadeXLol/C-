#include <bits/stdc++.h>
 
using namespace std; 

const int vertices = 5;
int graph_array[vertices][vertices] = {};

void add_undirected(int a, int b){
    graph_array[a][b] = 1;
    graph_array[b][a] = 1;
}

void dfs(int initial_vertex){
    stack<int> visiting_stack = {};
    bool visited[vertices] = {};
    visiting_stack.push(initial_vertex);
    int current_vertex = 0;

    while(!visiting_stack.empty()){
        current_vertex = visiting_stack.top();
        visiting_stack.pop();
        if(!visited[current_vertex]){
            visited[current_vertex] = true;
            cout << current_vertex << " => ";
            for(int i = 0; i < vertices; i++){
                if(graph_array[current_vertex][i] == 1 && visited[i] == false){
                    visiting_stack.push(i);
                }
            }
        }
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
    
    dfs(2);
    return 0; 
}