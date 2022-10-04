// This program is written by Abdul Rahman

#include <bits/stdc++.h>
using namespace std;

// Utility function to merge 

void Merge(int a[], int low, int mid, int high)
{
    int i = low; 
    int j = mid + 1;
    int k = low;
    int b[k];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= high)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for (k = low; k <= high; k++)
    {
        a[k] = b[k];
    }
}

// Fuction to sort the array

void MergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}

// Function to print the elements of the array

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
}
int main()
{
    int a[] = {12, 0, -67, 123, 4567, 89};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "The Original Array elements :\n";
    display(a, n);
    cout << "\n\n";
    MergeSort(a, 0, n - 1);
    cout << "Merge Sorted Array elements :\n";
    display(a, n);
}
