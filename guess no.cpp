/**
Input: n = 10, pick = 6
Output: 6
**/
int guessNumber(int n) {
       int low = 1,high = n;
        int pick = 0;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            int res = guess(mid); // res => -1,0,1
            if(res==0)
            {
                pick = mid;
                break;
            }
            else if(res==-1)
            {
                high = mid-1;
            }
            else if(res==1)
            {
                low = mid+1;
            }
        }
    return pick; 
    }
