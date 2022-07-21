/*
SLIDING WINDOW MAXIMUM
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
*/


 vector<int> maxSlidingWindow(vector<int>& nums, int k) {    
        
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            pq.push({nums[i],i});
        }
        v.push_back(pq.top().first);
        for(int i=k;i<nums.size();i++)
        {
            pq.push({nums[i],i});
            if(pq.top().second<=i-k)
            {
                while(pq.top().second<=i-k)
                    pq.pop();
            }
            v.push_back(pq.top().first);
        }
        return v;
    }
