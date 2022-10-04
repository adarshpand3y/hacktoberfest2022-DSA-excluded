#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int *a=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int maxm=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(a[i]>maxm)
    {
      maxm=a[i];
    }
  }
  cout<<maxm<<"\n";
  return 0;
}
