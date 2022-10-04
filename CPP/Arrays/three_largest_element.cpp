#include <bits/stdc++.h>
using namespace std;
void findThreeLargestElements(int arr[], int n){
   sort(arr, arr + n, std::greater<>());
   int j = 0;
   cout<<"\nThree largest elements are ";
   for(int i = 0; i < n; i++){ 
      if(arr[i] != arr[i+1]){ 
         cout<<arr[i]<<" "; 
         j++;
      }
      if(j == 3){
         break;
      }
   }
}
int main(){
   int arr[] = {15, 2, 7, 86, 0, 21, 50, 53, 50};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<"The array is : ";
   for(int i = 0; i < n; i++)
      cout<<arr[i]<<"\t";
   findThreeLargestElements(arr, n);
   return 0;
}