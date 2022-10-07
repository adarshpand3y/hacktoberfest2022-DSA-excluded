
/*Find equilibrium index of an array*/

#include <stdio.h>
 
void findEquilibriumIndex(int A[], int n)
{
    int left[n];
 
    left[0] = 0;
 
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] + A[i - 1];
    }
 
    int right = 0;
 
    for (int i = n - 1; i >= 0; i--)
    {
        
 
        if (left[i] == right) {
            printf("Equilibrium Index found at %d\n", i);
        }
 
        right += A[i];
    }
}
 
int main(void)
{
    int A[] = { 0, -3, 5, -4, -2, 3, 1, 0 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findEquilibriumIndex(A, n);
 
    return 0;
}
