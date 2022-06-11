/**
Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
Output: 2
*/



int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count =0;
        for(int i=0;i<arr1.size();i++)
        {
            for(int j=0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    count++;
                    break;
                    
                }
            }
        }
        return arr1.size()-count;
    }
