/*SUBSETS
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
*/

vector<vector<int>>res;
    void subset(vector<int>& nums,vector<int>&temp,int start)
    {
        if(start==nums.size())
        {
            res.push_back(temp);
            return ;
        }
        temp.push_back(nums[start]);
        subset(nums,temp,start+1);
        temp.pop_back();
        subset(nums,temp,start+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> temp;
        subset(nums,temp, 0);
        return res;
        
    }
