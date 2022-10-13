#include <stdio.h>

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void) {
    //int arr[] = { 2, 3, 4, 10, 40 };
    int n,i,x,arr[50];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the numbers one by one:\n");
    for (i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    //int x = 10;
    printf("Enter the number to search:");
    scanf("%d",&x);
    //int N = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);
    if(result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index --> %d", result);
    return 0;
}