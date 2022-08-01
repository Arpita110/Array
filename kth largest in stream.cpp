/*
Kth Largest Element in a Stream

Input
["KthLargest", "add", "add", "add", "add", "add"]
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]
Output
[null, 4, 5, 5, 8, 8]

*/


 int in_k;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    KthLargest(int k, vector<int>& nums) {
        in_k = k;
        for (auto num : nums){
            minHeap.push(num);
            if (minHeap.size() > k)
                minHeap.pop();    
        }
        
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size() > in_k)
            minHeap.pop();
        
        return minHeap.top();
    }
