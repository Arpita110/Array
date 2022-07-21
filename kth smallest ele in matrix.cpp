/*
KTH smallest element in matrix
Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
Output: 13
Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and the 8th smallest number is 13
*/

int kthSmallest(vector<vector<int>>& matrix, int k) {
      int n = matrix.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(pq.size()<k)
                    pq.push(matrix[i][j]);
                 else {
                    if(pq.top()>matrix[i][j]){
                        pq.pop();
                        pq.push(matrix[i][j]);
                    }
                }
               
            }   
        } 
        return pq.top();
    }
