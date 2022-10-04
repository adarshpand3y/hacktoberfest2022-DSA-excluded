#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int>& nums, int k) {
    priority_queue<int> maxheap;
    for(auto x : nums) {
        maxheap.push(x);
        if(maxheap.size() > k) {
            maxheap.pop();
        }
    }
    
    return maxheap.top();
}

int main() {
    vector<int> nums;
    for(int i = 1; i <= 10; i++) {
        nums.push_back(i);
    }

    int k = 3;
    int ans = kthSmallest(nums, k);

    cout << "kth smallest element = " << ans << endl;
    
    return 0;
}