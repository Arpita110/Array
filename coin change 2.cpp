/*
Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
*/

 int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int dp[n+1][amount+1];
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<=amount;i++)
        {
            dp[0][i]=0;
        }
           
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                 int nottake= dp[i-1][j];
                int take=0;
                if(j>=coins[i-1])
                {
                    take= dp[i][j-coins[i-1]];
                }
                dp[i][j]= take+nottake;
            }
        }
        return dp[n][amount];
    }
