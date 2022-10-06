#include<bits/stdc++.h>
using namespace std;

// code by raisatwik

void buildheap(int arr[],int n,int i)
{

    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    while(l<n && arr[largest]<arr[l])
    {
        largest=l;
    }
    while(r<n and arr[largest]<arr[r])
    {
        largest=r;
    }
    if(largest!=i)
    {
         swap(arr[largest],arr[i]);
         buildheap(arr,n,largest);
    }

}

void heapsort(int arr[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        buildheap(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        buildheap(arr,i,0);

    }
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
int main()
{
   
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];   
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   heapsort(arr,n);  
   cout << "Array after Sorting: ";
   display(arr, n);
}