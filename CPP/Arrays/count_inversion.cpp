#include<iostream>
using namespace std;
int CountInversionArray(int a[], int n) {
   int i, j, c = 0;
   for(i = 0; i < n; i++) {
      for(j = i+1; j < n; j++)
         if(a[i] > a[j])
            c++;
   }
   return c;
}
int main() {
   int n, i;
   cout<<"\nEnter the number of elements: ";
   cin>>n;
   int a[n];
   for(i = 0; i < n; i++) {
      cout<<"Enter element "<<i+1<<": ";
      cin>>a[i];
   }
   cout<<"\nThe number of inversion in the array: "<<CountInversionArray(a, n);
   return 0;
}