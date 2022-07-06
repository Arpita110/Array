/*
PARTITION SUM SUBSET
Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
*/ bool subsetSumToK(int k, vector<int> &arr) 
    {
        int n=arr.size();
        bool dp[n+1][k+1];
        for(int i=0;i<n+1;i++)
        {
        for(int j=0;j<k+1;j++)
        {
            if(i==0 and j==0)
            {
                dp[i][j]=true;
            }
            else if(j==0)
            {
                dp[i][j]=true;
            }
            else if(i==0)
            {
                dp[i][j]=false;
            }
            else if(j>=arr[i-1])
            {
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][k];
    }
    
    bool canPartition(vector<int>& nums) 
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        if(sum%2==0)
        {
            return subsetSumToK(sum/2,nums);
        }
        else
        {
            return false;
        }
