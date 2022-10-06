#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int arr[]={2,4,1,7,4};
   
    int size= sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+size);
   
  
   
   cout<<"Sorted array\n";
   
   for(int i=0;i<size;i++)
   cout<<arr[i]<<" ";
   
   
    return 0;
}
