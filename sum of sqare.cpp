/**
SUM OF SQARE NO
Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
*/
bool judgeSquareSum(int c) {
         if(c==0 || c==1) {
            return true;
        }
     long long int l=0, r=sqrt(c);
        while(l<=r) {
            if(l*l + r*r == c) {
                return true;
            } else if(l*l + r*r < c) 
            {
                l++;
            } else 
            {
                r--;
            }
        }
        return false;
    }
