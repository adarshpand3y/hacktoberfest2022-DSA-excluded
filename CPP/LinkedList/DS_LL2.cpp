//author : elvenblade
//जय हिंद, जय महाराष्ट्र !
// Linked-List : Inserting Node at Nth Position

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

void InsertNode(int n, int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;

    if(n==1){
        temp->next=head;
        head=temp;
        return;
    }
    else{
        Node* temp1=head;
        for(int i=0; i<(n-2); i++){
            temp1=temp1->next;
        }
        temp->next=temp1->next;
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
    
    for(int i=0; i<5; i++){
        int n,x;
        cin>>n>>x;
        InsertNode(n,x);
    }
    Print();
}