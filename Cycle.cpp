#include<stdio.h>    
    
void cycleSort(int a[], int n)    
{    
    int start, element, pos, temp, i;    
     
    for (start = 0; start <= n - 2; start++) {    
        element = a[start];  

        pos = start;    
          
        for (i = start + 1; i < n; i++)    
            if (a[i] < element)    
                pos++;    
        if (pos == start)  
            continue;    
        while (element == a[pos])    
            pos += 1;    
        if (pos != start) 
        {    
 
            temp = element;    
            element = a[pos];    
            a[pos] = temp;      
        }    
        while (pos != start)   
        {    
            pos = start;    
 
            for (i = start + 1; i < n; i++)    
                if (a[i] < element)    
                    pos += 1;    
              
            while (element == a[pos])    
                pos += 1;    
              
            if (element != a[pos])   
            {    
                temp = element;    
                element = a[pos];    
                a[pos] = temp;      
            }    
        }    
    }    
     
 }    
   
  void print(int a[], int n) 
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
  
     
int main()    
{    
    int a[] = {90, 405, 30, 200, 10, 40, 60, 50, 05, 2};    
    int n = sizeof(a) / sizeof(a[0]);    
    printf("Before sorting array elements are :( \n");  
    print(a, n);  
    cycleSort(a, n);    
    printf("\nAfter applying cycle sort, array elements are :) \n");    
    print(a, n);  
    return 0;    
} 
