#include <iostream>
using namespace std;

int recursiveBinarySearch(int a[], int start, int end, int item){
   if (end >= start){
      int mid = start + (end - start)/2;
      if (a[mid] == item)
         return mid;
      if (a[mid] > item)
         return recursiveBinarySearch(a, start, mid-1, item);
      return recursiveBinarySearch(a, mid+1, end, item);
   }
   return -1;
}
int main(void){
   int item,n,i,a[20],loc=-1;
   cout << "Enter the value of n:";
   cin >> n ;
   cout << "Enter the elements in ascending order:\n";
   for(i=0;i<n;i++)
   {
    cin >> a[i] ;
   }
   cout << "Enter the element to be Search:";
   cin >> item;
   loc = recursiveBinarySearch(a, 0, n-1, item);
   if(loc == -1 ) {
      cout << "Element not found in the array ";
   }
   else {
      cout << "Element found at index -->" << loc ;
   }
   return 0;
}