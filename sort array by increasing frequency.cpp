/*
Sort Array by Increasing Frequency

Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

*/

 vector<int> frequencySort(vector<int>& nums) {
       priority_queue<pair<int,int>> maxh;
       unordered_map<int,int> m;
     vector<int> ans;
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        maxh.push({-i->second, i->first});
    }
    while(maxh.size()>0)
    {
        int freq = maxh.top().first;
        int element = maxh.top().second;
        
        for(int i=1;i<=abs(freq);i++)
        {
            ans.push_back(element);
        }
        maxh.pop();
    }
    return ans;
}
