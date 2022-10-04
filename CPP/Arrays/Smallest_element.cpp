#include<iostream>
using namespace std;

int main()
{

        int small, arr[50], m, j;
        cout<<"Enter size of Array: ";
        cin>>m;

        for(j=0;j<m;++j)
        {
            cin>>arr[j];
        }


        small=arr[0];
        for(j=0; j<m; j++)
        {
                if(small>arr[j])
                {
                        small=arr[j];
                }
        }
        cout<<"Smallest Element in Array = "<<small<<"\n";


        return 0;
}
