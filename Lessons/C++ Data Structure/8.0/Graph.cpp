#include <bits/stdc++.h>
 
using namespace std; 

const int NUM_VERTICES = 5;
int graph_array[NUM_VERTICES][NUM_VERTICES] = {};

void add_directed(int source_vertex, int target_vertex){
    graph_array[source_vertex][target_vertex] = 1;
}

void add_undirected(int source_vertex, int target_vertex){
    graph_array[source_vertex][target_vertex] = 1;
    graph_array[target_vertex][source_vertex] = 1;
}

void add_weighted_direct(int source_vertex, int target_vertex, int weight){
    graph_array[source_vertex][target_vertex] = weight;
}

void add_weighted_undirect(int source_vertex, int target_vertex, int weight){
    graph_array[source_vertex][target_vertex] = weight;
    graph_array[target_vertex][source_vertex] = weight;
}

void output(){
    for(int i = 0; i < NUM_VERTICES; i++){
        for(int j = 0; j < NUM_VERTICES; j++){
            cout << graph_array[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() { 
    // add_directed(0,1);
    // add_directed(0,3);
    // add_directed(1,2);
    // add_directed(1,4);
    // add_directed(3,4);
    // add_directed(4,2);

    // add_undirected(0,1);
    // add_undirected(0,3);
    // add_undirected(1,2);
    // add_undirected(1,4);
    // add_undirected(3,4);
    // add_undirected(4,2);

    // add_weighted_direct(0,1,9);
    // add_weighted_direct(0,3,5);
    // add_weighted_direct(1,2,6);
    // add_weighted_direct(1,4,8);
    // add_weighted_direct(3,4,2);
    // add_weighted_direct(4,2,4);

    add_weighted_undirect(0,3,5);
    add_weighted_undirect(0,1,9);
    add_weighted_undirect(1,2,6);
    add_weighted_undirect(1,4,8);
    add_weighted_undirect(3,4,2);
    add_weighted_undirect(4,2,4);


    output();
    return 0; 
}