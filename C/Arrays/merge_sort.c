// C program for Merge Sort
#include <stdio.h>
#include <stdlib.h>

void printArr(int Arr[], int size);
void merge(int Arr[], int s, int mid, int e);
void Sort(int Arr[], int s, int e);

void printArr(int Arr[], int size)
{
    for (int ind = 0; ind < size; ind++)
        printf("%d ", Arr[ind]);
    printf("\n");
}

void Sort(int Arr[], int s, int e)
{
    if (s < e) {
        int mid = s + (e - s) / 2;
 
        Sort(Arr, s, mid);
        Sort(Arr, mid + 1, e);
 
        merge(Arr, s, mid, e);
    }
}

void merge(int Arr[], int s, int mid, int e)
{
    int i, j, k;
    int n1 = mid - s + 1;
    int n2 = e - mid;
 
    int Left[n1], Right[n2];
 
    for (i = 0; i < n1; i++)
        Left[i] = Arr[s + i];
    for (j = 0; j < n2; j++)
        Right[j] = Arr[mid + 1 + j];
 
    i = 0;
    j = 0;
    k = s;

    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j]) {
            Arr[k] = Left[i];
            i++;
        }
        else {
            Arr[k] = Right[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        Arr[k] = Left[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        Arr[k] = Right[j];
        j++;
        k++;
    }
}
 
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int Arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &Arr[i]);
 
    printf("\nGiven array is \n");
    printArr(Arr, n);
 
    Sort(Arr, 0, n - 1);
 
    printf("\nSorted array is \n");
    printArr(Arr, n);
    return 0;
}