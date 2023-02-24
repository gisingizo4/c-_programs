#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node *deleteNode(Node *head){
    Node *temp=head;
    head=head->next;

    free(temp);
    return head;
}

Node *deleteSlNode(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        
    }
}

void Display(Node *head){
    cout<<"==========List data==============="<<endl;
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main(){

    Node *n1=new Node(5);
    Node *n2=new Node(7);
    Node *n3=new Node(9);
    Node *n4=new Node(15);
    Node *n5=new Node(17);
    Node *n6=new Node(20);

    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=NULL;

    // Display(head);

    // Node *newHead=deleteNode(head);

    // Display(newHead);

    cout<<head->next->next->next->data<<endl;

    return 0;
}