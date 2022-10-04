//author : elvenblade
//जय हिंद, जय महाराष्ट्र !
// Inserting Node At Tail

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

void InsertNode(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;

    if(head==NULL) head=temp;
    else{
        Node* temp1=head;
        while(temp1->next!=NULL){
        temp1=temp1->next;
        }
        temp1->next=temp;
    }
}

void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        InsertNode(x);
    }
    Print();
}

