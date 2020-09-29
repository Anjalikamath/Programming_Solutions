/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     
        int n=lists.size();
        ListNode*head=new ListNode(-1);
        ListNode*temp=head,*cur=NULL;
        int idx=0;
        do{
            
            for(int i=0;i<n;i++){
                if(lists[i]){
                if(cur==NULL || lists[i]->val<cur->val){
                    cur=lists[i];
                    idx=i;
                }
                }
            }
            if(cur){
                temp->next=cur;
                lists[idx]=lists[idx]->next;
            }
            temp=cur;
            cur=NULL;
            
        }while(temp);
        return head->next;
    }
};