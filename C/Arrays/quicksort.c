 #include<stdio.h>

//code by raisatwik4

int partition(int A[],int low,int high){
    int pivot=A[low];
    int temp;
    int i=low+1;
    int j=high;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
        temp=A[j];
        A[j]=A[i];
        A[i]=temp;
        }

    }while(i<j);

    temp=A[j];
    A[j]=A[low];
    A[low]=temp;
 
    return j;
}
void quicksort(int A[],int low,int high){
     
     int partitionindex;
     if(low<high){
        partitionindex=partition(A,low,high);
        quicksort(A,low,partitionindex-1);
        quicksort(A,partitionindex+1,high);
     }
}
void display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}


void main(){
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];   
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);  
    quicksort(arr,0,n-1);
   cout << "Array after Sorting: ";
   display(arr, n);
}

