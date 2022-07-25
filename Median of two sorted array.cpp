/*


MEDIAN OF TWO SORTED ARRAY
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 
*/
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> med;
        int n1 = 0,n2 = 0;
        for (int i = 0; i < (nums1.size()+nums2.size()); i++){
            if (n1 < nums1.size() && n2 < nums2.size()){
                if (nums1[n1] > nums2[n2]){
                    med.push_back(nums2[n2++]);
                }else{
                    med.push_back(nums1[n1++]);
                }
            }else if (n1 == nums1.size()){
                med.push_back(nums2[n2++]);
            }else{
                med.push_back(nums1[n1++]);
            }
        }
        if (med.size() % 2 == 0){
            return double(med[med.size()/2]+med[med.size()/2 -1])/2;
        }else{
            return double(med[int(med.size()/2)]);
        }
    }
