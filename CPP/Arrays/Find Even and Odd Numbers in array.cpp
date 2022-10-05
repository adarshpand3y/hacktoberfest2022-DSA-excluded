#include<iostream>
using namespace std;

int main()
{
   int arr[20],even[20],odd[20],i,j=0,k=0,size;

   cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>arr[i];
        }

  cout<<"\nStored Data in Array :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<arr[i]<<" ";
  }

   for(i=0; i<size;i++)
   {
   if(arr[i]%2==0)
   {
    even[j]=arr[i];
    j++;
   }
   else
   {
   odd[k]=arr[i];
   k++;
   }
   }

  cout<<"\n\nEven Elements in Array are :: \n\n";

  for(i=0; i<j ;i++)
   {
     cout<<" "<<even[i]<<" ";
   }

  cout<<"\n\nOdd Elements in Array are :: \n\n";

  for(i=0; i<k; i++)
   {
    cout<<" "<<odd[i]<<" ";
   }

   cout<<"\n";

  return 0;

  }
