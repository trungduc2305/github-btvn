#include <iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
    node *prev;
};

node *makeNode (int x) {
    node *newNode = new node;
    newNode -> data = x;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;

}

void duyet (node *head){
    while (head != NULL) {
        cout << head -> data << ' ';
    }
    cout << endl;
}

int sz (node *head) {
    int cnt = 0;
    while (head != NULL)
    {
        ++cnt;
        head = head -> next;
    }
    return cnt;
    
}
void themdau1 (node *&head , int x) {
    node *newNode = makeNode(x);
    newNode -> next = head;
    if (head != NULL){
        (head) -> prev = newNode;
        head = newNode;
    }
}

void themcuoi ( node *& head , int x) 
{
    node *newNode = makeNode (x);
    if ( head == NULL) {
        head = newNode ; return;
    }
    node *temp = head;
    while ( temp -> next != NULL)
    {
        temp  = temp -> next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
    
}

void themgiua (node *&head , int x,int k) {
    int n = sz(head);
    if (k <1 || k > n + 1); return;
    if (k ==1) {
        themdau1 (head, x); return; 
    }
    node * temp = head;
    for (int i = 1 ; i <= k-1 ; i++){
        temp = temp -> next;
    }
    node *newNode = makeNode (x);
    newNode -> next = temp;
    temp -> prev -> next = newNode;
    newNode -> prev = temp -> prev;
    temp -> prev = newNode;
}