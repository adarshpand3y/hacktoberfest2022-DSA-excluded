#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	// next greater element to the right.
	// print -1 if no next greater element is found.
	vector<int>v(n), nge(n, -1);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	stack<int>st;

	for(int i=0;i<n;i++){
		while(!st.empty() && v[st.top()]<v[i]){
			nge[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}

	for(int i=0;i<n;i++){
		if(nge[i] == -1){
			cout<<-1<<" ";
		}
		else{
			cout<<v[nge[i]]<<" ";

		}
	}
	cout<<endl;


}
