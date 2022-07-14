/*

top k frequency
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
*/

vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
      unordered_map<int,int> mp;

    for(auto it:nums)
        mp[it]++;
    
    for(auto it:mp)
        pq.push({it.second, it.first});

    vector<int> ans;
    while(k--){
        auto x=pq.top();
        ans.push_back(x.second);
        pq.pop();
    }
    return ans;  
    }
