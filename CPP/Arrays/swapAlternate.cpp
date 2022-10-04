#include <iostream>
using namespace std;


void swapAlternate(int arr[], int n){

    for (int i = 0; i < n; i = i+2){

        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for (int i =0; i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{

   int evenarray[6] = {1,2,3,4,5,6};
   swapAlternate(evenarray,6);

   int oddarray[5] = {210,5,534,95,6};
   swapAlternate(oddarray,5);

   cout << "The alternated array is : ";
   printArray(evenarray,6);

   cout << endl << endl;

   cout << "The alternated array is  : ";
   printArray(oddarray,5);



}