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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)return NULL;
        if(l1 && !l2)return l1;
        if(!l1 && l2)return l2;
        ListNode*head=new ListNode(-1);
        
        ListNode*p=l1,*q=l2,*temp=head;
        while(p && q){
            
            if(p->val<=q->val){temp->next=new ListNode(p->val);p=p->next;}
            else{temp->next=new ListNode(q->val);
                q=q->next;}
            temp=temp->next;
        }
        if(p && !q){
            while(p){
                temp->next=new ListNode(p->val);
                p=p->next;
                temp=temp->next;
            }
        }
        else if(q && !p){
            while(q){
            temp->next=new ListNode(q->val);
            q=q->next;
            temp=temp->next;
            }
            
        }
        return head->next;
    }
};