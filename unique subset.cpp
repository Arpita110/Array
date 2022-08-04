/*UNIQUE SUBSET 

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
*/

 void fun(int ind,vector<int>& ds,vector<vector<int>>& res,vector<int>& nums,int n){
        res.push_back(ds);
        for(int i=ind;i<n;i++){
            if(i!=ind and (nums[i]==nums[i-1]))
                continue;
            ds.push_back(nums[i]);
            fun(i+1,ds,res,nums,n);
            
            ds.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>> res;
        vector<int> ds;
        int n=size(nums);
        fun(0,ds,res,nums,n);
        return res;
    }
