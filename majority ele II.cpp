/*
MAJORITY ELEMENT II
Input: nums = [3,2,3]
Output: [3]
*/

vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
      unordered_map<int,int> m;
      for(int i=0;i<nums.size();i++)
      {
            m[nums[i]]++;
       }
       for(auto it : m)
       {
           if(it.second> nums.size()/3)
               v.push_back(it.first);
       }
           return v;
    }
