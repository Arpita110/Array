/*
UNIQUE PATH II
Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right
*/

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0 && obstacleGrid[i][j]==0)
                {
                        dp[i][j] = 1;  
                }
                else if(i==0&& obstacleGrid[i][j]==0)
                {
                        dp[i][j] = dp[i][j-1];
                    
           }
                else if(j==0&& obstacleGrid[i][j]==0){
                   
                        dp[i][j] = dp[i-1][j];
                    
                }
                else if(obstacleGrid[i][j]==1)
                    {
                        dp[i][j] = 0; 
                    }
                else if(obstacleGrid[i][j]==0)
                    {
                        dp[i][j] = dp[i-1][j] + dp[i][j-1];
                   }
                }
            }
        
        return dp[n-1][m-1];
    }
