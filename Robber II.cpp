/*
ROBBER II
Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.
*/

 int solve(vector<int>num)
    {
         int dp[num.size()];
      dp[0]=num[0];
       for(int i=1;i<num.size();i++)
       {
        dp[i]= max(dp[i-1],(i-2<0?0:dp[i-2])+num[i]);
    }
        return dp[num.size()-1];
    }
     
    
    int rob(vector<int>& nums) {
       int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        
        vector<int> v1;
        vector<int> v2;
        int i;
        
        for(i=0; i<n-1; i++)
        {
            v1.push_back(nums[i]);
        }
        for(i=1; i<n; i++)
        {
            v2.push_back(nums[i]);
        }
        return max(solve(v1),solve(v2));
    }
