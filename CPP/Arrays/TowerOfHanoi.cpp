#include <iostream>

using namespace std;

// Function to print the steps to move n disks from source to destination
//           A=from, B=using, C=to

void TOH(int n,int A,int B,int C)
{
    if(n==1)
    {
        cout<<"Move disk 1 from rod "<<A<<" to rod "<<C<<endl;
        return;
    }
    TOH(n-1,A,C,B);
    cout<<"Move disk "<<n<<" from rod "<<A<<" to rod "<<C<<endl;
    TOH(n-1,B,A,C);
}
int main()
{
    int n;
    cin>>n;
    TOH(n,1,2,3);
    return 0;
}
