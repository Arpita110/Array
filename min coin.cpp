/*

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
*/

int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        int n= coins.size();
        dp[0]=0;
        for(int i=1;i<=amount;i++)
            dp[i]=INT_MAX;
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>=coins[j])
                {
                    int res= dp[i-coins[j]];
                        if(res!=INT_MAX && res+1<dp[i])
                            dp[i]=res+1;

                    }
            }
        }
        if(dp[amount]==INT_MAX)
            return -1;
        return dp[amount];
    }
