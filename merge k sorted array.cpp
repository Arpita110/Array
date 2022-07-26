/*
MERGE K SORTED ARRAY

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
*/


 ListNode* mergeKLists(vector<ListNode*>& lists) {
         ListNode* ans=new ListNode(0);
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=NULL){
                q.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        int v;
        ListNode* head=ans;
        while(!q.empty()){
            v=q.top();
            ans->next = new ListNode(v); 
            ans = ans -> next;
            q.pop();
           
        }
        
        return head->next;
    }
