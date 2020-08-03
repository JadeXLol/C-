#include <bits/stdc++.h>
 
using namespace std; 

struct node {
string data;
struct node *next;
};

struct node_2 {
    int data;
    struct node *next;
};

void read_linked_list(struct node *node) {
    while (node != NULL) {
        cout << node -> data << " ";
        node = node -> next;
    }
}

int main() { 
    //singly linked list
    node *node_1 = new node;
    node *node_2 = new node;
    node *node_3 = new node;
    node *node_4 = new node;

    node_1->data = "Annika";
    node_1->next = node_2; 

    node_2->data = "is";
    node_2->next = node_3;

    node_3->data = "pretty";
    node_3->next = node_4;

    node_4->data = "cool.";
    node_4->next = NULL;

    read_linked_list(node_1);

    //doubly linked list

    return 0; 
}
