 /*
 Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
*/
vector<int> twoSum(vector<int>& numbers, int target) {
     vector<int>v;
        int i=0;
        int j= numbers.size()-1;
        while(i<j)
        {
            int k =numbers[i]+numbers[j];
        if(target==k)
        {
            v.push_back(i+1);
             v.push_back(j+1);
        }
        if(target>k)
        {
            i++;
        }
        else
        {
            j--;
        }
        }
        return v;
    }
