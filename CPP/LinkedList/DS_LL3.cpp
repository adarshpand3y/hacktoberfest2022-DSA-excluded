//author : elvenblade
//जय हिंद, जय महाराष्ट्र !
// Linked-List : Reversing Linked List

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void Insert(int x){
    Node* temp= new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}

void Print(){
    Node* temp=head;
    cout<<"Linked List Is : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

void Reverse(){
    Node* temp=head;
    Node* prev=NULL;
    Node* nextn;
    cout<<"Reversed Linked List : ";
    while(temp!=NULL){
        nextn=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextn;
    }
    head=prev;
    Node* temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}

int main(){
    head=NULL;
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        Insert(x);
    }
    Print();
    Reverse();
}