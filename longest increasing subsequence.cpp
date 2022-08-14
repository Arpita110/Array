/*

LONGEST INCREASING SUBSEQUENCE
Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
*/

 int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
for (int index = n - 1; index >= 0; index--)
 {
for (int prev = index - 1; prev >= -1; prev--)
 {
int include = 0;
int exclude = 0;
exclude = dp[index + 1][prev + 1];
if (prev == -1 or nums[index] > nums[prev])
 {
include = 1 + dp[index + 1][index + 1];
 }
dp[index][prev + 1] = max(include, exclude);
 }
 }
return dp[0][0];
