/** input =8
output= 2
input =9
output =3
*/


int mySqrt(int x) {
      if(x <= 1) return x;

		int l = 1;
		int r = x;

		while(l <= r) {
			int mid = l + (r -l)/2;

			if(mid == x/mid) {
				return mid;
			} if(mid > x/mid) {
				r = mid -1;
			} else {
				l = mid +1;
			}
		}
		return r;  
    }
