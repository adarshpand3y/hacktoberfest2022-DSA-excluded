/*
I have create singleLinked list with following functionalites:
 1. creating a node
 2. displaying nodes
 3. reverse linked list
 4. adding element to first postion
 5. adding element to any position


*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
Node *temp = NULL;

void createNode()
{
    Node *newNode = new Node();
    int val;
    cout << "Enter data value: " << endl;
    cin >> val;
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = temp = newNode;
    }
    else
    {
        temp->next = newNode;
        temp = newNode;
    }
}
// using recursion
void display(Node *first)
{
    if (first != NULL)
    {
        cout << first->data << " ";
        display(first->next);
    }
}
void Rdisplay(Node *first)
{
    if (first != NULL)
    {
        Rdisplay(first->next);
        cout << first->data << " ";
    }
}
void insertAtFirst(int d)
{
    Node *newNode = new Node();
    newNode->data = d;
    newNode->next = NULL;

    newNode->next = head;
    head = newNode;
}
void insertAtEnd(int d)
{
    Node *newNode = new Node();
    newNode->data = d;
    newNode->next = NULL;
    temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // Transversing until end of the node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    // cout << temp->data << endl;
}

// this function is used to count number of nodes present in linkedlist
int count()
{
    int c = 0;
    temp = head;
    if (head == NULL)
        return 0;
    else
    {
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }
    }
    return c;
}

void insertAtAnyPosition(Node *first, int pos, int val)
{

    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    // cout << count() << endl;
    if (pos < 0 || pos > count())
        return;
    else
    {
        if (pos == 1)
        {
            insertAtFirst(val);
        }
        else
        {
            for (int i = 0; i < pos - 1; i++)
            {
                first = first->next;
            }
            newNode->next = first->next;
            first->next = newNode;
        }
    }
}

int main()
{
    char ch;

    do
    {
        createNode();

        cout << "do you want to add more nodes " << endl;
        cin >> ch;
    } while (ch == ('y' | 'Y'));
    cout << endl
         << "elements in linked list are ..." << endl;
    display(head);
    cout << "\nAfter reverse linkedlist" << endl;
    Rdisplay(head);
    cout << endl;
    cout << "After adding element '90' at first position" << endl;
    insertAtFirst(90);
    display(head);
    cout << "\nAfter adding element '99' at end position" << endl;
    insertAtEnd(99);
    display(head);

    cout << "\nAfter adding element '6' to any(3rd) position" << endl;
    insertAtAnyPosition(head, 3, 6);
    display(head);
}
