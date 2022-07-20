/* NEXT GREATER ELEMENT 1

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
*/

 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      int n = nums2.size();
    vector<int>ans(n);
    stack<int>s;
     for(int i=n-1; i>=0; i--)
     { 
        while(!s.empty() && s.top() <= nums2[i]){
            s.pop();
        }
        if(s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }
        s.push(nums2[i]);
    }
    
    vector<int>res;
    
    for(int i= 0; i<nums1.size(); i++ ){
        for(int j = 0 ;j <n ;j++) {
            if(nums1[i] == nums2[j]) {
                res.push_back(ans[j]);  
                break;
            }
        }
    }
    return res;  
    }
