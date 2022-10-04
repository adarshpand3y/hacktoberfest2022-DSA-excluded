#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head = NULL, *p,* pre = NULL,* cur;

void insert(int n){
    struct Node* t;
    
    t=(Node*)malloc(sizeof(Node));
    t->data=n;

    if(head==NULL)
    {
    head=t;
    head->next=NULL;
    p=head;

    }else
    {
        p->next=t;
        t->next=NULL;
        p=t;
    }
    

}
void display(){
    struct Node* i;
    for( i = head; i!=NULL; i=i->next)
    {
        cout<<i->data<<"\t"<<"->"<<"\t";
    }
    cout<<"NULL"<<"\n";

}
void rev(){
    struct Node* i;
    // cout<<head;
    for  (i = head;i!=NULL; i=cur)
    {
    cur=i->next;
    i->next=pre;
    pre=i;
    if (cur->next==NULL)
    {
        break;
    }
    
    }
    head=cur;
    head->next=pre;
    }
int main(){
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    cout<<"Linked List Before Reversing"<<endl;
    display();

    rev();
    
    cout<<"Linked List After Reversing"<<endl;
    display();
    return 0;
}