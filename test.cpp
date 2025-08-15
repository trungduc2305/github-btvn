#include <iostream>
    using namespace std;
        struct Node
        {   
            int data;
            Node* prev;
            Node* next;
            Node (int value) : data (value), prev(NULL) ,next(NULL){}
        };

        struct doublylinkedlist
        {
            Node* head;
            Node* tail;
            int size;
            
            doublylinkedlist () : head(NULL) , tail(NULL) , size(0){}
            
        bool isEmpty (){
            return head == NULL;
        }

        int getSize () {
            return size;
        }

        void Daucuoi (){
            Node* temp = head;
                while (temp)
                {
                    cout << temp -> data << " ";
                    temp = temp -> next;
                }
                cout << endl;
        }

        void Cuoidau () {
            Node* temp = tail;
            {
                while (temp)
                {
                   cout << temp -> data << " "; 
                   temp = temp -> prev;
                }
                cout << endl;   
            }
        }

        void Themphantudau (int value){
            Node* newNode = new Node (value);
                if (isEmpty ()) {
                    head = tail = newNode;
                } else {
                    newNode -> next = head;
                    head -> prev = newNode;
                }
                size++;
        }

        void Themphantucuoi (int value) {
            Node* newNode = new Node (value);
                if (isEmpty ()){
                    head = tail = newNode;
                } else {
                    newNode -> next = tail;
                    tail -> prev = newNode;
                }
                size ++;
        }
        void Chentrcphantu (int value, Node* nextNode){
            if (!nextNode) return;
            if (nextNode == head) {
                Themphantudau (value);
                return;
            }
            Node* newNode = new Node(value);
            Node* prevNode = nextNode -> prev;
            
            
        }

        };
        

