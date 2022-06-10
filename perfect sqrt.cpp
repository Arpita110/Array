/** 
Valid Perfect Square
Input: num = 16
Output: true


 bool isPerfectSquare(int num) {
         if(num == 1) 
             return 1;
        int start = 0;
        int end = num/2;
        while(start <= end){
            long long mid = start + (end-start)/2;
            if(mid*mid == num){
                return 1;
            }
            else if(mid*mid > num){
                end = mid-1;
            }
            else start= mid+1;
        }
        return 0;
    }
