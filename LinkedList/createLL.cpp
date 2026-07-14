// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node {
    int data ;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd (Node* &head , int val){
    Node* newNode = new Node(val);
    
    if(head == NULL){
        head = newNode;
        return;
    }
    
    Node* t = head;
    
    while(t->next != NULL){
        t = t-> next;
        
    }
    t->next = newNode;
    
}

void display(Node* head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<< temp->data << "->";
        temp = temp->next;
    }
    
    cout<<"NULL";
}


int main(){
    
    Node* head =NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    
    display(head);
}