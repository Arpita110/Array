/*
Numbers Are Smaller Than the Current Number

Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]

*/
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
       
        for(int i=0;i<nums.size();i++){
             int count=0;
            int a=nums[i];
            for(int j=0; j<nums.size();j++)
            {
                if(a>nums[j])
                {
                    count++;
                } 
            }
            v.push_back(count);
            
        }
        return v;
    }
