#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for(auto x : nums) {
        minHeap.push(x);
        if(minHeap.size() > k) {
            minHeap.pop();
        }
    }
    
    return minHeap.top();
}

int main() {
    vector<int> nums;
    for(int i = 1; i <= 10; i++) {
        nums.push_back(i);
    }

    int k = 3;
    int ans = findKthLargest(nums, k);

    cout << "kth largest element = " << ans << endl;
    
    return 0;
}