/*ROBBER I
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
*/



int rob(vector<int>& nums) {
      int dp[nums.size()];
      dp[0]=nums[0];
       for(int i=1;i<nums.size();i++)
       {
        dp[i]= max(dp[i-1],(i-2<0?0:dp[i-2])+nums[i]);
    }
        return dp[nums.size()-1];
    }
