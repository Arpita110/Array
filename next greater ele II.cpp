/*
NEXT GREATER ELEMENT
Input: nums = [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number. 
The second 1's next greater number needs to search circularly, which is also 2.
*/


    int n= nums.size();
        stack<int>s;
        int i;
      vector<int>v(n,-1);
        for(int i=n-1;i>=0;i--)
        {
            s.push(nums[i]);
        }
       i=n-1;
        while(i>=0)
        {
          while(!s.empty() && s.top() <= nums[i])   
              s.pop();
            if(!s.empty())
                v[i]=s.top();
            s.push(nums[i]);
            i--;
        }
        return v;
