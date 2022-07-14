/*
K CLOSEST ELEMENT

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
*/
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       vector<int> ans;
       priority_queue<pair<int,int>> maxheap;
        for(int i=0;i<arr.size();i++)
        {
         maxheap.push({abs(arr[i]-x),arr[i]});
           if(maxheap.size()>k){
          maxheap.pop();
        }
         }
          while(maxheap.size()>0){
           ans.push_back(maxheap.top().second);
          maxheap.pop();
          }
           sort(ans.begin(), ans.end());
          return ans;
}
