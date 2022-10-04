#include <iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n - 1];
        int total = 0;

        for (int i = 0; i < n - 1; i++)
        {
            cin>>arr[i];
            total += arr[i];
        }

        int req = (n * (n - 1))/2 + n
        
        
    }
    return 0;
}
