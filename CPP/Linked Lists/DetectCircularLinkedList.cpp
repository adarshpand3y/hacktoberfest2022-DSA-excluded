#include<iostream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int value){
        val = value;
        next = NULL;
    }
};

void push_front(Node** head, int new_val){
    Node* new_node = new Node(new_val);
    new_node->next = *head;
    *head = new_node;
}

bool isCircular(Node* head){
    // detect cycle
    Node *slow, *fast;
    slow = fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = (fast->next)->next;

        if(slow==fast) break;
    }

    if(fast==NULL) return false;
    if(fast->next == NULL) return false;


    // now we have a loop
    // find its starting point
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }

    // check if starting point of loop
    // is the first node
    if(slow == head) return true;
    else return false;
}



int main(){
    Node* h1 = NULL;

    push_front(&h1, 5);
    push_front(&h1, 4);
    push_front(&h1, 3);
    push_front(&h1, 2);
    push_front(&h1, 1);

    // let's check if our lined list if circular or not
    if(isCircular(h1)) cout<<"YES\n";
    else cout<<"NO\n";

    // make the next pointer of last node point to first node
    Node* i = h1;
    while(i->next!=NULL){
        i = i->next;
    }

    i->next = h1;

    // now the linked list is made circular
    // 1->2->3->4->5
    //  \----------/

    // let's check if our function finds out or not
    if(isCircular(h1)) cout<<"YES\n";
    else cout<<"NO\n";

    // make the next pointer of last node point to second node
    i->next = (h1->next);

    // now the linked list isn't circular
    // but has a loop
    // 1->2->3->4->5
    //    \--------/

    // let's check if our function finds out or not
    if(isCircular(h1)) cout<<"YES\n";
    else cout<<"NO\n";
}