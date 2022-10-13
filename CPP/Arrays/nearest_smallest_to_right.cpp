#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
vector<ll> nsr_right(vector<ll> arr,ll n){
    stack<ll> s;
    vector<ll> v;
    for(int i=n-1;i>=0;i--){
        if(!s.empty()){
            while(!s.empty() and s.top()>=arr[i]){
                s.pop();
            }
            if(!s.empty()){
                v.push_back(s.top());
            }

        }
        if(s.empty()){
            v.push_back(-1);
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
int main(){
ll n;
cin>>n;
vector<ll> v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
vector<ll> result;
result=nsr_right(v,n);
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}
cout<<endl;
return 0;
}