#include<iostream>
#define ms 5


using namespace std;
int stack[ms],top=-1;
void push(){
    if (top==ms-1){
        cout<<"UNDERFLOW";
    }else
    {
        cout<<"\nEnter the data to push: ";
        cin>>stack[++top];
    }
    

}
void pop(){
    if (top==-1)
    {
        cout<<"UNDERFLOW";
    }else
    {
        cout<<"The popped element is "<<stack[top--];
        
    }
}
void display(){
    int i;
    for (i = top; i >=0; i--)
    {
        cout<<stack[i]<<"\t";
    }
}
int main(){
    int choice;
    

    
    do
    {
        cout<<"\n--------MENU---------";
        cout<<"\n1.push";
        cout<<"\n2.Pop";
        cout<<"\n3.Display";
        cout<<"\n4.Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        
        default:
            printf("Invalid Choice");
            break;
        }
    } while (choice!=4);
    


}