#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    //Creating a constructor
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//Searching to return a boolean

bool Search(Node *head, int d){
    while(head!=NULL){
        if(head->data==d){
            return true;
        }
        head=head->next;

    }
    return false;
}

//Returning the position

int SearchLL(Node *head,int key){
    int position=0;
    while(head!=NULL){
        if(head->data==key){
            return position;
        }
        else{
            position++;
        }
        head=head->next;
    }
    return -1;
}

int main(){

    //Declaring the lists

    Node *n1=new Node(5);
    Node *n2=new Node(7);
    Node *n3=new Node(9);
    Node *n4=new Node(11);
    Node *head=n1;

    //Linking the nodes

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;

    //Output the boolean

    bool done=Search(head,3);
    if(done == false){
        cout<<"Number not found"<<endl;
    }
    else{
        cout<<"Number is available"<<endl;
    }

    //Output the position

    int pos=SearchLL(head,8);
    if(pos==-1){
        cout<<"Number not found"<<endl;
    }
    else{
        cout<<"Position: "<<pos<<endl;
    }
}