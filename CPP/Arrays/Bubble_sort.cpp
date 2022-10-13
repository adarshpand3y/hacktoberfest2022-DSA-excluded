#include <iostream>
using namespace std;

 // This program is made by GodDrago
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int n,arr[50];
    cout << "Enter the value of n:";
    cin >> n;
    //int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    cout << "Enter the list of numbers:";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
