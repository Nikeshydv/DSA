#include<iostream>
using namespace std;

// this is the node class//

class Node{
public:
int data;
Node *next;

public:Node(int d){
data=d;
next=NULL;
}



};

// this is the linked list class;//

class LinkedList{
public:
Node *head;
LinkedList(){
head=NULL;



}
void traversal(){
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}

// this is the function to add the new node  head;
void insert_end(int d){
  if(head==NULL){
  head=new Node(d);
  }
  else(
       Node *temp=head;
       while(temp->next!=NULL){
        temp=temp->next;
       }
       temp->next=new Node(d);
       )
}

};


int main(){
LinkedList obj;
obj.insert_end(89);
obj.insert_end(79);
obj.insert_end(54);
obj.insert_end(96);
obj.insert_end(82);
obj.insert_end(22);
obj.insert_end(77);

cout<<obj.head->data;

}
