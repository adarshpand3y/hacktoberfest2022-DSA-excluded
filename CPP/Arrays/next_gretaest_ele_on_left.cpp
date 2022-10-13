#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
vector<long long> ngl_left(vector<ll> arr,ll n){
stack<ll> s;
vector<ll> v;
for(int i=0;i<n;i++){
    if(!s.empty()){
        while(!s.empty() and s.top()<=arr[i]){s.pop();}
        if(s.empty()){v.push_back(-1);}
        else{v.push_back(s.top());}
    }
    else{v.push_back(-1);}
    s.push(arr[i]);

}
return v;
}
int main(){
ll n;
cin>>n;
vector<ll >v;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v.push_back(k);
}
vector<ll> result;

result=ngl_left(v,n);
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}
cout<<endl;
return 0;
}